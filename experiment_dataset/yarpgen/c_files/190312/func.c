/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190312
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)1024)) : (((/* implicit */int) var_7)))))));
    var_18 = ((/* implicit */unsigned long long int) (unsigned short)4256);
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)39678))))) ? (((/* implicit */int) (unsigned short)8804)) : (((/* implicit */int) (unsigned char)102))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) ((short) var_0))) != (arr_6 [i_1])))) : (((/* implicit */int) arr_1 [i_1]))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
                {
                    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_2] [i_2]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_21 &= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((unsigned long long int) arr_6 [i_0])) : (((/* implicit */unsigned long long int) ((long long int) arr_12 [i_0] [i_1] [i_2] [i_3 + 3] [i_0] [i_3 + 3] [i_0]))))));
                                var_22 = ((/* implicit */unsigned long long int) arr_6 [i_1]);
                                var_23 *= ((/* implicit */signed char) arr_12 [i_0] [i_1] [9U] [i_3] [i_4] [i_1] [i_2]);
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) var_9);
                            }
                        } 
                    } 
                }
                for (signed char i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                {
                    var_24 &= ((/* implicit */long long int) (~(((((/* implicit */int) arr_10 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                    arr_17 [i_0] [i_5] [i_5] [(unsigned char)1] = ((/* implicit */int) (unsigned short)25858);
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 2) 
                {
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)56731)) & (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_4)));
                    var_26 *= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) ^ (2018180048)));
                    /* LoopSeq 3 */
                    for (short i_7 = 2; i_7 < 19; i_7 += 3) 
                    {
                        arr_22 [i_7] [i_7] = ((/* implicit */unsigned short) var_16);
                        var_27 = ((signed char) (~(((/* implicit */int) var_2))));
                    }
                    for (unsigned char i_8 = 2; i_8 < 21; i_8 += 2) 
                    {
                        var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (arr_8 [i_8] [i_8] [i_6 - 2] [i_6 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64521))) != (arr_8 [i_0] [i_1] [i_0] [20])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_24 [(signed char)9] [i_1] [i_1] [i_6 - 2])))) : (min((arr_11 [i_0] [(unsigned char)8] [i_0] [i_6] [i_0] [i_6]), (((/* implicit */unsigned long long int) ((arr_2 [i_0]) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) arr_2 [i_6])))))))));
                        var_29 = ((/* implicit */int) ((unsigned short) arr_10 [i_8] [i_1] [i_1] [i_6 - 1] [i_1] [i_6 - 1]));
                        var_30 -= ((/* implicit */long long int) min((((/* implicit */unsigned char) ((_Bool) (unsigned short)1023))), (((unsigned char) arr_15 [i_8 + 2]))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned short) var_16);
                        var_32 = ((/* implicit */signed char) var_11);
                    }
                }
            }
        } 
    } 
}

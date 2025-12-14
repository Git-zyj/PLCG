/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192286
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((signed char) (unsigned char)89)))));
                        arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_3] [i_3] [i_1 + 1] [i_2 - 1]))) * (arr_11 [i_0] [i_1 + 1] [i_0] [i_1])));
                        var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((/* implicit */int) arr_2 [i_3])) : (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))));
                    }
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (arr_7 [i_2] [i_1] [i_1 - 1] [i_0])))) : ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_0 [(unsigned char)20])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1 + 1] [i_2] [i_1 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((unsigned int) arr_4 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(unsigned short)8] [i_1 + 1] [i_1 + 1] [i_2 + 1]))))))));
                    var_19 = ((/* implicit */signed char) max((((unsigned short) arr_5 [i_1 - 1])), (((/* implicit */unsigned short) var_9))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 3; i_4 < 20; i_4 += 2) 
    {
        for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    var_20 = ((/* implicit */int) (-(arr_6 [i_5])));
                    arr_22 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_12 [9U] [9U] [i_6]), (((/* implicit */unsigned short) max((((/* implicit */signed char) (_Bool)1)), (var_0))))))) ? (var_7) : (((/* implicit */long long int) ((((((/* implicit */int) arr_21 [i_4 + 1] [i_5] [i_6])) >= (((/* implicit */int) arr_3 [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1] [1LL] [i_6]))) : (min((arr_1 [i_5]), (((/* implicit */unsigned int) var_11)))))))));
                    var_21 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-9)))))));
                }
                var_22 = ((/* implicit */unsigned int) arr_7 [(unsigned char)6] [i_4] [i_5] [i_5]);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_7 = 4; i_7 < 14; i_7 += 2) 
    {
        var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))));
        arr_26 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) + (9223372036854775792LL)))) ? (((/* implicit */int) (unsigned short)34639)) : (((/* implicit */int) (_Bool)1))));
    }
    var_24 = var_9;
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241593
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
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_14 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2] [i_2]))))) ? (arr_1 [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
                    arr_6 [i_2] [i_1] [(unsigned short)5] [i_0] = ((/* implicit */unsigned int) var_6);
                    arr_7 [i_0] [i_1] [(_Bool)1] [(unsigned short)7] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_12)), (arr_4 [i_1] [(_Bool)1])))) && (((/* implicit */_Bool) var_0)))))));
                    var_15 = ((((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned short)32768))))))) && (((/* implicit */_Bool) arr_5 [i_0 + 2] [4U] [i_0 - 2])));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((var_7) || (((/* implicit */_Bool) arr_1 [(short)19])))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 - 3])))))));
                }
                for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    var_17 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) || (((/* implicit */_Bool) arr_1 [i_0 + 1]))))), (((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)93)))))));
                    var_18 -= ((/* implicit */short) (+(((/* implicit */int) var_13))));
                }
                /* vectorizable */
                for (signed char i_4 = 3; i_4 < 21; i_4 += 4) 
                {
                    arr_12 [8U] [i_1] [i_4] [i_0] = ((/* implicit */unsigned short) ((unsigned int) arr_0 [i_0 + 2]));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 22; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) arr_4 [i_5] [i_6]);
                                var_20 = ((/* implicit */long long int) ((((var_7) || (((/* implicit */_Bool) arr_11 [i_0] [22U] [i_5 - 2] [i_5 - 2])))) || (arr_9 [i_6] [i_1] [6LL])));
                            }
                        } 
                    } 
                    arr_19 [i_0] [17] [i_1] [i_4] = ((/* implicit */_Bool) ((unsigned short) arr_10 [i_0 - 1] [i_0 + 2] [i_0 + 2]));
                }
                var_21 = ((/* implicit */_Bool) arr_5 [2LL] [i_1] [i_1]);
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_1))) && (((/* implicit */_Bool) ((signed char) (signed char)111)))));
                arr_20 [i_0] = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) || ((_Bool)0))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_3);
    var_24 = ((/* implicit */int) var_12);
}

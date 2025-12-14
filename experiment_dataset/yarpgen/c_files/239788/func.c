/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239788
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)65525))));
        var_16 += ((/* implicit */unsigned short) (_Bool)1);
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 12; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            {
                                var_17 *= ((/* implicit */unsigned char) (-((~(((/* implicit */int) (unsigned short)10))))));
                                var_18 *= ((/* implicit */short) max((((((/* implicit */_Bool) var_9)) ? (arr_12 [i_1] [(unsigned char)9] [i_3] [i_2 - 2] [i_5] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_2 + 1] [i_2] [i_2 + 1]))))), (((/* implicit */long long int) arr_8 [i_2 + 2] [(unsigned short)0] [i_3]))));
                                var_19 -= ((/* implicit */unsigned short) arr_16 [i_1] [i_1]);
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((min((((/* implicit */unsigned int) (signed char)46)), (max((var_10), (((/* implicit */unsigned int) var_8)))))), (((/* implicit */unsigned int) ((int) ((unsigned int) var_1)))))))));
                            }
                        } 
                    } 
                    var_21 ^= ((/* implicit */_Bool) ((12U) - (((((/* implicit */_Bool) min(((unsigned short)10), (((/* implicit */unsigned short) var_2))))) ? ((+(1426864506U))) : (((unsigned int) (unsigned char)250))))));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? ((~(((/* implicit */int) (unsigned short)65525)))) : (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) ((var_12) ? (arr_15 [i_1] [(unsigned char)5] [i_1] [i_1] [(unsigned char)5]) : (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1] [i_1])) - (-304790043)))) : (12U)))));
    }
    var_23 = ((/* implicit */unsigned int) var_13);
}

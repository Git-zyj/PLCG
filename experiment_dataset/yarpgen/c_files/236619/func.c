/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236619
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
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4294967295U))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((-1LL), (((-9223372036854775807LL) - (((/* implicit */long long int) (-2147483647 - 1)))))))) ? (1152921504606846976LL) : ((((-(6LL))) - (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)0))))))))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
                {
                    arr_10 [(short)2] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((-7LL) / (-1LL)))))) ? (max((((-7LL) ^ (((/* implicit */long long int) 2097024U)))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))))) : (((/* implicit */long long int) 2U))));
                    arr_11 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned int) min((((((/* implicit */int) (_Bool)1)) >> (((-9) + (19))))), (((/* implicit */int) ((8) == (((/* implicit */int) (_Bool)1)))))))), (((5U) - (((/* implicit */unsigned int) 0))))));
                    arr_12 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */int) ((4294967295U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) * (((/* implicit */int) ((short) 0U)))))));
                    arr_13 [i_1] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) min((5U), (((/* implicit */unsigned int) (short)32766))))) ? ((-(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
                {
                    arr_18 [i_1] = ((/* implicit */_Bool) -5LL);
                    arr_19 [i_0] [i_1] [i_3] = ((/* implicit */short) ((28LL) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)65280)) != (((/* implicit */int) (signed char)-1)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 2; i_4 < 16; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            {
                                arr_26 [i_1] [i_1] [i_1] [7U] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
                                arr_27 [i_3] [i_5] = ((/* implicit */int) (+(((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17))) : (0ULL)))));
                                arr_28 [i_1] [(unsigned short)12] = ((/* implicit */unsigned int) (_Bool)1);
                                arr_29 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(0U)))) && (((9223372036854775807LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))));
                            }
                        } 
                    } 
                    arr_30 [i_0] [i_3] = ((((((/* implicit */_Bool) 16U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-9223372036854775807LL))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))));
                }
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    arr_33 [i_1] [i_1] [i_1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((0ULL), (((/* implicit */unsigned long long int) 535822336)))) % (((/* implicit */unsigned long long int) (~(1056964608))))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)768))) ^ (5U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 17LL)) ? (((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) (short)1008)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)1))))))))));
                    arr_34 [i_0] [i_1] [i_6] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 0)))) || (((/* implicit */_Bool) ((short) max((2097151LL), ((-9223372036854775807LL - 1LL))))))));
                    arr_35 [i_1] = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) >= (((((/* implicit */int) (unsigned short)65530)) >> (((/* implicit */int) (unsigned short)0))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) == (max((((/* implicit */long long int) 2147483647)), (4LL)))))));
                }
            }
        } 
    } 
}

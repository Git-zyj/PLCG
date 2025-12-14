/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220185
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)3)) + (3932160)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_0)))))));
                                var_17 -= ((/* implicit */int) (((+(12ULL))) / (((/* implicit */unsigned long long int) var_4))));
                                var_18 = ((/* implicit */short) 1ULL);
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((var_3) - (((/* implicit */long long int) ((-3932161) - (((/* implicit */int) var_14))))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) ((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) (unsigned short)24)) : (((/* implicit */int) arr_0 [i_0]))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_5 [3] [i_1] [(short)1] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)11] [i_0]))) + (1ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) | (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (_Bool)0))))));
                }
                var_23 &= ((/* implicit */short) max((((/* implicit */long long int) (~(min((var_4), (((/* implicit */int) (_Bool)1))))))), (((arr_6 [i_0] [17LL] [17LL]) & (((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned short)6)) : ((-2147483647 - 1)))))))));
                var_24 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 0ULL)))) ? (max((((/* implicit */int) ((_Bool) var_3))), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_6)) : (var_7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                arr_11 [10ULL] |= ((/* implicit */unsigned char) var_14);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_21 [i_5] [i_5] [(unsigned char)17] [i_6] = ((/* implicit */unsigned char) (_Bool)1);
                    arr_22 [i_6] [i_6] &= ((((((/* implicit */_Bool) -1LL)) || (((/* implicit */_Bool) arr_15 [i_6])))) || (((/* implicit */_Bool) max((var_13), (((/* implicit */int) (unsigned char)7))))));
                }
            } 
        } 
    } 
    var_25 += ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 12ULL)) ? ((-9223372036854775807LL - 1LL)) : (4503582447501312LL)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14)))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)127)))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))));
}

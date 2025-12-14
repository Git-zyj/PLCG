/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234594
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 3) /* same iter space */
                    {
                        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_11))) ? (var_1) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))));
                        arr_13 [i_0] [i_1] [i_0] [i_3] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((int) var_7)))));
                        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (+(var_6))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 3) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned short) (+(var_2)));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 2; i_5 < 21; i_5 += 2) 
                        {
                            var_16 *= ((/* implicit */unsigned long long int) (+(var_1)));
                            arr_19 [i_2] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
                            var_17 = ((/* implicit */unsigned short) ((var_5) ? (var_6) : (((/* implicit */int) var_0))));
                        }
                    }
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) var_4))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((int) min((var_3), (((/* implicit */unsigned int) var_0)))))))))));
                        var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned long long int) (+(var_1)))) : (min((min((var_10), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) var_5))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((var_7), (((/* implicit */unsigned char) var_5)))))));
                            arr_28 [i_0] [i_1] [i_2] [i_2] [i_6] [i_6] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1889285354)) ? (-788336641931872737LL) : (((/* implicit */long long int) 4294967295U))));
                            var_21 -= ((/* implicit */_Bool) var_3);
                            var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
                        {
                            var_23 |= ((/* implicit */short) (-((+(((/* implicit */int) var_4))))));
                            var_24 = ((/* implicit */unsigned int) var_11);
                            arr_33 [i_2] [i_0] [i_1] [i_2] [i_6] [i_8] = max((((/* implicit */unsigned int) (signed char)-109)), (2483725819U));
                            var_25 -= ((/* implicit */unsigned int) var_8);
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_0))));
                            arr_36 [i_0] [i_1] [i_2] = ((/* implicit */long long int) var_9);
                            var_27 += ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) ((unsigned short) var_2))), (((unsigned long long int) var_5))))));
                            arr_37 [i_9] [i_6] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2U))));
                        }
                    }
                    arr_38 [i_1] [i_2] = (+((+(((/* implicit */int) var_7)))));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_11)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (var_6)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!((_Bool)1)))))) : ((+(((/* implicit */int) var_0))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned short) var_5)), (var_11))), (var_0))))));
}

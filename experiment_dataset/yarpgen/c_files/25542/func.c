/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25542
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)(-32767 - 1))) < (((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */signed char) var_9);
                    arr_6 [i_1] [i_0] [i_1] = ((/* implicit */int) arr_5 [11ULL] [(unsigned short)13] [i_2]);
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)125))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] = -3426511545702015633LL;
                        var_20 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (!(((/* implicit */_Bool) -1214277908))))))) > (((/* implicit */int) (unsigned char)87))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        arr_16 [i_4] [i_1] [6U] [i_1] [i_1] [i_0] &= ((/* implicit */signed char) arr_2 [i_1] [i_2] [i_4]);
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (!(var_11))))));
                        var_22 = ((/* implicit */long long int) (~((+((+(((/* implicit */int) (unsigned char)206))))))));
                    }
                    arr_17 [13ULL] [i_1] [i_0] [i_2] = ((/* implicit */unsigned long long int) (_Bool)1);
                }
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)-25590)) + (25610)))));
                        var_24 = ((/* implicit */unsigned long long int) ((signed char) ((arr_14 [(unsigned char)1] [i_1 - 2] [i_5] [i_6]) ? (var_2) : (((/* implicit */int) (unsigned short)19894)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 2; i_7 < 21; i_7 += 4) 
                    {
                        arr_25 [i_0] [i_1 - 2] [i_1 - 2] [i_0] [i_0] = ((/* implicit */unsigned int) arr_23 [i_0] [i_1 - 1] [i_5] [i_7 - 1]);
                        arr_26 [i_0] [i_1 - 1] [i_0] [i_7 - 2] = ((/* implicit */unsigned long long int) ((short) ((unsigned long long int) (short)4360)));
                    }
                    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        var_25 = (((_Bool)1) ? (503933301551219539LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                        arr_29 [i_0] [(_Bool)1] [i_5] [i_0] [i_0] [(short)0] = ((/* implicit */unsigned char) var_4);
                    }
                    arr_30 [i_0] [i_0] [i_0] = ((/* implicit */short) ((5993404125069329675ULL) < (((/* implicit */unsigned long long int) -1343104276))));
                    arr_31 [i_0] [i_0] [i_5] [5ULL] = ((/* implicit */unsigned char) var_10);
                    arr_32 [i_0] [(_Bool)1] [i_5] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((unsigned long long int) max(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_11 [i_5] [13ULL] [i_1] [(unsigned char)8] [i_0] [i_0])) >> (((arr_8 [i_0] [i_1] [i_0] [i_5] [i_1] [i_1]) - (3910617488U))))))))) : (((/* implicit */unsigned short) ((unsigned long long int) max(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_11 [i_5] [13ULL] [i_1] [(unsigned char)8] [i_0] [i_0])) >> (((((arr_8 [i_0] [i_1] [i_0] [i_5] [i_1] [i_1]) - (3910617488U))) - (3852510253U)))))))));
                    var_26 = ((/* implicit */signed char) 1040980987348409993ULL);
                }
                arr_33 [i_0] [i_0] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                arr_34 [i_0] = max(((signed char)73), (((/* implicit */signed char) (_Bool)1)));
                arr_35 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) (signed char)48)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_9 = 2; i_9 < 20; i_9 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 3; i_10 < 20; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_27 += ((/* implicit */unsigned char) ((unsigned long long int) var_8));
                                var_28 = ((/* implicit */unsigned char) arr_39 [i_1 + 1] [i_9 + 2] [i_10 - 2] [i_10 + 1]);
                                arr_44 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
                                var_29 = ((/* implicit */unsigned int) var_7);
                            }
                        } 
                    } 
                    arr_45 [i_9 + 1] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4294967295U))));
                }
            }
        } 
    } 
}

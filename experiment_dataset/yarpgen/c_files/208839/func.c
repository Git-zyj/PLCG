/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208839
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
    var_10 = ((/* implicit */int) (~((((-(var_6))) + (min((4034324756U), (((/* implicit */unsigned int) (short)30891))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
                    {
                        var_11 = ((/* implicit */signed char) var_4);
                        var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 260642539U)) ? (((/* implicit */int) (_Bool)1)) : (-1))))));
                        var_13 = ((/* implicit */short) ((long long int) arr_5 [i_0] [i_1] [12LL]));
                        arr_9 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((-10) ^ (((/* implicit */int) arr_4 [i_3] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((260642545U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)72))))))) : (((long long int) 10))));
                    }
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 2; i_5 < 21; i_5 += 1) /* same iter space */
                        {
                            arr_14 [i_1] [i_1] [i_1] [i_4] [i_1] [4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_5 + 1] [i_5 - 2])) && (((/* implicit */_Bool) arr_4 [i_5 + 3] [i_5 - 1]))));
                            var_14 |= ((/* implicit */signed char) var_6);
                            var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -26)) && (((/* implicit */_Bool) 268435456ULL))));
                            arr_15 [i_0] [i_1] [i_1] [i_0] [i_5 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) + (var_5)))) : (((((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_2] [i_5])) ^ (arr_2 [i_0] [i_1] [i_2])))));
                            var_16 |= ((/* implicit */unsigned char) (-((~(((/* implicit */int) var_0))))));
                        }
                        for (unsigned char i_6 = 2; i_6 < 21; i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_6 - 2] [i_6] [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6])) ? (4194303U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_6 - 2] [i_6] [i_6 - 2] [i_6] [i_6])))));
                            arr_21 [i_0] [i_0] [i_2] [i_0] [i_6] [i_0] [i_2] = ((/* implicit */unsigned int) var_5);
                            arr_22 [i_6] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_6 + 2] [i_6 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30820))) : (((var_6) + (((/* implicit */unsigned int) -1204612662))))));
                            var_17 = ((/* implicit */signed char) var_8);
                        }
                        var_18 = -1;
                    }
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
                    {
                        arr_26 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (var_6)))));
                        var_19 = ((/* implicit */unsigned short) arr_2 [i_1] [i_2] [i_7]);
                        arr_27 [i_1] = ((/* implicit */long long int) 9489671017558665420ULL);
                    }
                    arr_28 [i_0] [i_0] [(unsigned short)6] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_20 |= ((/* implicit */_Bool) (-((-(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_8] [(unsigned char)19] [i_1] [i_1] [i_0])) && (((/* implicit */_Bool) 260642545U)))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 4) 
                    {
                        arr_36 [i_9] [i_1] [(signed char)2] [i_1] [i_8] [i_9 + 3] = min((((((((/* implicit */_Bool) 967687126U)) && (((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_1] [(unsigned char)21] [i_0])))) ? (arr_33 [i_9 - 1] [i_9] [i_9 - 1]) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)48)) ^ (((/* implicit */int) (unsigned short)34717))))))), (((/* implicit */unsigned int) -1)));
                        arr_37 [i_8] [i_0] [i_0] [i_8] [i_0] [17U] = arr_2 [i_1] [i_0] [i_0];
                        var_21 = ((/* implicit */long long int) 258048ULL);
                    }
                    arr_38 [i_8] [i_8] [i_8] [i_0] = ((/* implicit */unsigned short) ((int) (_Bool)1));
                }
                var_22 = ((/* implicit */_Bool) 4290772993U);
                var_23 = ((/* implicit */unsigned long long int) (short)24132);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_10 = 0; i_10 < 10; i_10 += 2) 
    {
        arr_43 [i_10] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))), (((((((/* implicit */_Bool) 199675889)) ? (16854785589894420150ULL) : (((/* implicit */unsigned long long int) 4034324756U)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-30891))))))))));
        var_24 = ((/* implicit */short) arr_1 [i_10]);
        arr_44 [8] = ((/* implicit */int) arr_8 [i_10] [i_10] [i_10] [i_10]);
        /* LoopSeq 1 */
        for (short i_11 = 0; i_11 < 10; i_11 += 2) 
        {
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)60))))), ((~(((/* implicit */int) (signed char)-40))))))) ^ (((unsigned int) (_Bool)1)))))));
            arr_49 [i_10] [i_11] [i_10] = ((((/* implicit */_Bool) arr_46 [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_3))) || (((/* implicit */_Bool) arr_24 [(short)19] [(short)19] [i_11] [i_11])))))) : ((+(((unsigned long long int) 2834799141U)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned long long int) arr_2 [i_10] [i_11] [i_12]))));
                /* LoopSeq 2 */
                for (unsigned int i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    arr_56 [i_10] [i_13] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_46 [i_10] [i_12]))));
                    arr_57 [i_13] [i_13] = ((/* implicit */signed char) var_3);
                }
                for (short i_14 = 1; i_14 < 9; i_14 += 1) 
                {
                    arr_61 [i_10] [(unsigned short)2] [i_10] [(_Bool)1] [i_14] [i_10] = ((/* implicit */unsigned int) 199675889);
                    arr_62 [i_14] = ((/* implicit */short) ((unsigned int) var_4));
                }
            }
            arr_63 [i_10] = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_4)) + (((/* implicit */int) (signed char)-91))))));
        }
    }
    for (unsigned char i_15 = 0; i_15 < 19; i_15 += 4) 
    {
        var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_15] [i_15] [i_15])), (199675880))))));
        var_28 = ((/* implicit */_Bool) arr_0 [i_15] [i_15]);
        var_29 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(arr_17 [i_15] [i_15] [i_15] [i_15])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_15] [i_15]))) - (arr_25 [i_15] [i_15] [i_15] [i_15])))));
        arr_66 [i_15] [i_15] = ((/* implicit */_Bool) arr_35 [i_15]);
    }
    for (int i_16 = 2; i_16 < 19; i_16 += 4) 
    {
        arr_70 [i_16] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) ((long long int) arr_35 [i_16]))) ? (arr_33 [i_16] [i_16 - 2] [i_16 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_16] [i_16] [i_16])) > (((/* implicit */int) var_4)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [21ULL] [21ULL] [i_16])))));
        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -7799232377839287547LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_16] [i_16] [i_16 + 1]))) : (4290772984U))), (((/* implicit */unsigned int) (short)-25323))))) ? (4290772974U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [22LL] [22LL] [i_16 - 2] [18LL])))))))))));
    }
    var_31 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -7790639113291444461LL)), (8957073056150886196ULL)));
    var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))));
}

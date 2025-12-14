/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228222
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_10 += ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) % (arr_0 [i_0 + 1]))) % (((arr_0 [i_0 - 2]) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((var_6) << (min((((((/* implicit */_Bool) arr_5 [i_3] [i_0] [i_0 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)29079)))), (((/* implicit */int) var_3)))))))));
                        var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [8LL] [i_3] [(signed char)14] [i_3] [i_1] = ((/* implicit */unsigned int) (+(min((min((-2126857789170659241LL), (((/* implicit */long long int) arr_3 [i_0 + 1] [i_1] [i_1])))), (((/* implicit */long long int) var_6))))));
                            var_13 = ((/* implicit */signed char) arr_7 [i_0 + 1] [i_1] [i_2] [i_3]);
                        }
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            arr_16 [4LL] [i_1] [6LL] [i_3] [i_3] [(unsigned char)8] [i_3] = ((/* implicit */unsigned short) -2126857789170659242LL);
                            var_14 = ((/* implicit */unsigned char) (unsigned short)55965);
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) var_3)) << (((((((/* implicit */int) (short)-1)) + (28))) - (18)))))))));
                            arr_17 [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_1] [i_2 + 2] [i_5] [i_5] [i_5] [i_5])) ? (((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_2 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_4 [i_0] [i_1] [(unsigned char)13] [(unsigned char)13]))) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_8))))));
                            var_16 = ((/* implicit */long long int) ((int) var_1));
                        }
                    }
                    var_17 = ((/* implicit */signed char) arr_6 [i_0 + 2] [i_1] [i_2 - 2]);
                }
            } 
        } 
    }
    for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        arr_20 [i_6] [i_6] = ((/* implicit */long long int) ((((unsigned long long int) arr_2 [(unsigned short)11] [i_6] [(unsigned short)11])) + (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_3)), (var_9))), (((var_7) % (((/* implicit */long long int) var_6)))))))));
        var_18 ^= ((/* implicit */unsigned char) arr_5 [i_6] [i_6] [i_6]);
        var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -2126857789170659241LL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (max((var_8), (((/* implicit */long long int) var_6))))))), (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)41))) >= (arr_15 [i_6]))) ? (min((((/* implicit */unsigned long long int) arr_5 [i_6] [i_6] [(signed char)8])), (arr_18 [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6] [i_6] [i_6] [i_6])))))));
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
        var_21 += ((/* implicit */unsigned short) arr_23 [i_7]);
    }
    /* LoopNest 3 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (signed char i_9 = 1; i_9 < 8; i_9 += 3) 
        {
            for (int i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 1; i_12 < 8; i_12 += 3) 
                        {
                            var_22 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) min((((/* implicit */unsigned int) arr_24 [i_8])), (3604854376U)))))) / (((var_1) & (max((((/* implicit */long long int) (_Bool)1)), (2036713460120238577LL)))))));
                            arr_41 [i_9] [i_12] = min((((/* implicit */unsigned int) (_Bool)1)), (((unsigned int) 2126857789170659256LL)));
                            var_23 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 690112933U)), (arr_21 [i_8])))) ? (var_9) : (var_1))));
                            var_24 = ((/* implicit */unsigned int) -2126857789170659223LL);
                        }
                        for (short i_13 = 2; i_13 < 9; i_13 += 4) 
                        {
                            arr_44 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((2126857789170659229LL) + (((/* implicit */long long int) ((/* implicit */int) arr_33 [(signed char)1] [i_9 - 1] [i_10]))))) + (arr_38 [i_11] [i_9 - 1] [i_9 - 1] [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((0LL) - (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_9])))))))))) : (((var_9) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_45 [i_9] [(unsigned short)5] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_8] [i_9 - 1] [i_10] [(signed char)12])) && ((!(((/* implicit */_Bool) 5458213933259699009LL))))));
                            var_25 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) arr_32 [3ULL] [i_9 + 1] [i_9 + 1] [i_9 + 1])), (arr_40 [i_8] [i_9 + 1] [i_9])))))))));
                            arr_46 [i_9 + 2] [i_9 + 2] [4ULL] [i_9 - 1] [i_9 - 1] [i_9] [i_9 + 1] = ((/* implicit */long long int) ((unsigned int) min((min((var_9), (((/* implicit */long long int) 3604854377U)))), (((/* implicit */long long int) (_Bool)0)))));
                            arr_47 [i_8] [i_9] [i_10] [i_10] [i_9] = arr_5 [i_8] [i_9] [i_13];
                        }
                        var_26 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_35 [i_8] [i_9] [(signed char)7] [i_11])) % (((/* implicit */int) arr_35 [i_8] [i_9] [i_8] [i_8])))) << (((5458213933259699013LL) % (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_8] [i_9] [i_8] [i_8])))))));
                        arr_48 [0] [i_9] = ((/* implicit */unsigned short) var_3);
                    }
                    var_27 = ((/* implicit */unsigned int) (!(((_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (11467959239379980640ULL))))));
                    var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_15 [i_8])) ? (3604854377U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [(unsigned char)16]))))), (((/* implicit */unsigned int) max(((unsigned char)14), (arr_32 [i_8] [4LL] [(signed char)8] [i_10])))))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (1777032286) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4)))) : (var_1))), (((/* implicit */long long int) var_4))));
}

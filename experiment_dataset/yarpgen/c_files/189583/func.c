/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189583
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_13)) ? (515501709) : (((/* implicit */int) var_17)))) : (((/* implicit */int) (unsigned short)8993)))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)17198)) : (((/* implicit */int) var_19))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [(unsigned short)14] [i_1] [i_2] &= ((/* implicit */unsigned char) min(((short)19193), (((/* implicit */short) min(((unsigned char)95), (arr_2 [i_0 + 4] [i_0 - 1] [18LL]))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_0] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0]);
                        arr_10 [(_Bool)1] [i_1] [i_2] [i_3] |= ((/* implicit */unsigned char) min((max((((arr_0 [i_2] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)-28684))) <= (arr_3 [i_0 + 1] [16])))))), (((((/* implicit */_Bool) (short)23438)) ? (((/* implicit */unsigned int) ((int) arr_2 [i_0 + 1] [i_1] [8ULL]))) : (max((((/* implicit */unsigned int) (unsigned short)53852)), (arr_0 [i_0] [i_0])))))));
                        arr_11 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)181)) ? (max((min((arr_5 [i_0 + 2] [i_0 + 2] [i_2] [i_3]), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_0] [i_1])))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (short)-23427))))))) : (max((arr_7 [i_0] [i_0 - 2] [i_0 + 2] [i_0 + 4] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_2] [i_3]))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 2) /* same iter space */
                    {
                        var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) < (3806179971U));
                        /* LoopSeq 4 */
                        for (long long int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                        {
                            arr_17 [i_0 + 4] [i_1] [i_2] [i_5] = ((/* implicit */_Bool) (short)-1);
                            var_22 = ((/* implicit */int) arr_1 [i_0] [i_0]);
                            arr_18 [i_0] [i_1] [i_2] [i_0] [i_5] [i_1] = ((/* implicit */signed char) ((arr_0 [i_1] [i_5]) >= (arr_0 [i_0 + 3] [i_4 - 1])));
                            arr_19 [i_5] [i_1] [i_2] [i_1] [i_0] [i_1] [i_0 - 1] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_1])) ? (var_2) : (((/* implicit */unsigned long long int) 2023232936)))));
                            arr_20 [i_0 + 1] [i_1] [i_1] [i_4 - 1] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4] [i_4 - 2] [i_4] [i_1] [i_4 - 1] [i_4 - 2])) ? (17013462344652032766ULL) : (((/* implicit */unsigned long long int) arr_16 [i_4] [i_4 - 2] [i_4] [i_1] [i_4 - 2] [i_4]))));
                        }
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                        {
                            arr_24 [i_0 + 4] [i_1] [i_2] [i_4] [i_6] = ((((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_0] [i_0 - 1])) - (((/* implicit */int) arr_23 [i_0] [i_0 + 1] [i_1] [i_0] [i_0 + 4])));
                            arr_25 [i_0 - 1] [i_1] [i_0 - 1] [i_4] [i_4] [i_0 + 3] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_23 [i_0 + 3] [i_1] [i_1] [i_4 - 1] [i_6]))));
                            arr_26 [i_6] [i_1] [i_1] [i_0 - 2] = ((/* implicit */int) arr_4 [i_1]);
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) | (((/* implicit */int) arr_2 [i_1] [i_1] [i_1]))));
                            arr_27 [i_6] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) -5734696544613492515LL);
                        }
                        for (unsigned long long int i_7 = 3; i_7 < 16; i_7 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7]))) : (arr_0 [i_0 + 2] [i_4 + 1])))) ? (arr_7 [i_0 + 4] [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7] [i_7 + 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)30562)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (signed char)-50))))))))));
                            arr_30 [i_1] [i_4 + 1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) arr_12 [i_0 + 4]);
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_7 + 1])) ? (((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0]))) : (7687879986849205971ULL)));
                            arr_31 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */int) var_3)) : (arr_8 [i_1] [i_4 - 1] [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_1] [i_1] [i_0 + 3] [i_7 - 2]))) : (arr_16 [i_0 + 4] [i_0] [i_0 - 1] [i_1] [i_0 + 4] [i_1])));
                        }
                        for (unsigned long long int i_8 = 3; i_8 < 16; i_8 += 3) /* same iter space */
                        {
                            arr_35 [i_0] [i_0] [i_1] [i_0] [i_4] [i_8 - 3] = ((/* implicit */_Bool) var_16);
                            var_26 = ((((/* implicit */_Bool) 9725012691262038049ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0 + 2] [i_1] [i_1] [i_1] [i_8 + 3]))) : (arr_16 [i_8] [i_8] [i_8] [i_1] [i_8 - 2] [i_8 - 1]));
                        }
                        arr_36 [i_0 - 2] [i_1] [i_1] [i_1] [i_2] [i_0 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_0 + 4] [i_4 - 2])) ? (((/* implicit */int) arr_33 [i_0 - 2] [i_4 - 3])) : (((/* implicit */int) arr_33 [i_0 + 4] [i_4 - 3]))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_8 [i_1] [i_1] [i_2] [i_4 + 1]) : (((/* implicit */int) (unsigned char)234))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (arr_8 [i_1] [i_1] [i_2] [i_1])))) : (-5734696544613492515LL)));
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 19; i_9 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_2] [i_9 + 1]);
                            arr_43 [i_0] [i_1] [i_1] [i_9] [i_9 + 1] [i_10] = ((short) (((_Bool)0) ? (4252400778U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            arr_44 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] [i_10] = ((/* implicit */short) (+((-(((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1]))))));
                        }
                        var_29 = ((/* implicit */unsigned char) ((unsigned short) 0U));
                        arr_45 [i_0] [i_1] [i_1] [i_9 - 1] = ((/* implicit */_Bool) (unsigned short)8064);
                    }
                    for (unsigned long long int i_11 = 3; i_11 < 19; i_11 += 2) /* same iter space */
                    {
                        arr_48 [i_1] = arr_38 [i_11 - 2] [i_11 - 1] [i_0 + 2] [i_11 + 1] [i_0 + 2];
                        arr_49 [i_11 + 1] [i_1] [i_11 + 1] [i_2] [i_1] [i_0 + 2] = (short)-27503;
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) 5734696544613492515LL))));
                        arr_50 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) (+(((arr_21 [i_0] [i_0] [i_11 + 1] [i_11 + 1] [i_11 - 3] [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0 + 1] [i_0 + 1])))))));
                        var_31 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_23 [i_0] [i_0 + 4] [i_1] [i_1] [i_11])) : (((/* implicit */int) max((arr_33 [i_11] [i_11 - 2]), (((/* implicit */short) (_Bool)0)))))))), ((((!(((/* implicit */_Bool) (unsigned short)54320)))) ? (((/* implicit */unsigned long long int) 2445461284U)) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    }
                    var_32 = ((/* implicit */long long int) min(((~(arr_7 [i_0] [i_0 + 4] [i_0] [i_0 + 4] [i_0 + 2] [i_0 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_0 + 4] [i_0 + 4] [i_1] [i_0 + 4] [i_2])) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (arr_3 [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0])) ? (arr_8 [i_1] [i_1] [i_1] [i_2]) : (((/* implicit */int) arr_47 [i_0 + 2] [i_1] [i_1] [i_1]))))) : ((~(arr_0 [i_0 + 3] [i_1]))))))));
                }
            } 
        } 
        arr_51 [i_0] = ((/* implicit */unsigned short) arr_29 [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0]);
    }
}

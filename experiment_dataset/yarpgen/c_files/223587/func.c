/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223587
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned int) 1797824450);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_21 ^= min((((/* implicit */int) (short)-12345)), (1797824450));
                                arr_13 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) -1797824450);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_9 [i_5] [(short)18] [(_Bool)1] [i_0] [i_0])))) || (((/* implicit */_Bool) arr_7 [i_0] [i_0] [19ULL] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_15)))) & (((((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) & (((/* implicit */int) arr_16 [i_0] [i_0] [i_0]))))));
                                var_23 = ((/* implicit */short) var_6);
                                arr_23 [i_7] [i_7] &= ((/* implicit */unsigned short) ((-1797824475) & ((~(((/* implicit */int) (unsigned char)251))))));
                                var_24 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [18] [15U] [i_5] [i_6] [i_7]))));
                                var_25 &= ((/* implicit */int) var_12);
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (~(var_16))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)0))))))));
                            var_28 = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_15 [i_0] [i_9] [i_0]) + (2147483647))) << (((arr_10 [i_0] [i_0] [i_0] [(_Bool)1]) - (7342971787555145429LL)))))) ? (max((((/* implicit */int) (unsigned char)255)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (_Bool)1))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_15 [i_0] [i_9] [i_0]) + (2147483647))) << (((((((arr_10 [i_0] [i_0] [i_0] [(_Bool)1]) + (7342971787555145429LL))) + (420588136925140185LL))) - (9LL)))))) ? (max((((/* implicit */int) (unsigned char)255)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (_Bool)1)))));
                        }
                        for (int i_11 = 0; i_11 < 21; i_11 += 3) 
                        {
                            var_29 = ((/* implicit */int) var_17);
                            var_30 *= ((/* implicit */short) max((232563977322954402ULL), (((/* implicit */unsigned long long int) 11U))));
                            arr_34 [i_0] [i_1] [i_0] [i_9] [13LL] = ((/* implicit */signed char) 4294967292U);
                            arr_35 [i_0] [i_1] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */short) (+(((arr_24 [i_9] [i_8] [i_0] [i_9]) << (((arr_24 [i_0] [i_1] [i_0] [i_9]) - (9052941540052673893ULL)))))))) : (((/* implicit */short) (+(((arr_24 [i_9] [i_8] [i_0] [i_9]) << (((((arr_24 [i_0] [i_1] [i_0] [i_9]) - (9052941540052673893ULL))) - (4828837665355534599ULL))))))));
                        }
                    }
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        var_31 = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned short)26420)) << (((arr_14 [i_12] [i_0]) - (7438165537763987337LL)))))))) : (((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned short)26420)) << (((((((arr_14 [i_12] [i_0]) + (7438165537763987337LL))) + (390809231640048837LL))) - (8LL))))))));
                        var_32 -= ((/* implicit */_Bool) ((((var_10) ? (arr_7 [i_1] [i_8 + 2] [i_8 + 2] [i_1]) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_8 [i_1] [i_1] [(short)20] [i_12] [i_8 - 2])), (2147221504)))))) * (((/* implicit */unsigned int) arr_37 [i_0] [6] [6] [(unsigned char)10] [(unsigned char)10]))));
                        arr_38 [i_0] [i_1] [i_8 + 2] [i_0] [14] [i_8 - 1] = ((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_9))))), (arr_20 [i_0] [i_1] [i_0] [i_1] [i_0]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 1; i_13 < 20; i_13 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned short) var_3);
                            arr_42 [i_0] [i_1] [i_8] [(signed char)2] [i_0] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(arr_31 [10ULL])))) + (((((/* implicit */_Bool) 8LL)) ? (0ULL) : (18446744073709551615ULL)))));
                            var_34 = ((((((2887097691584573950ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) ? (((/* implicit */long long int) arr_31 [i_0])) : (var_1))) >> (((((/* implicit */int) (short)-15181)) + (15240))));
                            var_35 -= ((/* implicit */unsigned int) var_7);
                        }
                    }
                    var_36 = ((/* implicit */unsigned short) min((var_10), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26))) < (min((arr_26 [i_0]), (((/* implicit */unsigned long long int) var_15))))))));
                }
                for (long long int i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    var_37 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26156))) ^ (arr_26 [i_0])))) ? (((/* implicit */int) var_6)) : (((int) arr_16 [i_0] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) var_0)) : (arr_44 [i_0] [i_0] [i_1] [i_14]));
                    arr_45 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) max(((~(arr_22 [i_0] [i_1] [i_0] [i_14] [(unsigned char)9]))), (((/* implicit */unsigned long long int) var_13))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_15 = 3; i_15 < 19; i_15 += 2) 
                    {
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((1195470501) - (((/* implicit */int) (unsigned char)251)))))));
                        var_39 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(var_1)))), (max(((~(var_18))), (((/* implicit */unsigned long long int) ((short) var_18)))))));
                        arr_48 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_15)) | (((/* implicit */int) max((((/* implicit */short) var_9)), (arr_2 [i_0] [i_0] [i_0]))))))));
                    }
                    /* vectorizable */
                    for (int i_16 = 2; i_16 < 20; i_16 += 3) 
                    {
                        var_40 -= ((/* implicit */long long int) var_10);
                        /* LoopSeq 1 */
                        for (short i_17 = 2; i_17 < 19; i_17 += 4) 
                        {
                            var_41 = ((/* implicit */signed char) (unsigned char)0);
                            var_42 = -3612023725760177102LL;
                            var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1797824450)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))) : (arr_7 [i_0] [i_1] [i_14] [i_17 - 2])));
                        }
                    }
                    for (unsigned short i_18 = 0; i_18 < 21; i_18 += 3) 
                    {
                        var_44 = ((/* implicit */short) min((var_44), (max((((/* implicit */short) arr_50 [i_0] [i_1])), ((short)-18116)))));
                        var_45 = ((/* implicit */signed char) var_19);
                        arr_58 [i_18] [i_18] [i_18] [i_0] [i_18] = ((/* implicit */unsigned long long int) max((((/* implicit */short) var_3)), ((short)32767)));
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_20 = 0; i_20 < 21; i_20 += 4) 
                        {
                            var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) -1))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [6ULL] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_63 [i_0] [i_1] [i_14] [i_0] [i_1] = ((/* implicit */short) var_6);
                            var_47 ^= (+(max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_52 [i_0] [i_0] [i_14] [i_19] [i_20] [i_20] [i_0])) + (((/* implicit */int) (unsigned short)60089))))), (max((((/* implicit */unsigned long long int) var_1)), (var_5))))));
                        }
                        for (short i_21 = 2; i_21 < 20; i_21 += 3) 
                        {
                            arr_68 [i_0] [3] [i_14] [3] [i_21] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */unsigned long long int) 4644582984301776782LL)) : (13705810215393898644ULL)));
                            var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_7)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))) : (arr_64 [i_19] [i_0] [i_0])));
                        }
                        for (unsigned int i_22 = 0; i_22 < 21; i_22 += 4) 
                        {
                            arr_72 [i_22] [i_19] [i_14] [i_19] [i_0] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) 1797824450)))));
                            var_49 = (-(max((arr_9 [i_1] [i_19] [i_0] [i_1] [i_0]), (((/* implicit */long long int) (unsigned short)39243)))));
                            arr_73 [i_0] = ((/* implicit */signed char) 3517060669438727694ULL);
                            var_50 = ((/* implicit */short) ((((/* implicit */int) arr_43 [i_1] [i_14] [i_0] [i_1])) > (((/* implicit */int) ((arr_43 [i_14] [i_14] [i_0] [i_14]) && (((/* implicit */_Bool) (short)-1)))))));
                        }
                        var_51 = ((/* implicit */unsigned long long int) max((var_51), (max((((/* implicit */unsigned long long int) arr_52 [4LL] [i_1] [i_14] [i_19] [i_1] [i_19] [i_14])), ((~(0ULL)))))));
                    }
                }
                var_52 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (arr_36 [i_0] [(short)8] [i_0] [(short)8] [(short)8] [i_0])))), (min((((/* implicit */unsigned long long int) var_4)), (arr_36 [i_0] [2LL] [i_1] [i_1] [i_1] [i_1])))));
            }
        } 
    } 
    var_53 += ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) (signed char)80)), (9ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) max(((signed char)3), (((/* implicit */signed char) (_Bool)1)))))))))));
    var_54 += ((/* implicit */unsigned char) (-((+(((/* implicit */int) ((short) (short)26389)))))));
    var_55 = ((/* implicit */int) var_15);
}

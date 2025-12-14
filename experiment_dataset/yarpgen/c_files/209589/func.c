/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209589
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
    var_15 = ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
                {
                    arr_9 [i_2] [i_2] [i_2] [i_1] = ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)99))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)67))))) : (((unsigned long long int) (unsigned short)65535)))) | (min(((~(0ULL))), (((/* implicit */unsigned long long int) ((var_3) ^ (arr_6 [(unsigned short)1] [(short)5] [(unsigned char)0] [i_2])))))));
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_4 [i_1] [i_2]))));
                    arr_10 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) + (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_0]))) : (1429211083U)))))) ? (((((/* implicit */_Bool) ((var_5) ? (((/* implicit */long long int) 0U)) : (arr_4 [i_0] [i_2])))) ? (((/* implicit */unsigned long long int) max((arr_7 [i_0] [i_1]), (((/* implicit */unsigned int) var_10))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_1] [i_2]))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
                {
                    var_17 *= ((/* implicit */unsigned int) ((unsigned char) arr_0 [i_0] [i_1]));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            {
                                arr_19 [i_1] [i_1] [i_3] [i_5] [1ULL] [i_3] = ((/* implicit */unsigned int) ((arr_14 [i_5] [i_4] [(short)0] [i_1] [i_0]) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) arr_14 [i_5] [8] [i_3] [i_0] [i_0]))));
                                var_18 = ((/* implicit */signed char) ((unsigned long long int) arr_13 [i_1]));
                                arr_20 [i_0] [i_5] [i_0] [i_4] [i_4] = ((((/* implicit */int) ((short) (unsigned char)189))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189))) >= (var_6)))));
                                var_19 = ((/* implicit */_Bool) var_8);
                            }
                        } 
                    } 
                }
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */_Bool) 131072U);
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_25 [(short)9] [i_1] [i_6] [i_7] = ((/* implicit */int) (-(arr_24 [i_7 - 1] [(_Bool)1] [i_7 - 1] [i_7 - 1])));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (unsigned short)1024))));
                            arr_28 [i_0] [i_0] [i_7] [i_0] [i_8] = ((/* implicit */_Bool) (-(max((((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14)))), (max((((/* implicit */int) (unsigned short)65535)), (arr_16 [i_0] [i_1] [i_1] [i_6] [i_6] [i_8])))))));
                            var_22 = ((/* implicit */unsigned short) ((int) ((unsigned long long int) arr_12 [i_7 - 1] [(signed char)8] [i_7] [i_7 - 1])));
                        }
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            arr_32 [i_9] [8U] [i_1] [(unsigned char)5] [i_9] [8U] = ((/* implicit */unsigned short) (-(max((-8475540936202334549LL), (((/* implicit */long long int) ((((/* implicit */int) (short)15360)) << (((/* implicit */int) (unsigned short)0)))))))));
                            arr_33 [i_9] = ((/* implicit */int) var_4);
                            arr_34 [i_9] [i_9] [i_6] [i_9] [i_0] = ((/* implicit */int) -8475540936202334549LL);
                            var_23 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_24 [i_6] [(short)9] [i_7 - 1] [i_7 - 1])) ? (arr_29 [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_9]) : (((/* implicit */unsigned long long int) arr_24 [i_1] [i_6] [i_7 - 1] [i_7 - 1])))));
                            arr_35 [i_0] [i_1] [i_9] [i_7 - 1] [i_7 - 1] [i_9] = (((-(arr_8 [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                        }
                        for (short i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            var_24 = ((/* implicit */short) min((((/* implicit */long long int) arr_17 [i_0] [(signed char)0] [i_7 - 1] [i_7 - 1] [i_10])), (arr_4 [i_7 - 1] [i_7 - 1])));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_1))))), (arr_36 [i_0] [i_1] [i_1] [i_0] [i_10]))) <= (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_10]))) % (max((var_4), (((/* implicit */unsigned int) var_14))))))))))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            var_26 ^= ((/* implicit */unsigned int) ((short) var_7));
                            var_27 = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) (short)-15361)))));
                        }
                        arr_41 [i_0] [(unsigned char)8] [i_6] [i_6] &= ((/* implicit */short) (-(((/* implicit */int) var_13))));
                        var_28 = ((/* implicit */signed char) (unsigned short)0);
                    }
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((signed char) (-(max((((/* implicit */unsigned long long int) arr_31 [i_0] [(signed char)2] [(unsigned short)6])), (arr_29 [i_0] [i_0] [i_1] [i_0] [i_12] [i_6])))))))));
                        arr_44 [i_0] [i_0] [i_6] [i_12 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) min(((_Bool)0), ((_Bool)1)))) | (((arr_12 [i_12] [i_12 - 1] [i_12 - 1] [i_12]) ? (((/* implicit */int) arr_12 [i_12] [i_12 - 1] [i_12 - 1] [i_12 - 1])) : (((/* implicit */int) arr_12 [i_12] [i_12 - 1] [i_12 - 1] [i_12 - 1]))))));
                    }
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_13 = 1; i_13 < 7; i_13 += 2) 
                {
                    arr_47 [i_0] = ((short) ((unsigned int) var_9));
                    arr_48 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_13] [i_1] [i_13 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : ((-(((/* implicit */int) (unsigned short)65535))))));
                    arr_49 [(_Bool)1] [i_1] [1ULL] [i_0] = ((/* implicit */_Bool) arr_46 [2LL] [i_13] [i_13] [i_13]);
                }
                for (unsigned int i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        arr_56 [i_14] [i_15] [i_0] = ((/* implicit */short) ((long long int) arr_3 [i_0] [i_15]));
                        var_31 ^= ((/* implicit */signed char) arr_2 [i_0]);
                        arr_57 [i_0] [i_0] [i_14] [i_15] [i_14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_14] [i_0]))));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_7)));
                        var_33 = ((/* implicit */short) ((_Bool) (unsigned short)65535));
                    }
                    var_34 |= ((/* implicit */int) max(((-(min((((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_29 [i_1] [i_1] [i_1] [i_0] [6U] [i_1]))))), (max((((arr_53 [8ULL] [i_1]) + (((/* implicit */unsigned long long int) arr_36 [i_0] [i_0] [(signed char)7] [i_14] [i_14])))), (((/* implicit */unsigned long long int) (signed char)122))))));
                }
                for (unsigned long long int i_16 = 1; i_16 < 9; i_16 += 4) 
                {
                    arr_61 [i_16] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_15 [i_16] [i_16 - 1] [i_16] [i_16 + 1] [i_16 + 1] [i_16 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) arr_15 [i_0] [(unsigned char)4] [i_0] [i_1] [i_16] [6U]))))))))));
                    arr_62 [i_0] [(unsigned char)8] [1] [i_16] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((arr_4 [i_1] [i_16]) | (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-7413)), (arr_0 [i_0] [i_1])))) : (((/* implicit */int) (!((_Bool)1)))))) <= (((/* implicit */int) (unsigned short)0))));
                    var_35 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_16 + 1] [i_16 + 1] [i_16 - 1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((signed char) (-(((/* implicit */int) (short)-7413)))))));
                }
                for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_36 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_17] [i_1] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_7)))) ? ((-(arr_13 [i_1]))) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_15 [i_18] [i_18] [(unsigned short)9] [(_Bool)0] [i_1] [i_0]))));
                        arr_69 [i_0] [i_1] [i_0] [(signed char)0] [i_18] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)21829)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)67)) || (((/* implicit */_Bool) (short)26181)))))))) ? (((/* implicit */unsigned int) ((((_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_64 [9] [i_1] [(signed char)0] [i_18]))))) : (2760072894U)));
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0] [i_18] [i_0] [i_17])) ? (((/* implicit */unsigned long long int) arr_24 [i_18] [i_17] [i_1] [(short)0])) : (0ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) var_9))))) : (max((((/* implicit */long long int) var_10)), (arr_4 [i_17] [i_18])))))));
                    }
                    arr_70 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)31744))))) + (((/* implicit */int) arr_23 [i_17] [i_17] [i_17]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? ((-2147483647 - 1)) : (1080832413)))) ? (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) (unsigned char)66)))) : (((/* implicit */int) (unsigned char)82))));
                    arr_71 [i_17] [(short)5] [(short)4] [(short)4] = ((/* implicit */unsigned short) (-2147483647 - 1));
                    /* LoopNest 2 */
                    for (short i_19 = 0; i_19 < 10; i_19 += 2) 
                    {
                        for (unsigned int i_20 = 2; i_20 < 9; i_20 += 3) 
                        {
                            {
                                arr_76 [8] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 3458764513820540928ULL)))) ? (((/* implicit */int) ((((/* implicit */int) arr_43 [i_17])) <= (((/* implicit */int) var_2))))) : ((-(((/* implicit */int) (short)15360))))))) ? (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_0)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-26181)))))));
                                arr_77 [i_0] [i_0] [i_1] [i_17] [i_19] [i_0] = ((/* implicit */short) var_5);
                                var_38 = ((/* implicit */int) min((arr_46 [i_0] [(unsigned short)1] [i_17] [i_20]), (((/* implicit */long long int) max((((/* implicit */short) arr_15 [i_0] [(unsigned short)4] [i_17] [i_19] [i_19] [i_1])), (var_0))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_21 = 0; i_21 < 10; i_21 += 3) 
                    {
                        for (long long int i_22 = 0; i_22 < 10; i_22 += 1) 
                        {
                            {
                                arr_83 [i_0] [(short)1] [i_21] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)31744)) | (((/* implicit */int) var_5)))), (((/* implicit */int) max((((/* implicit */short) (unsigned char)66)), (var_1))))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) || (((/* implicit */_Bool) 3276432853U)))))) : (max((((/* implicit */unsigned long long int) 0)), (2305834213120671744ULL)))))));
                                arr_84 [i_21] [i_17] [(short)3] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(-677779637)))), (((unsigned int) arr_8 [i_0] [i_0] [i_17] [(_Bool)1]))))) ? (((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) (short)15360)) : (((/* implicit */int) var_0)))) << (((/* implicit */int) ((89594176) > (((/* implicit */int) arr_74 [i_0] [(unsigned short)2])))))))) : ((-(((((/* implicit */_Bool) 4275311923U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_22] [i_21] [i_17] [i_1] [i_0] [i_0]))) : (arr_36 [i_0] [i_1] [i_17] [i_21] [i_22])))))));
                            }
                        } 
                    } 
                }
                arr_85 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)112))) / (8475540936202334549LL)));
                arr_86 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) min((((((((/* implicit */unsigned long long int) 3951655839U)) + (1923309330080229736ULL))) + (0ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)63)), (3752347170U))))));
            }
        } 
    } 
    var_39 = ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) var_9)))))), ((-(((508692777U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)19619)))))))));
    var_40 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)27763), ((short)12913))))) + (max((0ULL), (((/* implicit */unsigned long long int) (signed char)120)))))));
}

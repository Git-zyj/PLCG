/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207817
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
    var_15 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [(short)3] [i_1] = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) arr_0 [7ULL])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [18LL])))), (((int) arr_0 [i_0])))), ((+((+(-419388424)))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
                {
                    arr_8 [(signed char)10] [10LL] [i_1] [i_2] = ((/* implicit */unsigned char) arr_0 [i_1]);
                    var_16 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0]);
                }
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_3 [i_0])) & (((/* implicit */int) arr_3 [13ULL]))))));
                    arr_11 [3] [19] [(unsigned short)19] [i_3] = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) (~(arr_6 [(signed char)16] [(signed char)18] [i_0])))), (min((14005464781938802427ULL), (((/* implicit */unsigned long long int) (unsigned char)116))))))));
                }
                var_18 *= ((/* implicit */unsigned int) var_7);
                /* LoopSeq 2 */
                for (signed char i_4 = 1; i_4 < 21; i_4 += 3) 
                {
                    arr_14 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(0U)))) ? (2791539540832046324ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                var_19 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3624679561954096736LL)) ? (((/* implicit */long long int) var_2)) : (-3624679561954096736LL)))) ? (2758241552U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_3))))))) ? (arr_15 [6ULL] [i_1] [i_5] [i_0]) : (4ULL));
                                var_20 = ((/* implicit */signed char) (+(arr_15 [14LL] [i_1] [i_4 + 1] [i_4])));
                            }
                        } 
                    } 
                }
                for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 3; i_8 < 18; i_8 += 4) 
                    {
                        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-9184999854889445296LL)))) ? (((/* implicit */int) arr_23 [i_8] [i_8] [i_8 + 1] [i_8 - 3])) : (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_19 [21ULL] [21ULL] [13ULL] [i_1] [4ULL] [i_8] [4ULL]))))))))));
                        var_22 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_18 [i_7] [(signed char)8] [i_8] [i_8] [12LL] [i_8 - 2] [i_8 - 3])) ? (((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) (signed char)-21))))) : (max((4533765261976885178ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_8]))));
                        var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1236313245)) ? (((/* implicit */int) (short)-18575)) : (((/* implicit */int) (short)-30750)))))));
                    }
                    arr_26 [i_0] [i_0] [6LL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0])), (arr_2 [i_7])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_1]))) : ((+(arr_2 [(_Bool)1]))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            arr_33 [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */int) arr_32 [i_10] [i_1] [17ULL] [i_9] [(_Bool)1] [0ULL])) / (arr_6 [(signed char)0] [i_1] [(signed char)0]))), (((/* implicit */int) (signed char)-76)))))));
                            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) max((8299741640683606173ULL), (12ULL))))));
                        }
                        for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (+(max((((((/* implicit */long long int) 1909459801)) / (3624679561954096745LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_34 [i_7])) / (((/* implicit */int) (signed char)41))))))))))));
                            arr_37 [(signed char)3] [10] [i_11] [i_9] [(unsigned char)2] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_1] [i_7] [i_9] [i_11])) ? (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_29 [i_11] [i_9] [(unsigned char)10] [i_7] [i_1] [i_0])))), (max((arr_19 [i_9] [i_11] [i_9] [i_7] [17U] [i_0] [3ULL]), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1817286785619079199ULL)))))))));
                            var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [(unsigned short)16] [(unsigned short)16] [i_7] [14ULL])) ? (((((/* implicit */_Bool) arr_23 [3ULL] [i_1] [i_1] [(_Bool)1])) ? (arr_13 [i_0] [i_1] [i_7] [18U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_7])))))) && (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 15373887116020340298ULL)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [i_1] [11] [i_9] [3LL]))))))));
                        }
                        for (signed char i_12 = 2; i_12 < 19; i_12 += 4) 
                        {
                            var_27 += ((/* implicit */unsigned int) ((long long int) (signed char)93));
                            arr_42 [i_9] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [9ULL] [i_0] [i_1] [i_12] [1] [1] [i_12 - 2])) && (((/* implicit */_Bool) arr_18 [i_12] [(signed char)21] [(signed char)3] [i_12] [(signed char)3] [13ULL] [i_12 + 1]))));
                            var_28 = ((/* implicit */signed char) max((var_28), (arr_24 [i_0] [i_0] [i_1] [i_7] [i_9] [i_0])));
                            var_29 -= arr_1 [17ULL];
                        }
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_30 ^= ((/* implicit */unsigned long long int) (~(min((((((/* implicit */_Bool) 17971304437910676013ULL)) ? (((/* implicit */int) arr_32 [i_0] [i_0] [i_7] [(unsigned char)12] [i_13] [14U])) : (((/* implicit */int) (signed char)-116)))), (((/* implicit */int) ((((/* implicit */int) arr_18 [i_0] [3ULL] [10ULL] [(short)5] [i_13] [10ULL] [i_9])) >= (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [5ULL])))))))));
                            arr_46 [i_0] [i_1] [i_7] [i_9] [i_9] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) (unsigned char)230)))))));
                            arr_47 [i_0] [i_9] [i_7] [0U] [i_13] = ((/* implicit */int) (((!(((/* implicit */_Bool) 867943145U)))) ? (arr_7 [i_0] [i_7] [i_7] [i_13]) : (arr_12 [i_0] [(unsigned char)18] [17] [(unsigned char)18])));
                        }
                        arr_48 [i_0] = ((/* implicit */unsigned int) (~(((int) ((unsigned int) var_3)))));
                    }
                    for (int i_14 = 3; i_14 < 18; i_14 += 3) /* same iter space */
                    {
                        var_31 = ((/* implicit */int) arr_1 [i_14 - 2]);
                        var_32 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) - (4177408568175558065ULL)))) ? (((((/* implicit */int) (signed char)-126)) % (-90783330))) : ((~(((/* implicit */int) (unsigned char)252))))));
                    }
                    for (int i_15 = 3; i_15 < 18; i_15 += 3) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) arr_23 [i_0] [i_1] [i_7] [i_15]))));
                        /* LoopSeq 1 */
                        for (int i_16 = 0; i_16 < 22; i_16 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((arr_29 [i_16] [i_15] [2LL] [i_1] [i_0] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) ((6ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23849))))))))))));
                            var_35 = ((/* implicit */unsigned int) var_12);
                            arr_57 [i_16] = ((/* implicit */unsigned int) ((((long long int) arr_9 [i_15 + 1] [i_15 - 1])) != (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)114)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))));
                            arr_58 [i_16] [i_16] = 0ULL;
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_17 = 1; i_17 < 21; i_17 += 1) 
                        {
                            arr_61 [i_17] = arr_15 [(short)13] [(signed char)19] [(_Bool)1] [i_17];
                            var_36 = ((/* implicit */_Bool) ((unsigned int) (~(var_6))));
                            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)87))) < ((-9223372036854775807LL - 1LL))));
                        }
                        var_38 ^= ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_56 [(_Bool)1] [i_1] [14] [i_7] [i_1])))) ? ((~(arr_56 [i_7] [6ULL] [2ULL] [i_7] [6ULL]))) : (arr_56 [i_1] [i_7] [(unsigned char)18] [i_0] [i_7])));
                    }
                    arr_62 [12ULL] [i_1] [19ULL] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)123))));
                }
            }
        } 
    } 
    var_39 = var_5;
}

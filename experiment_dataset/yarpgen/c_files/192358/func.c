/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192358
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
    var_11 = ((/* implicit */long long int) 18446744073709551594ULL);
    var_12 = ((/* implicit */_Bool) max((var_12), (((((/* implicit */int) var_0)) >= (((((((/* implicit */int) var_0)) < (((/* implicit */int) var_10)))) ? (var_7) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)57996)) : (((/* implicit */int) var_2))))))))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((var_1) & (((/* implicit */unsigned int) 172798075)))), (((/* implicit */unsigned int) ((var_9) >> (((/* implicit */int) var_8)))))))) ? (var_9) : (min((((/* implicit */int) ((signed char) var_8))), (max((var_9), (((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    arr_10 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)2] [(unsigned char)2])) || (((/* implicit */_Bool) min(((~(arr_5 [i_0]))), (((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)120))))))))));
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(_Bool)1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [6LL] [5]))))) ? (((/* implicit */unsigned long long int) arr_0 [i_1] [6LL])) : (max((((/* implicit */unsigned long long int) arr_1 [(unsigned char)1])), (var_6))))), ((~(max((arr_9 [i_0] [i_0]), (var_5))))))))));
                    var_15 = ((/* implicit */int) (((-(((((/* implicit */_Bool) 3932202171U)) ? (var_5) : (((/* implicit */unsigned long long int) var_9)))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_10), (var_10)))) && (((/* implicit */_Bool) arr_0 [i_2] [i_1]))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                {
                    arr_13 [(signed char)6] [i_1] [(signed char)4] [(signed char)4] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
                    arr_14 [(_Bool)1] [(unsigned short)9] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (var_7)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 7; i_4 += 1) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_0] [(_Bool)1] [i_0] [2ULL] [6U] [(_Bool)1] = ((/* implicit */long long int) ((unsigned short) var_4));
                                arr_21 [6ULL] [(signed char)2] [6ULL] [i_3] [i_3] [i_4] [6ULL] = ((/* implicit */short) (~(arr_18 [i_5 - 1] [i_5 - 1] [i_5 - 1] [(_Bool)1] [5])));
                                var_16 = ((/* implicit */_Bool) var_7);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) ((unsigned short) var_9));
                                arr_28 [i_3] [(signed char)2] = ((/* implicit */unsigned short) (!(((((/* implicit */int) var_4)) == (((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 3; i_9 < 8; i_9 += 1) 
                        {
                            {
                                arr_33 [i_0] [(_Bool)1] [(short)3] [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_0 [8] [i_9]))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (16))))));
                                arr_34 [(unsigned char)5] [i_1] [(signed char)2] [4] [9LL] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_5 [(unsigned short)7])))) ? (((/* implicit */unsigned long long int) ((var_9) >> (((var_6) - (13458159449625884581ULL)))))) : (arr_25 [4] [i_8 - 1] [(unsigned short)6] [(signed char)2] [i_9] [i_9 - 2])));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_10])) / ((-(((/* implicit */int) var_4))))));
                        var_19 = ((/* implicit */int) var_5);
                    }
                    for (unsigned int i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        arr_41 [(signed char)3] [i_1] [i_10] [i_1] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) <= (var_9)));
                        arr_42 [i_0] [i_0] [i_0] [0ULL] [i_12] = ((/* implicit */unsigned long long int) ((unsigned short) var_2));
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 0; i_13 < 10; i_13 += 3) 
                        {
                            arr_45 [5U] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [2] [(_Bool)1])) ? (var_7) : (((/* implicit */int) var_2))))));
                            var_20 = ((/* implicit */int) max((var_20), ((+(((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_10] [i_12] [4]))))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_50 [i_0] [2ULL] [6U] [(unsigned char)0] [i_0] = ((/* implicit */unsigned int) (~(var_5)));
                            var_21 = ((/* implicit */_Bool) ((int) ((_Bool) var_5)));
                            var_22 ^= ((/* implicit */short) var_8);
                            var_23 *= ((/* implicit */signed char) (-(((/* implicit */int) (!(var_8))))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) 1073741824U))));
                        }
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        arr_54 [i_0] [i_0] [i_1] [i_10] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_43 [(unsigned char)8] [i_1] [i_10] [(unsigned char)8] [i_10])) ? (arr_43 [(unsigned char)2] [(_Bool)1] [i_1] [(_Bool)1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                        var_25 = (-(var_6));
                        var_26 ^= var_5;
                        arr_55 [(signed char)4] [(signed char)4] [(signed char)4] [(signed char)4] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_3))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                    }
                    arr_56 [i_1] [(signed char)1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_49 [i_0] [i_0])) >= (var_6)));
                    arr_57 [i_0] [0ULL] [i_0] [i_0] = ((/* implicit */int) var_2);
                    var_27 = ((/* implicit */unsigned short) var_0);
                    arr_58 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
                }
                for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                var_28 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [(signed char)3] [7U] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_17])) : (((((/* implicit */_Bool) arr_37 [(unsigned short)5] [i_1] [0LL] [i_17] [0LL] [i_16])) ? (((/* implicit */int) arr_27 [(short)0] [(short)0] [(short)0] [i_17] [(short)0])) : (((/* implicit */int) arr_64 [9U] [2U] [i_16] [8LL]))))))));
                                var_29 = ((/* implicit */short) var_9);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) % (arr_25 [i_0] [i_0] [i_1] [i_16] [8ULL] [(signed char)7])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_52 [i_0] [i_1] [i_0] [i_0]))))) : ((~(var_6)))));
                        arr_70 [i_0] [(unsigned char)6] [i_16] [i_19] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) arr_36 [(unsigned short)6] [(unsigned char)9])))));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        var_31 = (((!(((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90))) : (var_5));
                        arr_75 [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) 1281651379))))) && (((((/* implicit */_Bool) ((var_3) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) || ((!(((/* implicit */_Bool) 349792567930059444ULL))))))));
                        var_32 -= ((/* implicit */_Bool) arr_63 [i_0] [i_1] [(_Bool)1] [i_20] [i_16]);
                        var_33 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) min((var_7), (((/* implicit */int) var_8))))))));
                        var_34 = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) min((var_0), ((signed char)-117)))), (((unsigned long long int) arr_17 [i_0] [(unsigned char)1] [(unsigned char)1] [(unsigned char)1] [8LL]))))));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) (_Bool)1)), (arr_62 [i_0] [(short)8] [i_16] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_65 [2] [i_16] [2] [2] [2] [i_21] [i_21])))))))) ? (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))), (((var_6) | (var_5))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_3)), (var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (-5960450887840944327LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) : (min((var_6), (var_5)))))));
                        arr_78 [i_0] [(_Bool)1] [i_0] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_66 [2LL] [(signed char)3] [(unsigned short)0] [7U] [(_Bool)1]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [i_0] [i_16] [i_16] [(_Bool)1])))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57518))) : (max((((((/* implicit */_Bool) arr_2 [1U] [(unsigned short)2])) ? (((/* implicit */long long int) var_1)) : (arr_12 [i_0] [3ULL] [(_Bool)1] [i_21]))), (((/* implicit */long long int) var_0))))));
                        arr_79 [(_Bool)1] [i_16] [i_16] [8ULL] [9] [i_21] = ((/* implicit */unsigned int) ((int) ((var_3) ? (((/* implicit */int) var_0)) : (var_9))));
                    }
                }
                var_36 = ((/* implicit */unsigned int) var_4);
            }
        } 
    } 
}

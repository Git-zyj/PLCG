/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51822
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
    var_13 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_11)) >= (((((var_3) + (2147483647))) >> (((((/* implicit */int) var_4)) + (122))))))))) >= (((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_12)) ^ (var_6)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */int) var_8))))) : ((-(var_6)))))));
    var_14 *= ((/* implicit */unsigned int) var_1);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [8])) > (((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((((/* implicit */int) arr_2 [9U] [i_0])) / (var_12))))))));
        arr_3 [i_0] = max((max((max((((/* implicit */unsigned long long int) var_1)), (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) (unsigned char)156))))))), (((/* implicit */unsigned long long int) (unsigned char)156)));
        var_16 = ((/* implicit */unsigned long long int) ((unsigned int) ((((((/* implicit */int) (unsigned char)247)) > (((/* implicit */int) (_Bool)1)))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)3), (((/* implicit */unsigned char) var_5)))))))));
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) var_7);
            var_17 = ((/* implicit */unsigned int) min((var_17), ((+(max((((/* implicit */unsigned int) var_4)), (arr_0 [4ULL])))))));
        }
        for (int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (3112206060U))))));
                var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))) | (((((/* implicit */_Bool) var_12)) ? (arr_9 [(_Bool)1]) : (((/* implicit */unsigned int) var_10))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_20 = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_2] [i_0])) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)99)))), (((/* implicit */int) (signed char)24)))) ^ (((/* implicit */int) max((min(((signed char)-24), (((/* implicit */signed char) arr_18 [i_0] [i_2])))), (((/* implicit */signed char) arr_18 [i_0] [i_2])))))));
                /* LoopSeq 1 */
                for (unsigned int i_5 = 1; i_5 < 10; i_5 += 1) 
                {
                    var_21 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_0) : (arr_15 [i_0] [i_2] [(_Bool)1] [i_0]))))))), (((((/* implicit */int) arr_10 [i_0] [i_4])) << (((((((/* implicit */_Bool) arr_16 [i_0] [4] [i_0] [i_5])) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) (signed char)18)))) - (135)))))));
                    var_22 = min((max((max((((/* implicit */unsigned int) var_3)), (arr_15 [i_0] [0] [i_4] [i_5]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_5] [i_0] [i_0] [i_0])) ? ((-2147483647 - 1)) : (((/* implicit */int) var_2))))))), ((~(arr_20 [i_0] [i_5 + 1] [4ULL] [i_5 - 1]))));
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_23 ^= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) var_3))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_6)) : (16795394040968662128ULL))) : (((/* implicit */unsigned long long int) var_10)))));
                        arr_23 [i_0] = ((/* implicit */unsigned short) max((max((192), (((/* implicit */int) arr_16 [i_5 + 1] [i_5] [i_0] [i_5 + 2])))), (max((((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_1 [(signed char)10] [5ULL])))), (((/* implicit */int) arr_5 [i_5 + 1] [i_2] [i_4]))))));
                    }
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */signed char) arr_18 [i_4] [i_5 + 2])), (arr_26 [i_7] [i_2] [i_5 - 1])))) - (((/* implicit */int) arr_19 [i_0] [i_5 + 1] [i_0] [i_0] [i_7]))));
                        arr_27 [2] [2] |= ((/* implicit */signed char) 5283744520803520286ULL);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        var_25 |= ((/* implicit */unsigned char) ((arr_18 [i_0] [i_5 + 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) (unsigned char)247)))))) : (((((/* implicit */_Bool) arr_0 [i_8])) ? (9223372036854775807ULL) : (((/* implicit */unsigned long long int) 3713500167U))))));
                        var_26 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_5 + 2] [i_8] [i_5]))) | (1092451121U)));
                    }
                    arr_32 [i_0] [i_0] [i_4] [2LL] [i_4] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_31 [i_0] [i_0] [0U] [i_0] [i_0]), (((/* implicit */short) var_5)))))) == (max((var_7), (((/* implicit */unsigned long long int) 2094641832U)))))) ? (max(((~(9223372036854775791ULL))), (((/* implicit */unsigned long long int) (~(var_10)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_2]) <= (var_6)))))));
                    arr_33 [i_0] [i_2] [5] [i_5] = ((/* implicit */signed char) var_0);
                }
            }
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_12 [i_2] [8ULL] [i_2]) == (((/* implicit */int) var_1)))))) != (max((((/* implicit */unsigned int) var_2)), (var_0)))))) << (((((((/* implicit */_Bool) max((arr_7 [(unsigned short)10] [i_0]), (((/* implicit */unsigned int) var_4))))) ? (((var_1) ? (1016912985106026578ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))) - (1016912985106026572ULL)))));
            var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_2] [i_2] [11U] [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (min((var_6), (((/* implicit */unsigned int) arr_18 [i_0] [i_2]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))) : (((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2] [i_0])) ? (min((var_6), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [9U] [i_0] [i_0] [i_2]))))));
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                arr_38 [i_0] [i_0] = ((((((/* implicit */_Bool) ((arr_18 [i_0] [i_0]) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_20 [i_0] [i_0] [i_0] [i_0])))) : (max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (arr_4 [i_0] [i_0]))))) * (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))));
                /* LoopSeq 2 */
                for (unsigned int i_10 = 3; i_10 < 11; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        var_29 = max((((/* implicit */int) ((signed char) 4230558919193164340ULL))), (max((((/* implicit */int) ((_Bool) arr_28 [i_9] [5U]))), (arr_25 [i_10 - 2] [i_10] [i_10 + 1] [i_10 - 2] [i_10 - 1]))));
                        arr_44 [(_Bool)1] [i_2] [i_0] [3ULL] = ((((/* implicit */int) var_2)) << ((((+(((unsigned int) 17658190430574381027ULL)))) - (3063318483U))));
                    }
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        arr_47 [1U] [i_0] [i_9] [i_10] [2U] = ((/* implicit */unsigned int) (~(arr_12 [i_2] [i_10 - 1] [i_12])));
                        var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) || (arr_6 [i_10 - 3])));
                    }
                    var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((signed char) min((arr_16 [i_2] [(_Bool)1] [10U] [8U]), (arr_16 [i_0] [(_Bool)1] [2ULL] [i_10])))))));
                }
                for (unsigned int i_13 = 3; i_13 < 11; i_13 += 1) /* same iter space */
                {
                    arr_50 [i_13] [i_9] [i_0] [i_0] [i_0] [i_0] = ((signed char) max((((/* implicit */int) arr_31 [i_13] [i_13 - 2] [i_13 - 2] [i_13] [i_9])), (var_12)));
                    /* LoopSeq 2 */
                    for (short i_14 = 4; i_14 < 11; i_14 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned long long int) ((int) (short)-32765))) : (min((((/* implicit */unsigned long long int) (signed char)18)), (var_9))))));
                        var_33 = ((/* implicit */signed char) max((((/* implicit */short) ((((/* implicit */int) var_5)) > (((/* implicit */int) arr_46 [i_0] [i_9] [i_9] [i_0] [i_14 + 1]))))), (arr_19 [i_0] [i_2] [(unsigned char)1] [i_0] [i_14])));
                        arr_53 [i_0] [i_0] [i_0] [i_13] [i_13] = ((/* implicit */unsigned int) ((max(((_Bool)1), (arr_13 [i_14 + 1] [i_2] [i_9] [7U]))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_13 [i_0] [i_2] [i_9] [i_14])) : (((/* implicit */int) (signed char)-13)))) : (((/* implicit */int) min((arr_13 [i_0] [i_0] [i_0] [i_0]), (var_1))))));
                    }
                    /* vectorizable */
                    for (signed char i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        var_34 *= ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
                        arr_56 [i_0] [i_0] [i_9] [i_13] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [1U] [i_13 + 1] [i_0] [i_13 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_13 - 2] [i_0] [i_13 + 1]))) : (2140577799U)));
                    }
                }
                var_35 += ((/* implicit */_Bool) (-(max((arr_7 [i_2] [(_Bool)1]), (((/* implicit */unsigned int) arr_52 [i_0] [i_2] [i_2] [9U] [i_9]))))));
                var_36 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)44725))))), (min((((((/* implicit */unsigned long long int) arr_35 [i_2] [i_9])) - (arr_17 [i_0] [(short)0] [11] [(signed char)6]))), (((/* implicit */unsigned long long int) ((unsigned int) var_3)))))));
                var_37 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((max((var_9), (((/* implicit */unsigned long long int) arr_55 [9U] [i_2] [i_2] [0U])))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */int) var_2)))))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_45 [(unsigned char)8])), (var_2)))) : (((((/* implicit */_Bool) ((var_10) & (((/* implicit */int) var_8))))) ? (min((var_12), (((/* implicit */int) (signed char)25)))) : ((~(((/* implicit */int) var_5))))))));
            }
        }
    }
    for (unsigned int i_16 = 3; i_16 < 11; i_16 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_17 = 0; i_17 < 13; i_17 += 1) 
        {
            var_38 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (signed char)-13)) >= (((/* implicit */int) (signed char)-97))))) - (((/* implicit */int) (short)-28471))));
            var_39 = ((/* implicit */unsigned int) ((arr_57 [i_16 + 2]) > (((((/* implicit */_Bool) 17490580144555134581ULL)) ? (268402688U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)178)))))));
        }
        /* vectorizable */
        for (unsigned int i_18 = 1; i_18 < 12; i_18 += 1) 
        {
            var_40 = ((/* implicit */long long int) arr_57 [i_16]);
            var_41 = arr_59 [i_18 - 1];
        }
        var_42 |= ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) var_4)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_60 [(_Bool)0] [i_16] [(_Bool)0]))) + (var_0)))))));
        var_43 = ((/* implicit */_Bool) max((max(((((_Bool)0) ? (10170848480794027680ULL) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((signed char) arr_59 [i_16]))))), ((~(min((arr_58 [i_16]), (((/* implicit */unsigned long long int) 2978063308U))))))));
        arr_66 [i_16] = ((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) arr_64 [i_16] [i_16])) ? (((/* implicit */int) arr_64 [2U] [3U])) : (((/* implicit */int) var_2)))))) << (((max((min((var_9), (((/* implicit */unsigned long long int) var_8)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_61 [12U] [i_16] [(signed char)8]))))) - (18446744073709551563ULL)))));
    }
    var_44 += ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */long long int) var_12)) : (-2153768179203955701LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)157)) : (var_12))))))), (((unsigned long long int) min((((/* implicit */int) var_11)), (var_12))))));
}

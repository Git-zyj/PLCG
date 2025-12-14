/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32267
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
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_6 [i_1] [10ULL] [3ULL] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) max((0LL), (((/* implicit */long long int) arr_1 [i_1]))))) * (((((/* implicit */_Bool) var_11)) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) -15LL)))))) - (((/* implicit */unsigned long long int) arr_4 [i_0]))));
                var_14 = ((/* implicit */int) (-(((((((/* implicit */int) (short)-29333)) <= (((/* implicit */int) arr_3 [i_0])))) ? (((long long int) var_5)) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (short)26347))) : (arr_4 [16LL])))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_13 [i_0] = ((/* implicit */signed char) var_7);
                        arr_14 [i_3] [i_2 - 2] [23] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(min((var_6), (((/* implicit */int) var_5))))))) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [9]))) & (arr_5 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_4 [12ULL]) / (((/* implicit */long long int) arr_0 [i_2]))))) || (((/* implicit */_Bool) ((0LL) >> (((((/* implicit */int) arr_3 [i_2])) + (19655))))))))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 1; i_4 < 21; i_4 += 1) /* same iter space */
                        {
                            arr_17 [19ULL] [i_4] [i_3] [i_3] [i_4] = ((((((/* implicit */int) arr_8 [i_0] [(signed char)16] [(signed char)18] [15])) + (2147483647))) >> (((min((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [1LL] [8] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26348))) : (arr_10 [i_0] [i_1] [i_3] [i_1] [22] [i_0]))))) - (18446744073709525242ULL))));
                            arr_18 [i_1] = max((((int) ((((/* implicit */int) (short)23077)) << (((var_1) - (14437018117872418072ULL)))))), (arr_11 [i_4 - 1] [(short)21] [i_2] [i_2 - 2]));
                            arr_19 [7ULL] [i_1] [i_1] [i_2 + 2] [9ULL] [i_4] [(short)20] = ((/* implicit */short) ((-30090513) > (2040508212)));
                        }
                        for (long long int i_5 = 1; i_5 < 21; i_5 += 1) /* same iter space */
                        {
                            arr_24 [5LL] = ((/* implicit */unsigned long long int) ((short) max((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) (short)-26348)))));
                            var_15 = ((/* implicit */short) arr_15 [i_0] [i_1] [i_2] [(signed char)6] [(short)0] [i_5 + 4]);
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            arr_29 [8ULL] [i_1] [10] [i_2 - 3] [i_6] [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [(short)0] [i_0])) == (arr_21 [i_0]))))));
                            arr_30 [(signed char)1] [(short)2] [i_2 - 2] [i_2 - 3] [20ULL] &= (-(((/* implicit */int) var_8)));
                            arr_31 [20] [(short)16] [i_2] [(short)11] [19ULL] = ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_28 [i_2] [i_1])))) ? (arr_23 [8ULL] [3ULL] [i_2] [4] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_6 + 1])) >> (((arr_5 [i_0]) - (15282699118268002167ULL)))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            var_16 = ((((/* implicit */_Bool) -22LL)) ? (((0ULL) + (((/* implicit */unsigned long long int) arr_26 [i_0] [i_1] [i_2] [i_6 - 1] [i_8])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) arr_7 [i_0] [2] [i_6] [i_8]))))));
                            arr_35 [i_8] [i_1] [9] [(signed char)18] [18LL] [19LL] = ((/* implicit */short) ((((var_4) - (((/* implicit */unsigned long long int) var_0)))) << (((((/* implicit */int) arr_9 [i_0] [i_1] [i_2 + 2] [i_6 + 1] [i_8] [i_1])) + (49)))));
                            var_17 = (~(-1LL));
                            arr_36 [i_0] [i_8] = ((((((/* implicit */_Bool) arr_4 [i_6 + 1])) && (((/* implicit */_Bool) 18446744073709551608ULL)))) ? (((/* implicit */int) ((143552238122434560ULL) > (((/* implicit */unsigned long long int) 17LL))))) : ((+(((/* implicit */int) (short)-26348)))));
                        }
                    }
                    arr_37 [i_2] [2ULL] [i_1] [11] = ((/* implicit */unsigned long long int) var_12);
                }
                for (int i_9 = 1; i_9 < 23; i_9 += 1) /* same iter space */
                {
                    arr_40 [i_9 + 2] = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_20 [13] [i_1] [0] [i_9 + 2] [3LL])) && (((/* implicit */_Bool) var_9)))) ? (max((((/* implicit */long long int) (short)9423)), (8456315046074605662LL))) : (var_2))) + (((/* implicit */long long int) ((/* implicit */int) ((arr_10 [17LL] [i_9 + 1] [i_9] [22] [20LL] [i_1]) >= (arr_10 [23LL] [i_9 + 1] [i_9 + 2] [i_1] [i_1] [i_0])))))));
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        var_18 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0]))) % (134086656ULL)))) ? (((((/* implicit */_Bool) arr_21 [i_9 + 2])) ? (((/* implicit */unsigned long long int) 2122018317)) : (arr_41 [i_9 + 2] [i_9 + 2] [i_9 + 1] [i_9 - 1]))) : (((min((var_4), (7031905794469629007ULL))) - (((/* implicit */unsigned long long int) var_9)))));
                        arr_44 [8] [i_10] [i_10] [i_0] = ((int) arr_27 [i_0] [23ULL] [22] [3]);
                        /* LoopSeq 2 */
                        for (int i_11 = 1; i_11 < 24; i_11 += 2) 
                        {
                            var_19 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (8ULL) : (18446744073709551609ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [22ULL]))) : (var_13))), ((+(((((/* implicit */_Bool) 893856555343531370ULL)) ? (((/* implicit */unsigned long long int) var_6)) : (2ULL))))));
                            var_20 = max((((((/* implicit */_Bool) 12ULL)) ? (3185384275201955791LL) : (3185384275201955766LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 5LL))))));
                        }
                        for (unsigned long long int i_12 = 3; i_12 < 22; i_12 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_33 [i_0] [3ULL] [(short)18] [i_10] [i_12 + 1])))) ? (arr_22 [i_1] [8ULL] [i_10] [24LL]) : (((/* implicit */int) (signed char)-125))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (signed char)-120))));
                            arr_49 [i_10] [20LL] [(short)15] [i_0] [i_12 - 3] = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */int) ((signed char) arr_48 [i_9 - 1] [i_1] [(short)15] [i_10] [(signed char)22]))), (arr_2 [i_0] [2]))));
                        }
                        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 7031905794469629007ULL))));
                        arr_50 [i_10] [i_1] [i_1] [i_9 + 1] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned long long int) arr_15 [i_10] [i_9 - 1] [8] [24ULL] [9ULL] [i_9 + 2])) : (min((((((/* implicit */_Bool) arr_9 [i_0] [i_9] [i_0] [23] [i_10] [i_0])) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) arr_43 [i_10] [i_9 - 1] [21ULL] [i_0])))), (((12ULL) << (((var_4) - (18054963023827076604ULL)))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        var_24 = ((/* implicit */short) (-(arr_41 [i_9 - 1] [i_9] [i_9] [i_13])));
                        arr_53 [i_0] [i_1] [(short)6] = ((/* implicit */int) ((0ULL) + (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_0] [i_13]))));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((unsigned long long int) arr_45 [i_0] [23ULL] [18] [i_13])) + (((/* implicit */unsigned long long int) arr_46 [i_9 + 2] [i_1] [14ULL] [i_9 + 2] [i_9 + 1] [i_1] [i_0])))))));
                        var_26 = (+(arr_22 [i_13] [i_9] [i_1] [i_0]));
                    }
                    arr_54 [12ULL] [(short)22] = max((arr_5 [i_0]), (arr_23 [i_9 - 1] [i_1] [i_1] [9ULL] [(signed char)21]));
                }
                /* vectorizable */
                for (int i_14 = 1; i_14 < 23; i_14 += 1) /* same iter space */
                {
                    arr_58 [(short)22] [i_14] [i_14 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((-1) % (arr_11 [i_0] [i_14] [i_14] [21LL]))) * (((/* implicit */int) ((arr_23 [(short)6] [4ULL] [i_0] [i_1] [i_14]) <= (8ULL))))));
                    arr_59 [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [13ULL] [i_14 + 2] [3ULL])) ? (((/* implicit */int) arr_8 [(short)24] [i_14] [i_1] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_15 = 4; i_15 < 16; i_15 += 3) 
    {
        arr_63 [2ULL] = ((/* implicit */short) ((arr_61 [4LL]) >> (((arr_45 [i_15] [i_15 - 3] [i_15] [i_15 - 1]) - (512330397)))));
        arr_64 [5ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_15 - 4] [(signed char)2] [i_15] [i_15 - 4] [5LL])) ? (7837785486785383408ULL) : (4611686018427387903ULL)));
    }
}

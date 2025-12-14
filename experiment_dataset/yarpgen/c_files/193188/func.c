/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193188
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
    var_18 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [i_1] [i_0])), (arr_0 [i_0])))) ? ((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)2] [i_0]))) : (var_2))))) : (min((((/* implicit */unsigned long long int) max((((/* implicit */signed char) arr_2 [4])), (var_12)))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_1 [9LL]) : (arr_1 [7ULL])))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 3; i_2 < 10; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_13 [(unsigned char)5] [i_0] [(short)7] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) max((((/* implicit */int) var_4)), (var_10)))))));
                                var_19 = ((/* implicit */int) (+(arr_12 [i_0] [i_0] [i_0] [(short)3] [(short)4])));
                            }
                        } 
                    } 
                    var_20 *= ((/* implicit */short) min((min((((/* implicit */unsigned long long int) arr_4 [i_2 - 1])), (arr_1 [i_2 - 2]))), (arr_1 [i_2 + 1])));
                    var_21 = ((/* implicit */_Bool) ((int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4))) * (18081187270227854543ULL))))));
                    var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 1586639917U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(signed char)9] [i_1] [i_0] [1ULL]))) : (var_3))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 365556803481697073ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34057))) : (arr_7 [i_0])))) ? (max((365556803481697073ULL), (((/* implicit */unsigned long long int) (unsigned char)45)))) : (576460752303423487ULL)))));
                }
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    var_23 = ((/* implicit */long long int) ((short) arr_0 [(unsigned char)1]));
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (18081187270227854559ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_9 [i_0] [5U] [5U] [5U] [5U] [2ULL]))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [(signed char)0] [i_0]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)108)), (2708327378U)))) : (4035225266123964416ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_16 [9ULL] [i_1])), (((((/* implicit */_Bool) 0)) ? (arr_8 [7U] [i_1] [7U] [7U]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) arr_2 [i_5]))));
                    arr_17 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [(unsigned short)4] [i_0] [i_0])) : (198619505))), (((/* implicit */int) arr_0 [i_1]))));
                }
                for (int i_6 = 1; i_6 < 8; i_6 += 1) 
                {
                    arr_20 [(unsigned short)0] [i_0] [i_6] = ((/* implicit */unsigned short) var_9);
                    var_26 = ((/* implicit */unsigned short) 11020172221092175822ULL);
                    /* LoopSeq 3 */
                    for (unsigned short i_7 = 1; i_7 < 9; i_7 += 3) 
                    {
                        var_27 = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                        arr_25 [i_0] [i_0] = ((/* implicit */long long int) min(((-(((((/* implicit */_Bool) arr_4 [i_7])) ? (((/* implicit */int) (unsigned short)31479)) : (((/* implicit */int) (unsigned short)34081)))))), (((/* implicit */int) (unsigned char)177))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        arr_28 [i_0] [i_0] [1ULL] [i_0] = ((/* implicit */int) arr_22 [3ULL] [3ULL] [i_0] [i_6] [5LL]);
                        var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_8] [i_6 - 1]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_9] [i_6 + 3] [(_Bool)0] [i_9])) ? (arr_8 [i_0] [i_6 + 3] [i_6 + 3] [5]) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
                            var_30 = ((((/* implicit */_Bool) var_6)) ? (13457507617417387215ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))));
                        }
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) 15032385536LL)) ? (10730918810738045170ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28)))));
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [(unsigned short)3] [(unsigned short)3] [i_0] [(_Bool)1])) ? (arr_14 [i_0] [i_0] [i_0] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_6 + 1] [i_6 + 1] [i_6 - 1])))));
                    }
                    for (unsigned long long int i_10 = 4; i_10 < 10; i_10 += 1) 
                    {
                        var_33 = ((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_1] [i_6] [i_10]);
                        var_34 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((arr_21 [i_6 - 1] [i_10 - 2] [i_10 - 2] [i_10 - 2]), (arr_21 [i_6 - 1] [i_10 - 2] [i_6] [i_10 - 2])))), ((~(10429228291926486017ULL)))));
                        arr_35 [3ULL] [3ULL] [3ULL] [i_0] = ((/* implicit */_Bool) min((((12599258408792729361ULL) >> (((((/* implicit */int) arr_0 [i_6 - 1])) - (28140))))), (((/* implicit */unsigned long long int) min((arr_0 [i_6 + 2]), (arr_0 [i_6 + 3]))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
                        {
                            var_35 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((arr_38 [(short)1] [(short)1] [i_10 - 2] [(signed char)1] [i_6 + 3] [i_1] [i_1]), (arr_38 [i_11] [i_6 + 3] [i_10 - 2] [i_0] [i_6 + 3] [i_0] [i_0])))), (arr_14 [(unsigned short)4] [i_0] [i_0] [(unsigned char)9])));
                            var_36 ^= ((/* implicit */unsigned short) 1192293628030714333LL);
                        }
                        for (unsigned char i_12 = 1; i_12 < 10; i_12 += 2) 
                        {
                            arr_43 [i_0] [i_0] [(short)3] [i_0] [i_10] [i_0] [i_12] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) 2147483647)), (6533041921354091089ULL))), (((((/* implicit */_Bool) ((long long int) arr_42 [5U] [i_1] [3U] [i_0]))) ? (min((14411518807585587199ULL), (18081187270227854543ULL))) : (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned int) (_Bool)1)))))))));
                            var_37 = ((/* implicit */int) min(((+(8764625594297522293ULL))), (((/* implicit */unsigned long long int) -4464485148376778305LL))));
                        }
                    }
                }
                var_38 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_17))));
            }
        } 
    } 
    var_39 = ((((/* implicit */_Bool) 1587111947329425066LL)) ? (min((((/* implicit */unsigned long long int) var_15)), (0ULL))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)179)))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_17))))))));
}

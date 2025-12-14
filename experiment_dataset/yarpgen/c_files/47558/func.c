/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47558
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_14 = ((((/* implicit */_Bool) min((5329105337290487171ULL), (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) : (((unsigned long long int) (short)15333)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (!(((/* implicit */_Bool) ((int) ((arr_1 [i_0]) << (((arr_0 [i_0] [4]) - (17795670228905926907ULL))))))))))));
                    arr_7 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2558))))))) : (max((max((((/* implicit */unsigned long long int) var_12)), (var_0))), (((/* implicit */unsigned long long int) max((var_3), (arr_4 [i_2] [i_1] [i_0]))))))));
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_0 [i_0] [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(var_12))) != ((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_0])))))))) : ((+(max((var_2), (((/* implicit */unsigned long long int) var_4))))))));
                }
            } 
        } 
    }
    for (short i_3 = 3; i_3 < 14; i_3 += 1) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) ((int) max((((/* implicit */unsigned long long int) var_12)), (var_6))))))))));
        arr_10 [i_3] = ((/* implicit */short) ((int) arr_9 [i_3 - 1]));
        /* LoopSeq 3 */
        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            arr_13 [i_3] = min((((short) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) var_4)) : (var_3)))), (((/* implicit */short) ((((/* implicit */_Bool) (short)2557)) || (((/* implicit */_Bool) var_2))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (int i_5 = 1; i_5 < 13; i_5 += 1) 
            {
                arr_17 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_5])) ? (arr_16 [i_3 - 2] [i_5] [i_3 - 2] [i_4]) : (((/* implicit */int) (short)0))))));
                var_18 += ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
                var_19 = var_5;
            }
            for (short i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
            {
                var_20 -= arr_9 [i_3 - 1];
                arr_21 [i_6] [i_3] [i_3] [i_6] = ((/* implicit */short) var_10);
                var_21 = (-(arr_8 [i_6]));
            }
            for (short i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 12; i_8 += 1) 
                {
                    for (short i_9 = 3; i_9 < 14; i_9 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_11) < (((/* implicit */int) arr_27 [i_8] [i_4] [i_8] [i_3] [i_9]))))) != ((~(var_10)))))), (((((/* implicit */_Bool) max((arr_12 [i_3]), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_3] [i_3] [i_7] [i_3] [(short)4]))) : (((((/* implicit */_Bool) arr_14 [i_7] [i_4])) ? (arr_28 [i_3 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_4] [i_4])))))))));
                            var_23 = ((/* implicit */int) min((var_23), ((+(min((arr_24 [i_3] [i_3] [i_7] [i_7]), (arr_24 [i_9 - 1] [i_8] [i_3 - 1] [i_3 - 1])))))));
                        }
                    } 
                } 
                arr_30 [i_3] [i_7] [i_7] = ((/* implicit */int) ((arr_22 [i_7] [i_7]) >= (((((/* implicit */int) arr_18 [i_7] [i_3 - 2] [i_7])) & (((((/* implicit */_Bool) var_1)) ? (arr_8 [i_4]) : (arr_20 [i_3] [i_3] [i_3])))))));
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_19 [i_7] [i_4] [i_3] [i_3])) != (((((/* implicit */_Bool) arr_9 [i_3 - 2])) ? (arr_9 [i_3 - 2]) : (5329105337290487181ULL)))));
                arr_31 [i_3] [i_4] [i_3] [i_7] = ((/* implicit */unsigned long long int) ((short) max(((~(-111093626))), (arr_8 [i_3 - 2]))));
            }
            for (short i_10 = 0; i_10 < 15; i_10 += 1) /* same iter space */
            {
                arr_35 [(short)1] [i_10] [i_3] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) min((arr_27 [i_3 - 1] [i_4] [i_3 - 1] [i_3] [i_4]), (var_5))))))));
                arr_36 [i_10] [i_4] [i_10] = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) var_12)), (arr_34 [i_10] [i_10])))));
                arr_37 [i_3] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_15 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_10])) : (((/* implicit */int) arr_15 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_4])))));
                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (short)-31788))));
            }
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_14 [i_4] [i_3]))));
            arr_38 [i_3] [i_4] [i_3 - 3] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2558)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_4] [i_3]))) : (arr_9 [i_3])))) ? (10004475210032797099ULL) : (((/* implicit */unsigned long long int) ((arr_20 [i_3] [i_3] [i_3]) / (((/* implicit */int) (short)2543))))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)15333)), ((-(((/* implicit */int) var_4))))))));
        }
        for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
        {
            var_27 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_27 [i_3] [i_11] [i_3 + 1] [i_3] [i_3]))))) - (((unsigned long long int) arr_8 [i_11]))));
            arr_42 [i_3] [i_11] = ((int) ((((/* implicit */_Bool) arr_11 [5] [i_3 + 1] [i_11])) ? (arr_11 [i_3] [i_3 - 1] [i_3 - 1]) : (arr_11 [i_3] [i_3 - 3] [i_11])));
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 1) /* same iter space */
        {
            arr_45 [i_3] [i_3] [i_12] = ((/* implicit */short) ((int) var_11));
            arr_46 [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(270119165)))) <= (13117638736419064466ULL)));
            var_28 = ((/* implicit */short) (~(arr_40 [i_3 - 2] [i_3 - 2])));
            /* LoopSeq 3 */
            for (int i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                var_29 = 2147483639;
                arr_49 [i_3] [i_3] = ((/* implicit */int) (-(18446744073709551615ULL)));
            }
            for (int i_14 = 0; i_14 < 15; i_14 += 1) 
            {
                var_30 += ((((unsigned long long int) var_11)) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [i_3] [i_12] [i_12] [i_14] [i_14]))))));
                var_31 = ((/* implicit */int) ((unsigned long long int) (~(var_7))));
                var_32 = (-2147483647 - 1);
            }
            for (short i_15 = 1; i_15 < 13; i_15 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 1) 
                {
                    var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) (~(arr_16 [i_3 - 1] [i_15 + 2] [i_15] [i_15]))))));
                    var_34 *= ((/* implicit */int) ((var_10) != (((/* implicit */int) arr_51 [i_15 + 2] [i_3 - 2]))));
                    arr_57 [i_16] [i_16] [i_16] [i_3] = arr_39 [i_3] [i_3 - 2];
                }
                for (int i_17 = 0; i_17 < 15; i_17 += 1) 
                {
                    arr_61 [i_3] [i_3] [i_15] [i_12] [i_15 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_3] [2])) ? (var_11) : (((((/* implicit */_Bool) arr_25 [6] [6] [6] [i_3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_15 [i_17] [i_15] [i_12] [i_3]))))));
                    arr_62 [i_17] [i_12] [i_12] [i_3] = ((/* implicit */int) arr_14 [i_15] [i_12]);
                    var_35 = ((/* implicit */short) (((~(var_3))) | ((-(((/* implicit */int) arr_27 [i_3] [i_12] [i_15] [i_15] [i_15]))))));
                }
                for (short i_18 = 4; i_18 < 13; i_18 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 1; i_19 < 14; i_19 += 1) 
                    {
                        arr_70 [i_19 - 1] [i_18] [i_18] [i_12] [i_3] = ((/* implicit */int) ((((var_2) > (((/* implicit */unsigned long long int) arr_8 [i_3])))) ? (((((/* implicit */_Bool) var_7)) ? (0ULL) : (arr_12 [i_15]))) : ((~(var_2)))));
                        var_36 = ((/* implicit */unsigned long long int) var_4);
                    }
                    var_37 += ((/* implicit */int) ((((/* implicit */int) ((5329105337290487173ULL) != (((/* implicit */unsigned long long int) 1871077247))))) >= ((-(arr_54 [i_12] [i_12] [i_18 - 2])))));
                    var_38 = ((/* implicit */int) ((var_6) - (arr_11 [i_18] [i_3] [i_3 - 3])));
                    arr_71 [i_12] [i_18] [(short)8] [i_18 - 1] = ((/* implicit */unsigned long long int) 557166606);
                }
                var_39 = ((/* implicit */int) 5113764324362416281ULL);
            }
            arr_72 [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) -1523497950))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_20 = 3; i_20 < 14; i_20 += 1) 
        {
            var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) 3359322663054674096ULL))));
            arr_75 [(short)6] [i_20] [i_20] |= (short)-15334;
        }
        var_41 = ((/* implicit */short) var_12);
    }
    for (int i_21 = 0; i_21 < 18; i_21 += 1) 
    {
        arr_78 [i_21] = ((/* implicit */short) (~(max((arr_76 [i_21]), ((+((-2147483647 - 1))))))));
        var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned long long int) arr_77 [i_21] [i_21]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (4051183387105211383ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-30485)) ^ (((/* implicit */int) var_5))))))))));
    }
    var_43 = ((/* implicit */short) var_11);
}

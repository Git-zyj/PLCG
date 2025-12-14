/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214628
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
    var_10 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_0))));
    var_11 |= ((/* implicit */short) ((max((((var_8) ? (((/* implicit */long long int) var_6)) : (var_9))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (var_6)))))) << (((var_1) - (4177925358U)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))) : (9502863468598460984ULL)));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_0) ? (8943880605111090631ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) % (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1])))))))) ? (((var_0) ? (max((((/* implicit */unsigned long long int) var_4)), (arr_5 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_0])))));
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */int) (short)-7588)) * (((/* implicit */int) arr_9 [i_0] [i_1]))))))) ? (((((/* implicit */_Bool) ((unsigned int) 9223372036854775807LL))) ? (((/* implicit */int) max((arr_7 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */short) var_7))))) : (((/* implicit */int) ((signed char) var_7))))) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
                var_14 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69))) * (var_3))), (((/* implicit */unsigned long long int) ((long long int) arr_9 [i_2] [i_1])))));
                arr_10 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_6)))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_7)) : (arr_8 [i_2] [i_1] [i_0]))) : (((/* implicit */int) min((var_2), (arr_3 [i_0] [i_0] [i_2]))))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (min((((/* implicit */unsigned long long int) -309242487)), (1032192ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115)))))));
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_6))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-9211)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)21211))))), (1179620134U)))));
            }
            for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 1) 
            {
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((unsigned long long int) ((long long int) var_4))) : (arr_5 [i_0])));
                /* LoopSeq 2 */
                for (long long int i_4 = 1; i_4 < 13; i_4 += 3) 
                {
                    var_17 &= ((/* implicit */_Bool) (-(arr_8 [i_4] [i_3] [i_1])));
                    var_18 = ((/* implicit */long long int) max(((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_0]))) <= (arr_0 [i_4])))))), (((/* implicit */int) ((((/* implicit */long long int) (-2147483647 - 1))) != (var_9))))));
                    arr_16 [i_1] [i_3] [i_0] [i_1] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_14 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_3] [i_4 + 1]), (arr_14 [i_4 + 1] [i_4] [i_4 - 1] [i_4] [i_3] [i_4 + 1])))) && (((_Bool) arr_14 [i_4] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_3] [i_4]))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 3) 
                {
                    /* LoopSeq 4 */
                    for (short i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        arr_23 [i_0] [i_3] [i_3] [i_5] [i_6] = ((/* implicit */short) var_7);
                        arr_24 [i_1] [i_1] [i_3] = ((/* implicit */short) arr_9 [i_3 + 1] [i_3 + 1]);
                        var_19 |= ((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_5 + 1])) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_3 + 2] [i_3] [i_5 + 3] [i_5 + 1])) + (12676)))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] &= ((/* implicit */unsigned long long int) var_4);
                    }
                    for (signed char i_7 = 1; i_7 < 13; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */_Bool) var_6);
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((unsigned long long int) arr_21 [i_1] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_5 + 1] [i_5])))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_2 [i_3] [i_7 - 1]))));
                        arr_28 [i_0] [i_7] [i_7] [i_3] [i_7] [i_0] = ((/* implicit */unsigned int) ((_Bool) arr_14 [i_5] [i_3] [i_5 - 1] [i_3 + 2] [i_3] [i_0]));
                    }
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        var_23 = ((unsigned long long int) arr_17 [i_0] [i_5]);
                        var_24 = ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_5]);
                        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                        var_26 ^= ((/* implicit */short) ((arr_15 [i_5 + 2] [i_3] [i_3 + 2] [i_1]) ? (-13LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5 + 1] [i_3 - 1] [i_3 - 1] [i_3])))));
                    }
                    for (signed char i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1]))));
                        arr_34 [i_3] [i_1] [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_3 + 3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))));
                        var_28 = ((/* implicit */short) ((((/* implicit */unsigned int) -309242496)) == (arr_20 [i_3] [i_5] [i_5 + 3] [i_3])));
                    }
                    arr_35 [i_0] [i_3] = ((/* implicit */unsigned int) (~(((long long int) var_5))));
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9502863468598460984ULL)) ? (-839137111815645886LL) : (((/* implicit */long long int) 2173794799U))));
                    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [i_0] [i_0])))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        var_31 = ((/* implicit */long long int) ((short) arr_30 [i_3 + 1] [i_10] [i_3 + 1] [i_3 + 2] [i_3]));
                        var_32 ^= ((/* implicit */short) (unsigned short)16600);
                        arr_38 [i_0] [i_5] |= ((unsigned int) (short)-494);
                    }
                }
                var_33 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)29002)))))));
                arr_39 [i_3] [i_3] = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_1)), (arr_19 [i_3 + 3] [i_0] [i_3]))), (((/* implicit */long long int) max((((/* implicit */int) arr_27 [i_3] [i_3 + 2] [i_3] [i_3 + 2] [i_3])), (-1930293883))))));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_11 = 1; i_11 < 11; i_11 += 1) 
        {
            arr_42 [i_11] [i_11] [i_11] = ((((/* implicit */_Bool) (signed char)-1)) ? (8972184685355006603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-501))));
            var_34 = ((/* implicit */short) var_0);
        }
        for (short i_12 = 0; i_12 < 14; i_12 += 3) 
        {
            var_35 *= max((max((arr_41 [i_0] [i_12] [i_12]), (arr_41 [i_0] [i_12] [i_12]))), (((/* implicit */unsigned long long int) min((arr_11 [i_0] [i_0] [i_0]), (((/* implicit */short) (signed char)0))))));
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_12] [i_0]))) != (max((((/* implicit */unsigned long long int) ((short) (short)30507))), (8411649524438398785ULL)))));
        }
        var_37 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) var_5)) <= (min((2147483647), (((/* implicit */int) var_4))))))) : (((/* implicit */int) ((short) ((short) (_Bool)1))))));
    }
}

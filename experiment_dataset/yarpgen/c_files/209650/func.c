/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209650
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
    var_19 = var_5;
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) arr_0 [(unsigned short)11]))), (arr_1 [i_0 + 1] [i_0 + 1]))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) 3611397134055996502LL);
                    arr_8 [i_2] [i_1] [i_2 - 2] [6LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2678008727U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)215)) ? (3727695821U) : (410667517U)))) : (arr_5 [i_2 - 1] [i_2 + 1] [i_2 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) > (410667500U))))) : (min((((/* implicit */unsigned int) (short)-28496)), (4294967295U)))));
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        arr_13 [(_Bool)1] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) (-((~(min((var_17), (((/* implicit */unsigned long long int) var_1))))))));
                        var_21 = ((/* implicit */short) 6886302130911056944LL);
                        arr_14 [i_2] [i_1] = ((unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_2 - 1] [i_0])) ? (arr_12 [i_0] [i_2] [i_2 + 1] [i_2 - 1]) : (arr_12 [i_0] [i_2] [i_2 - 2] [i_3])));
                        arr_15 [i_2] [i_2] = ((/* implicit */signed char) arr_10 [i_0] [i_1] [i_1] [i_0]);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_18 [i_2] = ((/* implicit */unsigned int) (short)-8);
                        arr_19 [(unsigned char)15] [(signed char)16] [i_2] [(signed char)9] [i_2] [i_2 + 1] = ((/* implicit */long long int) max((var_4), (((/* implicit */short) ((((((/* implicit */_Bool) 2100716985)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551610ULL))) > (min((((/* implicit */unsigned long long int) 410667501U)), (arr_4 [i_0] [i_0] [i_0]))))))));
                        arr_20 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */long long int) arr_4 [i_0 - 1] [i_2 - 2] [i_2 - 1]);
                    }
                    for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        arr_23 [i_2] [i_1] = ((/* implicit */int) ((unsigned int) ((((/* implicit */unsigned long long int) 2678008727U)) / (1724694344533954652ULL))));
                        arr_24 [i_1] [i_2] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (short)3037);
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) 4294967271U)) ? (((/* implicit */unsigned int) var_14)) : (4294967294U)))));
                        var_23 = ((/* implicit */unsigned short) arr_6 [i_2 - 1] [i_1 - 2] [i_0 + 1] [i_2]);
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_7 = 2; i_7 < 21; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_9 = 1; i_9 < 19; i_9 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 2; i_10 < 19; i_10 += 4) 
                        {
                            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)150))));
                            var_25 = ((/* implicit */signed char) (+(max((((/* implicit */unsigned int) min((var_3), (((/* implicit */int) arr_2 [i_9]))))), (((((/* implicit */_Bool) var_2)) ? (410667500U) : (4294967288U)))))));
                            arr_42 [i_0 + 1] [4LL] [i_8] = ((/* implicit */long long int) ((_Bool) 14668695236671074065ULL));
                            arr_43 [i_0 + 1] [i_0 + 1] [i_0 + 1] [(unsigned char)3] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2117285844)) ? (((((/* implicit */_Bool) ((2744940197U) ^ (arr_26 [i_8] [i_9] [i_8] [i_8])))) ? (18446744073709551607ULL) : (1360255233081869026ULL))) : (arr_4 [i_0 - 1] [i_9] [i_10])));
                            arr_44 [(short)20] [i_0] [i_8] [i_9 + 2] [i_7 - 2] [3LL] = ((/* implicit */signed char) -1LL);
                        }
                        for (unsigned int i_11 = 2; i_11 < 21; i_11 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned int) arr_27 [(signed char)10] [i_7 - 2] [i_9]);
                            var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-14660))));
                            arr_47 [i_8] [i_11 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)180))));
                            arr_48 [i_8] [i_7] = min((max((4582655900123409909ULL), (((/* implicit */unsigned long long int) 4294967295U)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967288U)) <= (18446744073709551609ULL))))))));
                        }
                        arr_49 [i_0] [(signed char)19] [i_8] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((-15LL) | (var_18))), (((/* implicit */long long int) ((signed char) (_Bool)1))))))));
                        arr_50 [i_0] [i_0] [i_8] [i_8] = ((/* implicit */signed char) var_11);
                    }
                    for (unsigned int i_12 = 3; i_12 < 18; i_12 += 3) 
                    {
                        arr_54 [i_8] = ((/* implicit */signed char) (-(2447932491225624429ULL)));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_5 [i_0] [i_7] [i_12])))))) ? (((((/* implicit */_Bool) var_10)) ? (-7077990089700581035LL) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_0 - 1] [14U] [i_8] [i_0] [i_12 + 4]))))) : (((/* implicit */long long int) min((min((3200229555U), (4294967295U))), (var_7))))));
                        arr_55 [i_0] [i_8] [i_7] = ((/* implicit */unsigned short) arr_4 [i_8] [i_0] [i_8]);
                        arr_56 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */int) arr_11 [i_8] [i_7]);
                        arr_57 [i_8] [i_7] [15ULL] [i_8] [i_8] [i_12] = ((/* implicit */long long int) min((14778194930124302693ULL), (((/* implicit */unsigned long long int) ((((unsigned int) -557941349)) / (((/* implicit */unsigned int) ((/* implicit */int) max((arr_45 [i_0 - 1] [i_7] [i_8] [i_8]), (((/* implicit */unsigned short) (short)-3038)))))))))));
                    }
                    arr_58 [i_0] [i_8] [i_8] [i_0] = ((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (signed char)24))));
                }
            } 
        } 
        var_29 = (unsigned short)5196;
    }
    for (unsigned long long int i_13 = 1; i_13 < 9; i_13 += 2) 
    {
        arr_62 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_7 [i_13 + 1] [i_13 - 1] [i_13] [i_13 + 1])))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)124)) & (((/* implicit */int) (short)3028))))) : (((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (signed char i_14 = 3; i_14 < 10; i_14 += 3) 
        {
            for (unsigned int i_15 = 2; i_15 < 10; i_15 += 4) 
            {
                {
                    arr_68 [i_13] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_53 [i_14 - 3]))))));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (1094737741U))) + (((((/* implicit */_Bool) arr_38 [i_15] [i_13] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_13 - 1] [i_13 - 1]))) : (arr_26 [i_13] [i_14 - 1] [i_15] [i_13])))))) ? (((((/* implicit */_Bool) arr_37 [5LL] [i_14 - 3] [16U] [i_13 + 2])) ? (((/* implicit */int) arr_37 [i_14] [i_14 + 1] [i_15] [i_13 - 1])) : (((/* implicit */int) arr_37 [16ULL] [i_14 - 3] [i_14] [i_13 + 2])))) : (((/* implicit */int) arr_40 [i_13] [i_13 + 1] [i_15 - 2] [i_13] [9U]))));
                }
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) var_14)), (var_0))))) != (((/* implicit */int) ((min((((/* implicit */long long int) var_7)), (var_9))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3007))) : (var_7)))))))));
}

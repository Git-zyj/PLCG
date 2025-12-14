/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246750
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_11 [i_1] = ((/* implicit */long long int) var_1);
                            arr_12 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
                        }
                    } 
                } 
                var_17 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1])) ? (((/* implicit */long long int) arr_4 [i_1] [i_1])) : (-16384LL)))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) min((max((((/* implicit */long long int) var_12)), (min((-1449800861742730874LL), (var_4))))), (((((/* implicit */_Bool) ((-820538797) / (((/* implicit */int) (unsigned short)30233))))) ? ((+(16382LL))) : (((((/* implicit */_Bool) 2792736791939947377LL)) ? (var_6) : (((/* implicit */long long int) var_0))))))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 16384LL)) : (11948261096480458251ULL))), (max((var_5), (((/* implicit */unsigned long long int) var_1))))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
    /* LoopSeq 1 */
    for (unsigned short i_4 = 2; i_4 < 16; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min(((unsigned short)27724), (((/* implicit */unsigned short) (_Bool)0))));
                    arr_19 [i_6] [i_5] [i_4 + 1] [i_4] = ((/* implicit */signed char) var_2);
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_22 [(short)2] [i_6] [i_6 - 1] [i_6] [i_6] [i_6]))) | (((/* implicit */int) arr_22 [1] [i_6] [i_6 - 1] [(short)13] [i_6] [i_6]))));
                        arr_24 [i_5] [(short)3] [i_6 - 1] [i_7] = ((/* implicit */short) ((signed char) 96127150));
                        var_22 = var_3;
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            arr_27 [i_7] [i_8] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) -22)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (short)-27914))));
                            var_23 = max((((/* implicit */unsigned long long int) ((-8186723006183201377LL) | (arr_10 [i_6 - 1] [i_7] [i_8] [i_8] [i_8] [4LL])))), (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) arr_10 [i_6 - 1] [i_6] [i_8] [i_6] [i_8] [i_8])))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 8186723006183201380LL)) ? (var_10) : (((/* implicit */unsigned long long int) arr_10 [i_4] [i_4] [i_6 - 1] [i_7] [i_8] [i_6]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 163671303)) < (arr_25 [i_4] [i_8] [(unsigned short)0] [i_4 - 1] [i_7]))))) : (((((/* implicit */_Bool) -1449800861742730876LL)) ? (-1190540265344640628LL) : (((/* implicit */long long int) ((/* implicit */int) (short)17563)))))));
                            var_25 = 2703065812401170191LL;
                            arr_28 [i_4] [i_8] [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) 4294967295U);
                        }
                    }
                    arr_29 [15LL] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((short) 2147483630))), (max((var_16), (((/* implicit */unsigned int) arr_21 [i_4] [i_4] [i_4] [i_4] [i_4])))))))));
                }
            } 
        } 
        arr_30 [i_4] = ((/* implicit */_Bool) arr_25 [0U] [14LL] [i_4] [i_4] [i_4]);
        var_26 = ((/* implicit */_Bool) max((((/* implicit */int) max((arr_13 [i_4 - 1]), (arr_13 [i_4 - 1])))), (((((/* implicit */int) arr_13 [i_4 - 1])) % (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 3 */
        for (signed char i_9 = 1; i_9 < 16; i_9 += 2) 
        {
            var_27 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_33 [i_4] [i_4] [i_9 + 1]), (-2147483631)))))))) != (var_7)));
            var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)48198)) ? (((((/* implicit */_Bool) 6414943516669775303LL)) ? (2102878978U) : (arr_18 [i_9] [i_9] [i_4 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-9401))))) | (min((var_16), (((/* implicit */unsigned int) arr_5 [i_9 - 1] [4ULL]))))));
            var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_11)) >= (arr_25 [i_9 + 1] [(signed char)10] [i_4 + 1] [i_4 - 2] [(signed char)10]))))) <= ((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_9 + 1] [i_4]))) | (var_2)))))));
        }
        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_39 [(unsigned char)0] = ((/* implicit */long long int) var_1);
                arr_40 [i_4] [i_10] [i_10] = (((+(((int) arr_0 [i_4 - 2] [(unsigned char)9])))) << (((/* implicit */int) max((var_15), (((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_35 [(signed char)7]))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    arr_44 [4ULL] [i_10] [i_10] [i_10] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_8 [i_4 + 1] [i_4 + 1] [i_4])), (((((arr_0 [i_4] [i_4]) && (((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (arr_31 [i_4] [i_12])))))))));
                    var_30 = max((((/* implicit */long long int) (((-(-22))) << (((/* implicit */int) (signed char)16))))), (-57605901915249383LL));
                }
            }
            arr_45 [i_4 - 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) min((((/* implicit */int) var_14)), (arr_33 [i_10] [i_10] [i_4 + 1])))))));
            arr_46 [i_4] [i_10] = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_4] [i_10]))) & (arr_2 [i_4 - 2])))));
            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7)) ? (-1449800861742730860LL) : (((/* implicit */long long int) 264116936))))) ? (((((((/* implicit */_Bool) -57605901915249394LL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_4] [i_4]))))) - (((/* implicit */unsigned long long int) (-(2147483608)))))) : (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_12)), (arr_25 [i_4] [6] [i_4] [6] [6]))) | (max((-57605901915249383LL), (((/* implicit */long long int) (_Bool)0)))))))));
        }
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            arr_49 [i_13] = ((/* implicit */int) ((min((((arr_6 [0U] [i_4] [(short)16] [i_4]) != (var_4))), ((!(((/* implicit */_Bool) 360753821U)))))) ? (min((arr_4 [0] [0]), ((-(var_16))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12065)))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_14 = 0; i_14 < 17; i_14 += 1) 
            {
                arr_54 [i_4] [i_13] [i_14] [i_14] = ((/* implicit */long long int) var_10);
                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_4 + 1])) ? (((/* implicit */int) arr_22 [i_4] [i_4 - 1] [i_14] [(signed char)6] [i_13 - 1] [i_4 - 1])) : (((((/* implicit */_Bool) -2432775437659188026LL)) ? (((/* implicit */int) (short)25824)) : (((/* implicit */int) (signed char)-69))))));
                arr_55 [(short)11] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) 14164581467338978659ULL)) ? (arr_36 [i_4 + 1] [i_14]) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [(short)0]))) : (var_9)))));
            }
            /* vectorizable */
            for (unsigned char i_15 = 0; i_15 < 17; i_15 += 4) 
            {
                var_33 = var_4;
                arr_58 [i_15] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_13] [4U]))))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65528)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 3; i_16 < 15; i_16 += 2) 
                {
                    arr_61 [i_16 - 3] [i_16] [i_13] [i_16] [i_4] = ((/* implicit */int) arr_32 [i_13 - 1]);
                    arr_62 [i_4] [i_16] [i_16] [i_16] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((arr_6 [i_16] [i_16] [i_4 + 1] [i_16]) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_63 [i_4] [9LL] [i_16] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_16] [i_16 - 1])) ? (((/* implicit */long long int) ((unsigned int) arr_33 [(_Bool)1] [(_Bool)1] [i_16]))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (57605901915249422LL)))));
                    arr_64 [i_4] [i_16] [i_4 - 1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)48178)) ? (((/* implicit */int) (short)27931)) : (805306368)));
                }
            }
            for (long long int i_17 = 0; i_17 < 17; i_17 += 3) 
            {
                arr_69 [(signed char)9] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-26770)) + (2147483647))) << (((((/* implicit */int) min((((/* implicit */short) (unsigned char)168)), ((short)27909)))) - (168)))));
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 4) 
                {
                    for (unsigned char i_19 = 3; i_19 < 14; i_19 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65518)) ? (((/* implicit */unsigned long long int) arr_4 [i_18] [i_13 - 1])) : (1216542089742995141ULL))));
                            arr_76 [i_4] [i_4] [i_17] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_51 [i_18] [i_4 - 2] [i_13 - 1])))) ? (((((/* implicit */_Bool) 4171698820U)) ? (10911084003738732168ULL) : (((/* implicit */unsigned long long int) -57605901915249394LL)))) : (((/* implicit */unsigned long long int) min((arr_25 [i_13 - 1] [i_18] [i_13 - 1] [i_17] [i_17]), (((/* implicit */long long int) (unsigned short)65528)))))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */_Bool) ((12LL) << (((((/* implicit */int) (unsigned short)32394)) - (32361)))));
            }
            var_36 = ((/* implicit */_Bool) ((int) (signed char)40));
            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_16 [(signed char)14] [i_13] [i_4 - 2])), (((((/* implicit */_Bool) (unsigned short)65528)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-9)))))))) || (((/* implicit */_Bool) min((arr_35 [i_4 - 2]), (((/* implicit */long long int) var_3)))))));
        }
        arr_77 [(_Bool)1] [i_4 - 1] = max((((unsigned int) (unsigned short)65516)), (var_11));
    }
}

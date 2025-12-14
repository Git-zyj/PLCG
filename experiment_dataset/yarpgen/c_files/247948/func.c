/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247948
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_17 = ((/* implicit */_Bool) ((unsigned short) arr_2 [i_0] [i_1] [i_1]));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_1] [i_0] [i_0])) > (((/* implicit */int) var_5))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_8 [i_2] = ((/* implicit */int) (_Bool)1);
                arr_9 [i_2] = ((arr_7 [i_2] [i_2]) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) ((_Bool) -3310610393166460688LL))));
                var_19 = ((unsigned long long int) arr_2 [i_1] [i_1] [i_0]);
                arr_10 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) -8594252696749669181LL)) && (((/* implicit */_Bool) arr_4 [i_1] [i_2]))));
                var_20 = ((/* implicit */unsigned short) ((_Bool) arr_0 [i_0]));
            }
            for (long long int i_3 = 3; i_3 < 16; i_3 += 3) 
            {
                arr_13 [i_0] [i_0] [i_3] |= ((/* implicit */int) ((unsigned char) var_10));
                /* LoopSeq 1 */
                for (long long int i_4 = 2; i_4 < 15; i_4 += 3) 
                {
                    var_21 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)11997))));
                    var_22 = ((/* implicit */_Bool) arr_14 [i_0] [i_4 + 1] [i_3 - 3] [i_4]);
                    var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [15] [i_1] [i_1])) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) (_Bool)1))));
                }
            }
            arr_16 [i_0] = ((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_1] [i_1]))));
        }
        var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 4294967285U)) : (arr_3 [i_0]))) * (((/* implicit */unsigned long long int) (~(var_7))))));
        var_25 = ((/* implicit */long long int) arr_0 [i_0]);
        var_26 += ((/* implicit */unsigned short) (_Bool)1);
        arr_17 [i_0] = ((/* implicit */unsigned long long int) var_9);
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_19 [i_5] [i_5])) + (2147483647))) >> (((/* implicit */int) arr_20 [i_5]))))) ? (((/* implicit */int) arr_18 [i_5] [i_5])) : (((/* implicit */int) arr_19 [i_5] [i_5])))))));
        arr_21 [i_5] = ((/* implicit */int) ((var_2) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1359508776)) ? (((/* implicit */int) (signed char)97)) : (-1359508759)))) : (24ULL)));
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((4294967285U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_5])))))) ? (arr_24 [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6] [i_5] [i_6])))));
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) 11U)) ? (arr_25 [i_5] [i_7]) : (arr_25 [i_5] [i_6])));
                var_30 -= ((/* implicit */long long int) arr_27 [i_5] [i_5]);
            }
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                arr_31 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) arr_28 [i_6]);
                var_31 |= ((/* implicit */int) arr_23 [i_5]);
            }
        }
        for (long long int i_9 = 3; i_9 < 20; i_9 += 2) 
        {
            var_32 = ((/* implicit */int) 2136543373U);
            /* LoopSeq 4 */
            for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                var_33 = ((/* implicit */_Bool) (unsigned short)50394);
                /* LoopSeq 3 */
                for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 4) 
                {
                    /* LoopSeq 3 */
                    for (int i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        var_34 -= ((/* implicit */_Bool) 3075268519U);
                        arr_40 [(signed char)4] [i_11] [i_9] [i_9] [i_9] [i_5] [i_5] = ((/* implicit */long long int) (_Bool)1);
                        var_35 = ((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) arr_19 [i_10] [i_12])) : (((/* implicit */int) arr_19 [i_9 - 3] [i_11]))));
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 20; i_13 += 4) 
                    {
                        arr_43 [i_13 - 1] [i_5] [i_9] [i_10] [i_9] [i_5] [i_5] = ((/* implicit */unsigned int) ((short) ((unsigned int) (_Bool)1)));
                        var_36 = ((/* implicit */long long int) 8681317110899321845ULL);
                        var_37 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)53)) || (((/* implicit */_Bool) 1359508798))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned int) ((arr_30 [3U] [i_9] [i_9 - 2] [i_9 - 2]) && (((/* implicit */_Bool) var_1))));
                        var_39 = ((/* implicit */int) (!((_Bool)1)));
                    }
                    arr_46 [i_11 + 2] [i_9] [i_5] [i_9] [i_5] = ((/* implicit */long long int) arr_27 [i_9] [i_11 - 1]);
                }
                for (long long int i_15 = 0; i_15 < 21; i_15 += 2) 
                {
                    var_40 = ((/* implicit */unsigned long long int) ((arr_47 [i_5] [i_5] [i_10] [i_5] [i_15] [i_9]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) (unsigned short)44246))))))));
                    arr_50 [i_9] [i_9 - 1] [i_15] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_5])) ? (((((/* implicit */_Bool) var_15)) ? (2950300083887611428ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247)))));
                }
                for (unsigned char i_16 = 2; i_16 < 20; i_16 += 2) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned short) ((long long int) arr_29 [i_9] [i_9] [i_9] [i_9 - 3]));
                        var_42 += ((/* implicit */_Bool) arr_55 [i_16] [i_16] [i_16] [i_9] [i_9]);
                        var_43 = ((/* implicit */short) ((arr_25 [i_16 + 1] [i_9]) >= (arr_25 [i_16 + 1] [i_5])));
                    }
                    for (long long int i_18 = 2; i_18 < 20; i_18 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) arr_38 [i_5] [i_5] [(signed char)1]))));
                        var_45 = ((/* implicit */_Bool) ((long long int) arr_34 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_16 + 1]));
                        var_46 = ((/* implicit */int) arr_22 [i_5] [i_9] [i_5]);
                    }
                    for (unsigned short i_19 = 0; i_19 < 21; i_19 += 4) 
                    {
                        var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_10] [i_19])) || ((!(((/* implicit */_Bool) arr_34 [i_5] [i_5] [i_5] [i_5]))))));
                        var_48 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_30 [i_16] [i_10] [i_9] [i_5])) : (((int) 4U))));
                        var_49 = ((/* implicit */long long int) max((var_49), ((~(arr_34 [i_9 - 2] [i_10] [i_9 - 2] [i_19])))));
                        var_50 |= ((/* implicit */int) var_1);
                    }
                    var_51 = ((/* implicit */long long int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_56 [i_5] [i_5] [i_5] [i_5] [i_9]))))) > (arr_48 [i_9] [i_9 - 1] [i_9 - 2] [i_16 + 1])));
                    arr_61 [i_5] [i_5] [i_9 - 2] [i_9] [i_9 - 2] = ((/* implicit */unsigned short) ((arr_54 [i_9] [i_9] [i_10]) ? (-2896131662880744913LL) : (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_9] [i_10] [(signed char)20])))));
                }
            }
            for (long long int i_20 = 0; i_20 < 21; i_20 += 2) 
            {
                var_52 = ((/* implicit */_Bool) max((var_52), (((/* implicit */_Bool) ((arr_25 [i_5] [i_9 - 2]) * (arr_25 [i_9] [i_9 - 1]))))));
                var_53 = ((/* implicit */unsigned int) (-(var_10)));
                var_54 = ((/* implicit */short) (-(((15496443989821940210ULL) >> (((arr_37 [i_5] [i_20]) - (2807908677U)))))));
            }
            for (unsigned int i_21 = 2; i_21 < 20; i_21 += 3) 
            {
                var_55 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [i_5] [i_5] [i_5] [i_21])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2157655695U)) ? (((/* implicit */unsigned int) var_10)) : (4294967285U)))) : (arr_34 [i_5] [i_9 - 2] [i_21] [i_21 + 1])));
                /* LoopSeq 1 */
                for (long long int i_22 = 1; i_22 < 17; i_22 += 4) 
                {
                    var_56 = ((/* implicit */int) (unsigned char)255);
                    /* LoopSeq 1 */
                    for (long long int i_23 = 0; i_23 < 21; i_23 += 2) 
                    {
                        arr_73 [i_5] [i_9] [i_9] [i_22] [i_23] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                        var_57 = ((/* implicit */long long int) arr_30 [i_23] [i_9 - 3] [i_21] [i_21]);
                    }
                    arr_74 [i_9] [i_9] [i_21] [i_9] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                    var_58 = ((/* implicit */unsigned char) var_1);
                }
                var_59 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_72 [i_21 - 2] [i_9] [i_9 + 1] [i_9] [i_9 - 2]))));
            }
            for (unsigned char i_24 = 0; i_24 < 21; i_24 += 2) 
            {
                var_60 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
                arr_77 [i_9] = ((/* implicit */unsigned int) var_1);
            }
            var_61 = ((/* implicit */unsigned int) arr_33 [i_5]);
            /* LoopSeq 2 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                arr_80 [i_5] [i_9] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 0U))) ? (arr_39 [i_9 - 3] [i_9] [i_9 - 3] [i_9] [i_9] [i_25]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)23))))));
                arr_81 [i_5] [i_5] [20ULL] [i_9] = ((/* implicit */_Bool) ((int) ((var_14) / (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_5] [i_5] [i_5] [i_5] [i_9] [i_5]))))));
            }
            for (long long int i_26 = 1; i_26 < 19; i_26 += 2) 
            {
                var_62 = ((/* implicit */unsigned long long int) (-2147483647 - 1));
                var_63 = ((/* implicit */unsigned long long int) ((arr_65 [i_5] [i_9 - 2]) <= (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_5] [i_5] [i_5] [i_9 - 3] [i_9])))));
            }
            var_64 = ((/* implicit */signed char) min((var_64), (((/* implicit */signed char) arr_76 [i_5] [i_5] [i_5] [i_9]))));
        }
    }
    var_65 |= ((unsigned char) 18446744073709551609ULL);
    /* LoopSeq 1 */
    for (int i_27 = 0; i_27 < 18; i_27 += 1) 
    {
        arr_86 [i_27] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_57 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27])) ? (min((((/* implicit */unsigned long long int) 2136543401U)), (arr_28 [i_27]))) : (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)11)))));
        arr_87 [i_27] = ((((/* implicit */_Bool) -2882194427220426386LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2222991917693531807LL));
        /* LoopSeq 1 */
        for (unsigned short i_28 = 1; i_28 < 15; i_28 += 2) 
        {
            var_66 = ((/* implicit */signed char) max((max((min((((/* implicit */unsigned long long int) arr_55 [i_27] [(unsigned short)15] [i_27] [i_27] [i_27])), (17776124634031683955ULL))), (((/* implicit */unsigned long long int) min((arr_23 [i_27]), (((/* implicit */unsigned short) var_1))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_30 [i_28 + 3] [i_27] [i_28 + 3] [i_28 - 1])))))));
            var_67 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
            var_68 = ((/* implicit */unsigned int) arr_88 [i_27] [i_27]);
        }
        var_69 |= ((/* implicit */_Bool) ((((((/* implicit */long long int) var_8)) | (arr_65 [i_27] [i_27]))) & (((var_16) ? (arr_65 [i_27] [i_27]) : (((/* implicit */long long int) arr_88 [i_27] [14]))))));
    }
}

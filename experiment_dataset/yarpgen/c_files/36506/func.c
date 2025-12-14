/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36506
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
    var_12 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned int) ((((arr_2 [1U]) + (2147483647))) >> (((((((/* implicit */int) (unsigned char)1)) + (((/* implicit */int) ((unsigned char) (short)5345))))) - (220)))));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-14909)), (0ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8ULL))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)14906)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (short)-2682))));
                                var_16 = ((/* implicit */short) (((((~(((/* implicit */int) (short)14899)))) + (2147483647))) << (((((((/* implicit */unsigned int) arr_11 [i_4 - 1] [i_4] [(signed char)1] [i_4] [i_4 - 1])) | (127U))) - (1864899711U)))));
                                var_17 = ((/* implicit */int) max((((unsigned char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) -576460752303423488LL)) : (arr_3 [(unsigned short)10] [i_1] [i_2])))), (((/* implicit */unsigned char) var_8))));
                                var_18 = ((/* implicit */unsigned char) max((485355408), ((+(max((-485355409), (((/* implicit */int) (signed char)-88))))))));
                            }
                        } 
                    } 
                    var_19 |= ((/* implicit */unsigned int) var_4);
                }
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            for (unsigned char i_7 = 2; i_7 < 19; i_7 += 1) 
            {
                for (int i_8 = 2; i_8 < 18; i_8 += 2) 
                {
                    {
                        arr_25 [(unsigned char)11] [15] [i_7] [(short)11] [15] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-31699)))))) < (var_1)));
                        arr_26 [2] [16] = ((/* implicit */long long int) min((max((arr_11 [(unsigned short)18] [(unsigned short)18] [(short)11] [i_8 + 1] [(signed char)3]), (arr_11 [i_5] [19] [(unsigned char)3] [i_8 + 1] [8ULL]))), (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-31699)) : (((/* implicit */int) (short)32748)))), (((/* implicit */int) (short)-26603))))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1)))))))));
                        arr_27 [i_5] [i_5] [7LL] [17ULL] = ((/* implicit */unsigned char) ((arr_20 [i_5]) << (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (short)-31692)), (576460752303423492LL)))))))));
                        arr_28 [i_5] [i_5] [(signed char)15] [(short)13] = max((((/* implicit */int) max((arr_5 [i_5]), (arr_5 [i_5])))), (max((134217720), ((-2147483647 - 1)))));
                    }
                } 
            } 
        } 
        var_21 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184))) <= (18446744073709551593ULL)));
        var_22 = ((/* implicit */unsigned int) arr_12 [i_5] [i_5]);
        var_23 = ((/* implicit */unsigned short) min((var_23), (arr_24 [i_5])));
    }
    /* LoopNest 2 */
    for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
    {
        for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
                {
                    var_24 |= ((((/* implicit */int) ((-576460752303423492LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))) * (((/* implicit */int) (_Bool)0)));
                    arr_40 [(_Bool)1] [i_10] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6888700867859949384LL)) && (((/* implicit */_Bool) (short)31690))));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14910)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (arr_14 [i_9]))))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 3) 
                    {
                        var_26 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (unsigned short)65513)))));
                        var_27 = ((/* implicit */unsigned char) ((((-576460752303423484LL) + (9223372036854775807LL))) << (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (576460752303423510LL)))));
                        var_28 *= ((/* implicit */signed char) arr_10 [8] [i_10] [(signed char)7] [i_10]);
                        var_29 = ((/* implicit */unsigned short) -134217722);
                    }
                    for (int i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        arr_49 [i_14] [i_14] [15] [i_14] = ((/* implicit */int) 617282548U);
                        arr_50 [i_9] [i_9] [i_9] [(short)3] [i_12] [i_14] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-14938)) - (((/* implicit */int) (short)14909)))))));
                        var_30 = ((/* implicit */int) arr_45 [i_14] [i_12] [i_12] [5] [i_9] [i_9]);
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_54 [i_9] [i_10] [(unsigned short)5] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((134217718) | (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) -5350200874140599131LL)) ? (-576460752303423514LL) : (((/* implicit */long long int) 1460344988))))));
                        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) arr_10 [10] [i_10] [i_10] [7LL]))));
                        arr_55 [i_15] [i_15] = ((/* implicit */unsigned long long int) arr_23 [i_9] [(short)19] [15U] [15U] [i_9] [(short)19]);
                    }
                    for (unsigned short i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        arr_58 [i_9] [i_9] [4] [i_9] = ((/* implicit */unsigned long long int) ((unsigned short) arr_46 [i_9] [i_12] [i_9] [(short)10] [i_9] [i_16]));
                        var_32 ^= ((/* implicit */long long int) (signed char)-74);
                        arr_59 [8] [(short)15] [7] [1] [(unsigned char)13] = ((/* implicit */unsigned short) ((short) ((short) (short)-14906)));
                    }
                }
                for (int i_17 = 0; i_17 < 18; i_17 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_18 = 0; i_18 < 18; i_18 += 4) 
                    {
                        for (signed char i_19 = 3; i_19 < 16; i_19 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */int) (unsigned char)128);
                                var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_52 [i_19 - 1] [i_19 - 3])))), ((-(((/* implicit */int) arr_52 [i_19 - 1] [i_19 + 2])))))))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */short) (+(((/* implicit */int) min(((unsigned short)41690), (((/* implicit */unsigned short) (short)14909)))))));
                    var_36 += ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)253)), (min((((/* implicit */int) ((((/* implicit */_Bool) arr_63 [i_9] [i_9])) && (((/* implicit */_Bool) -1668229863781875383LL))))), (min((((/* implicit */int) var_11)), (134217718)))))));
                    arr_69 [i_9] [i_9] [16ULL] = ((/* implicit */unsigned char) ((int) (~(((/* implicit */int) (_Bool)1)))));
                    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65530)) - (((/* implicit */int) arr_39 [i_9]))));
                }
                /* LoopNest 2 */
                for (short i_20 = 0; i_20 < 18; i_20 += 4) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 3) 
                    {
                        {
                            var_38 = ((/* implicit */short) 134217718);
                            var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) -3441660236882592060LL))));
                            var_40 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) max(((short)0), (((/* implicit */short) (unsigned char)253))))) + (((/* implicit */int) (unsigned short)5))))), (-3441660236882592060LL)));
                            var_41 += arr_38 [i_21] [i_21] [(unsigned short)14];
                        }
                    } 
                } 
            }
        } 
    } 
    var_42 = max((((/* implicit */int) (unsigned short)23192)), (((((/* implicit */_Bool) ((short) (unsigned short)65535))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) var_6)))));
}

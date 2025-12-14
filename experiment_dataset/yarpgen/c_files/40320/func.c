/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40320
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
    var_20 = var_15;
    var_21 &= var_15;
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */int) ((8966658861276389387ULL) >> (((arr_0 [i_0]) - (18080099769730735398ULL)))))) : (((/* implicit */int) ((8966658861276389387ULL) >> (((((arr_0 [i_0]) - (18080099769730735398ULL))) - (5926093824675973053ULL))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_22 = ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 556743412)) : (4093852848486407904ULL))))) / (4093852848486407910ULL));
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) 14352891225223143706ULL))));
                            }
                        } 
                    } 
                    var_24 ^= ((/* implicit */unsigned long long int) (~(677146565)));
                }
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */int) var_6);
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        arr_19 [i_5] = arr_3 [i_5] [i_5] [i_5];
        var_25 = ((/* implicit */int) ((arr_13 [20ULL] [i_5] [i_5] [i_5] [i_5]) << (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_5])) || (((/* implicit */_Bool) arr_7 [8])))))));
        arr_20 [i_5] = ((/* implicit */unsigned long long int) ((14352891225223143701ULL) >= (((((/* implicit */_Bool) 820479064)) ? (((/* implicit */unsigned long long int) -1274001300)) : (arr_4 [i_5] [6ULL])))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 21; i_6 += 3) 
    {
        var_26 = ((int) 490771405914338098ULL);
        /* LoopSeq 4 */
        for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 1) 
        {
            arr_27 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551599ULL)) ? (-2147483626) : (1990750364)))) && (((/* implicit */_Bool) var_13))));
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 19; i_8 += 2) 
            {
                for (int i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    {
                        var_27 = ((/* implicit */int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) 224))));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), ((+(((13272941422456691099ULL) / (5173802651252860517ULL)))))));
                        var_29 = ((/* implicit */unsigned long long int) var_13);
                        arr_33 [i_9] [i_7 + 2] [i_7 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_7 - 1] [i_8 - 2] [i_6 + 1])) && (((/* implicit */_Bool) ((int) arr_26 [i_6 - 1])))));
                        var_30 *= ((/* implicit */int) ((2147483625) >= (-1675266395)));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 20; i_10 += 3) 
            {
                for (int i_11 = 2; i_11 < 21; i_11 += 1) 
                {
                    for (int i_12 = 1; i_12 < 20; i_12 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) 1171113994517226920ULL)) ? (15ULL) : (5173802651252860538ULL)));
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) -326596435)) ? (arr_34 [i_7 + 2] [i_10] [i_11 - 2] [i_12 + 1]) : (((/* implicit */unsigned long long int) 820479064))));
                            arr_44 [i_6] [i_6] [i_10] [i_12 + 2] = ((/* implicit */unsigned long long int) ((int) 1171113994517226922ULL));
                            arr_45 [i_6] [19ULL] [i_10] [i_10] [i_12] [14ULL] [i_6] = ((/* implicit */int) (+((~(var_6)))));
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (1785311611) : (2147483608)))) < (var_5)));
                        }
                    } 
                } 
            } 
        }
        for (int i_13 = 0; i_13 < 22; i_13 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 2; i_14 < 19; i_14 += 3) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 3) 
                {
                    {
                        arr_56 [i_14] [i_6] [i_13] [i_14] [16ULL] [i_15] = (i_14 % 2 == zero) ? (((/* implicit */unsigned long long int) ((arr_38 [i_14] [i_13]) >> (((((((/* implicit */unsigned long long int) -565008633)) * (4093852848486407915ULL))) - (14667455024728597844ULL)))))) : (((/* implicit */unsigned long long int) ((((arr_38 [i_14] [i_13]) + (2147483647))) >> (((((((/* implicit */unsigned long long int) -565008633)) * (4093852848486407915ULL))) - (14667455024728597844ULL))))));
                        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_47 [i_6] [i_6 + 1])) >= (9480085212433162229ULL))))));
                        var_35 = ((/* implicit */int) arr_32 [i_6 - 1] [i_13] [i_14] [i_14]);
                    }
                } 
            } 
            var_36 = ((/* implicit */int) 2189271919624730249ULL);
        }
        for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 2) /* same iter space */
        {
            var_37 = ((/* implicit */int) ((((/* implicit */_Bool) (+(140737487306752ULL)))) ? (arr_49 [i_6 + 1] [i_6 - 1] [i_6 - 1]) : (4294967292ULL)));
            arr_59 [i_16] = ((/* implicit */int) 5173802651252860517ULL);
            var_38 = ((/* implicit */int) max((var_38), (((((/* implicit */_Bool) 565008632)) ? (-215069025) : ((-2147483647 - 1))))));
        }
        for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 2) /* same iter space */
        {
            var_39 = ((/* implicit */int) ((14495095095141131153ULL) >= (6ULL)));
            /* LoopSeq 4 */
            for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                var_40 = ((/* implicit */unsigned long long int) arr_40 [i_17] [i_17] [4] [i_17] [i_17]);
                var_41 = ((/* implicit */int) 18331176688011763946ULL);
                arr_64 [i_6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) >= (1171113994517226922ULL)));
                arr_65 [i_18] = var_5;
            }
            for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 3) 
            {
                var_42 = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_6 + 1] [i_6 + 1] [i_6 - 1])) ? (143974450587500544ULL) : (((((/* implicit */_Bool) 4093852848486407914ULL)) ? (arr_26 [i_6]) : (36028797018963967ULL)))));
                arr_69 [i_6] [i_6] [i_19] = ((/* implicit */unsigned long long int) ((arr_26 [i_6 - 1]) < (arr_26 [i_6 - 1])));
            }
            for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 4) 
            {
                var_43 ^= ((/* implicit */int) var_11);
                arr_74 [i_6 - 1] [i_17] [i_17] [i_20] = ((/* implicit */unsigned long long int) 1536238846);
                /* LoopSeq 3 */
                for (unsigned long long int i_21 = 2; i_21 < 18; i_21 += 1) 
                {
                    var_44 = 444106427;
                    arr_79 [9ULL] [i_17] [i_21] [i_21] = ((/* implicit */int) ((((/* implicit */_Bool) -2108719167)) ? (6218625254946048416ULL) : (((/* implicit */unsigned long long int) -127518093))));
                    arr_80 [i_21] [i_20] [i_17] [9ULL] [i_6] [i_21] = ((/* implicit */int) ((((/* implicit */unsigned long long int) -88828853)) | (arr_23 [i_6 + 1])));
                }
                for (int i_22 = 2; i_22 < 19; i_22 += 4) 
                {
                    var_45 = ((/* implicit */int) arr_67 [i_6 - 1] [i_6 - 1] [i_20] [i_22 - 2]);
                    arr_84 [i_6] [3] [i_6] [i_6] = 4226190114468548039ULL;
                }
                for (unsigned long long int i_23 = 2; i_23 < 21; i_23 += 3) 
                {
                    /* LoopSeq 2 */
                    for (int i_24 = 0; i_24 < 22; i_24 += 3) 
                    {
                        arr_90 [15] [i_17] [15] [i_23] [15] = (+(((/* implicit */int) ((var_1) < (((/* implicit */unsigned long long int) -2147483621))))));
                        var_46 -= ((/* implicit */unsigned long long int) (+(2147483632)));
                        var_47 = (~(arr_82 [i_6 + 1] [i_6 + 1] [i_23 - 1] [i_6 + 1] [i_24]));
                    }
                    for (unsigned long long int i_25 = 0; i_25 < 22; i_25 += 1) 
                    {
                        var_48 = ((/* implicit */unsigned long long int) ((arr_25 [i_6 + 1] [i_6 + 1] [i_23 - 1]) < (arr_25 [i_6 + 1] [i_6 + 1] [i_23 - 1])));
                        var_49 = ((/* implicit */int) ((((/* implicit */_Bool) 1207134097917037969ULL)) || (((/* implicit */_Bool) 4352247814385816225ULL))));
                    }
                    var_50 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) % (arr_83 [i_23])));
                }
                arr_94 [i_6 - 1] = ((/* implicit */unsigned long long int) ((var_11) != (((/* implicit */unsigned long long int) ((int) arr_63 [i_6 + 1] [i_17] [i_20])))));
            }
            for (int i_26 = 2; i_26 < 20; i_26 += 4) 
            {
                var_51 = ((/* implicit */unsigned long long int) (+(-1935986079)));
                var_52 = ((/* implicit */int) (~(arr_87 [i_6 - 1] [i_6 - 1] [i_26] [i_6 - 1])));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_27 = 0; i_27 < 22; i_27 += 1) 
            {
                for (unsigned long long int i_28 = 3; i_28 < 20; i_28 += 1) 
                {
                    {
                        var_53 ^= ((/* implicit */int) ((unsigned long long int) arr_99 [i_6 + 1] [i_17] [i_28 - 2]));
                        var_54 = ((/* implicit */int) 8953389666784858666ULL);
                        var_55 = 926252741465252505ULL;
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_29 = 3; i_29 < 20; i_29 += 2) 
            {
                var_56 = ((/* implicit */unsigned long long int) -1536238862);
                /* LoopNest 2 */
                for (int i_30 = 2; i_30 < 21; i_30 += 4) 
                {
                    for (unsigned long long int i_31 = 4; i_31 < 20; i_31 += 4) 
                    {
                        {
                            arr_112 [i_6] [i_17] [i_29 - 3] [i_17] [i_17] = ((unsigned long long int) 3581858073100915749ULL);
                            arr_113 [i_29] [i_30] [i_31] = ((/* implicit */unsigned long long int) ((int) var_12));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_32 = 2; i_32 < 21; i_32 += 3) 
                {
                    for (int i_33 = 0; i_33 < 22; i_33 += 1) 
                    {
                        {
                            var_57 = ((/* implicit */int) min((var_57), (((/* implicit */int) ((arr_102 [i_6 + 1] [7] [i_29 - 1] [i_32] [i_29 - 1] [i_29]) >= (var_7))))));
                            var_58 = var_1;
                            arr_119 [i_6] [i_6] [i_29 - 1] [3ULL] [i_33] = ((/* implicit */int) arr_105 [i_6 + 1] [i_6] [i_6 + 1] [i_6]);
                        }
                    } 
                } 
            }
            arr_120 [i_6 - 1] [i_6 - 1] = ((var_12) ^ (arr_58 [i_6] [i_6]));
        }
        var_59 = ((/* implicit */unsigned long long int) min((var_59), (arr_42 [i_6] [i_6 + 1] [18] [i_6 + 1] [i_6])));
    }
}

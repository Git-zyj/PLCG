/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237122
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (_Bool)1);
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_5 [i_1] [i_0] = ((arr_3 [i_1] [i_0]) ? (-5685819189098270448LL) : (var_4));
            var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) arr_3 [i_0] [i_1]))));
            var_12 = ((/* implicit */_Bool) 9007199120523264LL);
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                var_13 ^= ((/* implicit */unsigned long long int) (_Bool)1);
                arr_8 [i_0] [i_0] [i_2] [i_0] = var_8;
            }
            arr_9 [i_0] [i_0] = ((/* implicit */long long int) var_0);
        }
        for (int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 2; i_4 < 11; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    {
                        arr_18 [i_0] [i_0] [i_3] [i_3] [i_5] = (((_Bool)1) ? (max((arr_7 [i_0] [i_4 + 1] [i_4]), (arr_7 [i_0] [i_4 + 1] [i_4]))) : (((/* implicit */unsigned long long int) max((arr_16 [i_0] [i_4 - 2]), (arr_16 [i_3] [i_4 + 1])))));
                        arr_19 [6] [i_3] [i_4] = max((max((((((/* implicit */_Bool) 6LL)) ? (133955584ULL) : (((/* implicit */unsigned long long int) 22LL)))), (((/* implicit */unsigned long long int) arr_16 [(_Bool)1] [i_0])))), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))));
                        var_14 = ((/* implicit */int) ((max((0LL), (((/* implicit */long long int) (_Bool)1)))) >> (((/* implicit */int) var_10))));
                        arr_20 [i_0] [i_3] [i_3] [i_0] [i_5] = var_8;
                    }
                } 
            } 
            arr_21 [i_0] [i_0] [i_3] = ((/* implicit */int) max((258048LL), (((/* implicit */long long int) var_3))));
        }
        arr_22 [i_0] |= ((/* implicit */long long int) ((var_6) < (arr_4 [i_0])));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
    {
        arr_25 [0LL] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (7LL) : (var_5)));
        var_15 = arr_24 [i_6] [i_6];
    }
    for (int i_7 = 0; i_7 < 14; i_7 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
        {
            arr_31 [i_8] [11LL] |= ((/* implicit */int) var_8);
            arr_32 [i_7] [i_8] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_7] [i_7] [i_7]))) > (-2627813843589180599LL)))) : (-2147483642));
            arr_33 [i_7] = ((/* implicit */long long int) (~((-(18446744073709551615ULL)))));
        }
        for (long long int i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
        {
            arr_37 [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_27 [i_9] [i_7]), (arr_27 [i_9] [i_9])))) ? (max((arr_27 [i_7] [i_7]), (arr_27 [i_7] [i_9]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 6662892981099069470ULL)) ? (var_1) : (133955584))))));
            var_16 ^= ((/* implicit */_Bool) var_1);
        }
        /* vectorizable */
        for (long long int i_10 = 3; i_10 < 12; i_10 += 4) 
        {
            arr_42 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_10 - 1])) ? (arr_39 [i_10 - 1]) : (arr_39 [i_10 - 2])));
            arr_43 [i_7] [i_10 + 1] |= ((/* implicit */_Bool) var_9);
            var_17 ^= ((/* implicit */long long int) (+(1577085844)));
        }
        /* LoopSeq 1 */
        for (int i_11 = 3; i_11 < 13; i_11 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_12 = 2; i_12 < 13; i_12 += 4) 
            {
                var_18 = ((/* implicit */_Bool) -5172047949925606455LL);
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (arr_44 [i_11 - 1])));
            }
            arr_48 [i_7] [2ULL] [i_11] = ((/* implicit */int) max(((~(max((((/* implicit */long long int) arr_36 [(_Bool)1] [(_Bool)1])), (31744LL))))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
        }
        var_20 = ((/* implicit */long long int) min((var_20), (var_6)));
        arr_49 [i_7] [i_7] = ((/* implicit */int) 10LL);
        /* LoopSeq 1 */
        for (long long int i_13 = 0; i_13 < 14; i_13 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 4) 
            {
                var_21 = var_10;
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max((max((arr_30 [i_7]), (((/* implicit */unsigned long long int) arr_27 [i_7] [i_13])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_36 [i_14] [i_13]))))))))));
            }
            for (long long int i_15 = 0; i_15 < 14; i_15 += 3) 
            {
                var_23 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_47 [i_7])) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (var_6))), (((/* implicit */long long int) (((+(((/* implicit */int) arr_26 [i_7] [i_13])))) * ((+(0))))))));
                var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_13] [i_15]))) : (15321219736326271270ULL)));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_16 = 1; i_16 < 13; i_16 += 3) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (long long int i_17 = 0; i_17 < 14; i_17 += 4) /* same iter space */
                    {
                        arr_62 [9ULL] [i_13] [i_16] [i_13] [i_13] = var_9;
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((unsigned long long int) -8LL)))));
                    }
                    for (long long int i_18 = 0; i_18 < 14; i_18 += 4) /* same iter space */
                    {
                        arr_65 [0ULL] [i_16] [i_16] [i_15] [i_16] [i_7] [i_7] = ((/* implicit */int) (_Bool)1);
                        var_26 = ((/* implicit */_Bool) 9223372036854775807LL);
                        arr_66 [i_7] [i_13] [i_13] [i_15] [i_7] [i_18] [i_16] = ((4611686018410610688LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                    }
                    for (long long int i_19 = 0; i_19 < 14; i_19 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) var_3))));
                        arr_70 [i_7] [i_13] [i_13] [i_15] [i_16] [(_Bool)1] [i_19] = ((/* implicit */unsigned long long int) 8796093022207LL);
                        arr_71 [i_16] [i_16] [i_15] [i_16 - 1] [i_16 - 1] [i_16] [i_13] = ((/* implicit */int) arr_24 [i_7] [i_16]);
                    }
                    for (long long int i_20 = 2; i_20 < 13; i_20 += 1) 
                    {
                        arr_74 [i_16] = ((/* implicit */int) arr_67 [i_7] [(_Bool)1] [i_15]);
                        arr_75 [i_7] [8LL] [i_15] [i_16] [i_20] [2ULL] |= var_0;
                        arr_76 [i_7] [i_7] [i_7] [i_7] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */long long int) arr_46 [i_16] [i_20]))));
                        arr_77 [3LL] [i_13] [i_13] [i_13] [i_16] [i_13] = ((/* implicit */unsigned long long int) arr_26 [i_7] [i_7]);
                    }
                    /* LoopSeq 2 */
                    for (long long int i_21 = 0; i_21 < 14; i_21 += 4) /* same iter space */
                    {
                        arr_80 [i_7] [i_7] [i_16] [i_16] [i_21] = ((/* implicit */int) var_7);
                        var_28 = ((/* implicit */long long int) max((var_28), (((((var_8) + (9223372036854775807LL))) >> (((arr_56 [12ULL] [i_15] [i_13] [12ULL]) - (17965690663704527207ULL)))))));
                    }
                    for (long long int i_22 = 0; i_22 < 14; i_22 += 4) /* same iter space */
                    {
                        arr_83 [i_16] [i_13] [i_13] = ((/* implicit */_Bool) var_1);
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (-9223372036854775807LL - 1LL)))));
                        arr_84 [i_7] [i_15] [i_16] [i_15] [i_22] [i_15] [i_15] = ((((/* implicit */_Bool) var_9)) ? (arr_79 [i_7] [i_13] [i_15] [i_16] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                    }
                    var_30 ^= (-(27));
                }
                for (unsigned long long int i_23 = 1; i_23 < 13; i_23 += 3) /* same iter space */
                {
                    arr_88 [i_7] [i_13] [i_15] [i_23] = ((/* implicit */unsigned long long int) arr_24 [(_Bool)0] [12LL]);
                    var_31 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_30 [i_23]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (var_3) : (max((22), (((/* implicit */int) (_Bool)1))))))) ? (((max((var_5), (var_7))) / (max((((/* implicit */long long int) (_Bool)1)), (var_5))))) : (max((-3772496390499836459LL), (((-135727333106859245LL) ^ (((/* implicit */long long int) -1))))))));
                    arr_89 [i_7] = var_7;
                }
                for (int i_24 = 0; i_24 < 14; i_24 += 1) 
                {
                    arr_92 [i_7] [i_7] [i_7] [2] [i_15] [i_24] |= var_8;
                    arr_93 [i_24] [i_15] [i_7] [i_24] [i_24] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3437844021846284735LL)) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_85 [i_24] [i_15] [i_13])))))) : (-1LL)))) || (((/* implicit */_Bool) var_0))));
                    arr_94 [i_7] [i_13] [i_24] = max(((+(((((/* implicit */_Bool) -4727579157925438075LL)) ? (var_9) : (((/* implicit */unsigned long long int) 25LL)))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_46 [i_13] [i_15])), (arr_35 [i_13] [i_24])))));
                }
                arr_95 [i_7] [i_13] [i_15] [3] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_68 [i_7] [i_13] [0LL] [i_13] [i_13] [8LL] [0LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15805045318178441056ULL))) >= (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_56 [i_7] [i_7] [i_13] [i_15])))))), (max((var_8), (0LL)))));
            }
            var_32 = ((/* implicit */unsigned long long int) min((var_32), (max((((/* implicit */unsigned long long int) -3122626779411353837LL)), (((arr_29 [i_7] [i_13] [i_7]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_7] [i_7] [i_7]))) : (arr_38 [i_13])))))));
            var_33 = ((/* implicit */long long int) min((var_33), (((((/* implicit */_Bool) ((((((((/* implicit */long long int) (-2147483647 - 1))) & (arr_72 [2LL] [i_7] [i_7] [i_13] [i_13] [i_13]))) + (9223372036854775807LL))) >> (((arr_87 [i_13] [i_7] [i_7] [i_7]) - (11865096463627429808ULL)))))) ? (((/* implicit */long long int) var_3)) : (max((((/* implicit */long long int) ((arr_73 [i_7] [6LL] [i_7] [i_7] [i_7]) | (var_1)))), (((((/* implicit */long long int) var_1)) / (2733614138507520333LL)))))))));
            arr_96 [i_7] [i_7] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((var_5) ^ (var_8)))))) ? (27) : (((/* implicit */int) ((arr_68 [i_7] [i_13] [i_7] [i_7] [i_13] [8] [(_Bool)1]) == (((/* implicit */long long int) var_1)))))));
            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) var_3))));
        }
    }
    var_35 = ((/* implicit */int) 1727114690475008090LL);
}

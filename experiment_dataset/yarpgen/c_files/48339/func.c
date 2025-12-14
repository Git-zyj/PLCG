/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48339
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) ((short) ((unsigned short) (_Bool)1)));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_18 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) ((unsigned long long int) var_15))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((_Bool) ((unsigned long long int) ((unsigned long long int) var_1)))))));
                                var_20 -= ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) ((unsigned long long int) var_0))));
                                arr_13 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */short) ((_Bool) ((unsigned short) ((_Bool) 15981407142749474842ULL))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) ((_Bool) ((unsigned long long int) ((unsigned short) (_Bool)1))));
                    arr_14 [i_0] [18ULL] [18ULL] [(short)18] = ((/* implicit */_Bool) ((short) ((_Bool) ((_Bool) 70368744177600ULL))));
                }
                arr_15 [i_1] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) 18446673704965374008ULL)));
                var_22 = ((/* implicit */_Bool) ((short) ((unsigned short) ((_Bool) var_13))));
            }
        } 
    } 
    var_23 = ((short) ((unsigned short) ((short) 8372224ULL)));
    /* LoopSeq 3 */
    for (short i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) ((short) (unsigned short)28149)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_25 [i_8] [i_8] [i_8] [i_8] [i_6] [i_7] = ((/* implicit */_Bool) ((short) ((short) ((unsigned long long int) var_5))));
                        var_25 = ((/* implicit */unsigned short) ((short) ((unsigned short) (_Bool)1)));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) ((unsigned long long int) var_13)))))));
        arr_26 [i_5] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) ((unsigned short) (unsigned short)37404))));
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        var_27 = ((/* implicit */short) ((unsigned short) ((unsigned short) var_3)));
        /* LoopSeq 3 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopNest 3 */
            for (short i_11 = 3; i_11 < 9; i_11 += 1) 
            {
                for (unsigned short i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    for (short i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) ((unsigned short) ((unsigned short) 18446744073701179391ULL)));
                            var_29 = ((/* implicit */_Bool) ((unsigned short) ((_Bool) var_10)));
                            arr_39 [i_11] [i_12] [i_11] [i_10] [i_11] = ((/* implicit */short) ((unsigned long long int) ((short) 14645144546062534332ULL)));
                        }
                    } 
                } 
            } 
            arr_40 [i_9] [i_9] = ((/* implicit */short) ((unsigned long long int) ((unsigned short) 2761499959678259824ULL)));
        }
        for (short i_14 = 2; i_14 < 7; i_14 += 2) 
        {
            /* LoopNest 2 */
            for (short i_15 = 1; i_15 < 10; i_15 += 4) 
            {
                for (short i_16 = 0; i_16 < 11; i_16 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_50 [i_14] [i_14] [i_15] [i_15] [i_17] [i_15] &= ((/* implicit */unsigned long long int) ((_Bool) ((short) arr_2 [i_16] [i_14 + 4] [i_9])));
                            arr_51 [i_9] [i_9] [i_14] [i_16] [i_14] = ((short) ((_Bool) arr_34 [i_17] [i_16] [i_9]));
                        }
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((unsigned short) ((short) (short)-27085))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_18 = 2; i_18 < 10; i_18 += 3) 
            {
                arr_54 [i_18] [i_14] [i_18] [i_18] = ((/* implicit */unsigned short) ((_Bool) ((_Bool) 15685244114031291791ULL)));
                /* LoopSeq 2 */
                for (unsigned long long int i_19 = 4; i_19 < 8; i_19 += 2) 
                {
                    arr_58 [i_9] [i_9] [i_9] [i_9] = ((unsigned long long int) ((unsigned short) 15685244114031291791ULL));
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                    {
                        arr_62 [i_9] [i_14] [i_14 - 1] [i_18] [i_19 - 4] [i_20 + 1] = ((/* implicit */_Bool) ((short) ((unsigned long long int) arr_6 [i_18] [i_18] [i_18] [i_14])));
                        arr_63 [i_9] [i_9] [i_9] [i_19] [i_20] [i_19] = ((/* implicit */unsigned short) ((short) ((unsigned short) arr_21 [i_14] [i_14] [i_19] [i_14])));
                        var_31 = ((unsigned long long int) ((unsigned short) (short)2955));
                        var_32 = ((/* implicit */unsigned short) ((short) ((unsigned short) arr_42 [(short)7] [(short)7] [(short)7])));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        arr_66 [i_9] [1ULL] [i_21] [i_9] [i_21] [1ULL] = ((/* implicit */short) ((unsigned long long int) ((short) var_11)));
                        arr_67 [i_21] [i_9] [i_19] [i_9] [i_14 + 3] [i_9] [i_21] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) 8372224ULL)));
                    }
                    for (short i_22 = 0; i_22 < 11; i_22 += 3) 
                    {
                        arr_71 [i_14] [i_14 + 2] [i_14] = ((/* implicit */short) ((unsigned long long int) ((unsigned short) 0ULL)));
                        var_33 = ((short) ((_Bool) 1732676717434899474ULL));
                    }
                    arr_72 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((_Bool) ((short) var_11)));
                }
                for (unsigned long long int i_23 = 2; i_23 < 9; i_23 += 4) 
                {
                    arr_76 [(_Bool)1] [i_18 - 1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) ((_Bool) ((unsigned short) arr_61 [i_23] [i_23 + 1] [(_Bool)1] [i_9] [i_9])));
                    arr_77 [i_23] [i_23 + 2] [i_23] [i_23 - 1] [i_23 - 1] = ((/* implicit */_Bool) ((short) (unsigned short)28771));
                }
            }
            for (short i_24 = 0; i_24 < 11; i_24 += 1) 
            {
                arr_81 [(unsigned short)7] [i_24] [(short)10] [(unsigned short)7] = ((/* implicit */unsigned short) ((short) ((unsigned long long int) 14526132487707372432ULL)));
                var_34 = ((unsigned short) ((_Bool) (_Bool)0));
            }
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_26 = 0; i_26 < 11; i_26 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_27 = 0; i_27 < 11; i_27 += 3) 
                {
                    for (unsigned short i_28 = 0; i_28 < 11; i_28 += 4) 
                    {
                        {
                            var_35 -= ((/* implicit */unsigned long long int) ((unsigned short) ((short) arr_31 [i_9])));
                            arr_94 [i_9] [(short)10] [i_26] [i_26] [i_26] = ((/* implicit */short) ((_Bool) 5729599666505837458ULL));
                            var_36 = ((/* implicit */short) ((unsigned long long int) ((unsigned long long int) var_10)));
                        }
                    } 
                } 
                arr_95 [i_9] [(short)0] [i_26] = ((/* implicit */short) ((unsigned long long int) ((unsigned short) arr_60 [i_26] [(_Bool)1] [i_26] [(_Bool)1] [i_25] [i_9])));
                var_37 = ((/* implicit */_Bool) max((var_37), (((_Bool) ((_Bool) 8372240ULL)))));
                var_38 -= ((/* implicit */_Bool) ((unsigned short) ((unsigned short) (short)31569)));
            }
            arr_96 [i_9] [i_25] [i_25] = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) 15685244114031291793ULL)));
        }
    }
    for (short i_29 = 0; i_29 < 22; i_29 += 2) 
    {
        arr_99 [i_29] = ((short) ((short) ((short) 1732676717434899476ULL)));
        arr_100 [i_29] = ((/* implicit */_Bool) ((unsigned short) ((_Bool) ((short) 8006146058460081467ULL))));
    }
    var_39 = ((/* implicit */unsigned short) ((short) ((unsigned long long int) (unsigned short)59451)));
}

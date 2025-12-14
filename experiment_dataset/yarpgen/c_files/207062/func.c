/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207062
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
    var_16 = var_7;
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 8; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((int) arr_0 [i_0 + 1])) : (((/* implicit */int) min((((/* implicit */unsigned short) ((994317643) < (((/* implicit */int) (unsigned short)63202))))), (max(((unsigned short)65535), ((unsigned short)63225))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_7 [i_0 - 2] [i_1] [i_0 - 2] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) (unsigned short)2301)))), (((((/* implicit */int) arr_0 [i_0])) * (max((arr_4 [i_1] [i_1] [7]), (((/* implicit */int) (unsigned short)28907))))))));
            arr_8 [i_0] [i_1] [i_0 + 1] = ((/* implicit */unsigned long long int) max((arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 2]), (((((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])) < (arr_6 [i_0 + 2] [6] [8ULL]))) ? (((5491545230518846668LL) / (((/* implicit */long long int) arr_2 [i_0])))) : (((/* implicit */long long int) arr_4 [i_0 - 1] [i_0 - 2] [i_0]))))));
            var_18 = ((/* implicit */unsigned long long int) ((int) (unsigned short)36623));
        }
        var_19 = ((/* implicit */short) arr_2 [i_0]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((int) ((arr_1 [i_0] [i_2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13405))))));
            var_21 = ((((/* implicit */_Bool) (unsigned short)63216)) ? (1321633824) : (((/* implicit */int) (short)30160)));
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) || (((((/* implicit */_Bool) 16655608628068446144ULL)) || (((/* implicit */_Bool) (unsigned short)63700))))));
            /* LoopNest 2 */
            for (short i_3 = 2; i_3 < 9; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [2] [i_2]))));
                        var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 2])) > (arr_13 [i_0] [i_0] [i_0] [i_0 + 2])));
                    }
                } 
            } 
        }
        for (short i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_6 = 2; i_6 < 9; i_6 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_24 [i_7]) != (((/* implicit */int) (unsigned short)63225))))) >> (((((/* implicit */long long int) arr_24 [i_0])) / (arr_28 [i_5] [i_5] [(unsigned short)2] [i_7] [i_8] [i_7])))));
                        var_26 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_6])) || (((/* implicit */_Bool) (short)14547)))))) & (((((/* implicit */_Bool) (unsigned short)36628)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7])))))));
                        var_27 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_6 - 2])) && (((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_6 + 1] [i_6])))));
                        var_28 = ((/* implicit */long long int) -1743479892);
                    }
                    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned short) (((+(arr_24 [i_6]))) >> (((((unsigned long long int) arr_27 [i_0] [i_6] [i_9])) - (4837727394379037099ULL)))));
                        arr_33 [i_7] [i_7] [i_7] [i_6] [i_6] [i_7] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) arr_16 [i_9] [i_5])))));
                        var_30 = ((/* implicit */unsigned short) arr_6 [i_0] [i_5] [i_0]);
                    }
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        var_31 = ((arr_17 [i_0 - 1] [i_0] [9]) / (arr_17 [i_0 + 2] [i_0] [i_0 + 2]));
                        arr_37 [i_0] [i_7] [i_6 + 1] [i_6] [i_7] [i_10] = ((/* implicit */unsigned short) -1965147658789210576LL);
                        var_32 = ((/* implicit */unsigned short) (-((+(arr_16 [i_0 - 1] [i_10])))));
                        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) arr_34 [2ULL] [i_6] [i_6 - 1] [2ULL] [i_6 + 1]))));
                    }
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-29654)) ? (((((/* implicit */_Bool) -1229033507)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_7]))) : (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_7] [i_7]))))));
                    arr_38 [i_0 - 2] [i_0] [i_0] [i_0 + 2] [i_0] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [(unsigned short)9] [i_5] [i_6 - 2])) ? (((/* implicit */unsigned long long int) arr_18 [i_6 - 2])) : (arr_25 [i_0] [i_7] [4] [i_7] [i_7])));
                    var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) 1163594426471808108ULL))));
                }
                arr_39 [i_0] [i_5] [i_5] [i_6 - 2] = ((/* implicit */unsigned short) ((short) arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_0] [i_0]));
            }
            var_36 ^= max((((/* implicit */long long int) (-(max((arr_2 [i_0]), (((/* implicit */int) arr_21 [i_5]))))))), (min((((((/* implicit */_Bool) (unsigned short)63225)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2310))) : (8456987567454886902LL))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)4770))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                var_37 = ((((/* implicit */int) (unsigned short)63237)) & (((/* implicit */int) max(((unsigned short)18463), ((unsigned short)56457)))));
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    for (int i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        {
                            var_38 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((1650793412) / (((/* implicit */int) (short)19163))))) * ((((+(8185498737670946266LL))) * (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0] [i_5])) / (arr_30 [(unsigned short)8] [i_12] [i_11] [7] [7]))))))));
                            var_39 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_0 - 1] [i_0] [i_5] [i_11] [i_11] [i_13])) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)8457)))))))) * (max((max((arr_15 [i_11] [i_5] [i_11] [i_12]), (((/* implicit */int) arr_46 [i_0] [i_0] [i_11] [(unsigned short)8] [i_13])))), (arr_18 [i_0 - 1])))));
                            var_40 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)63221))));
                            var_41 = ((/* implicit */unsigned short) (+(min((((unsigned long long int) -2834220663149559273LL)), (((/* implicit */unsigned long long int) (unsigned short)21689))))));
                            arr_48 [i_13] [i_13] [i_11] [i_13] [(unsigned short)8] [5LL] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_11] [2LL] [i_13] [i_13] [5])) ? (arr_26 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_5])))))) && (((/* implicit */_Bool) max((arr_42 [(unsigned short)0] [(short)0] [i_0] [i_5] [(unsigned short)0] [i_0]), (((/* implicit */int) arr_46 [i_0 - 2] [i_5] [i_11] [6] [2ULL]))))))));
                        }
                    } 
                } 
            }
            var_42 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) arr_34 [i_5] [i_0] [i_0 + 2] [i_0] [i_0 + 2])) / (arr_16 [i_0] [i_5]))))) || (((/* implicit */_Bool) arr_5 [i_0] [i_0]))));
        }
        /* vectorizable */
        for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 2) 
        {
            arr_52 [i_14] [i_0] [i_0] = ((((/* implicit */_Bool) arr_27 [i_0 - 2] [i_0 - 2] [i_0 - 1])) ? (((/* implicit */long long int) arr_10 [i_0 + 2] [i_0 + 2])) : (arr_27 [i_0 - 2] [i_0 + 2] [i_0 + 1]));
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 2; i_15 < 9; i_15 += 2) 
            {
                for (long long int i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    {
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_42 [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 1] [i_15 - 2] [i_0 - 2])) ? (((((-8185498737670946267LL) + (9223372036854775807LL))) << (((((/* implicit */int) (short)8567)) - (8567))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21581)))));
                        arr_57 [i_15] [i_14] [i_15] = ((/* implicit */unsigned short) arr_30 [7] [i_14] [7] [7] [(unsigned short)1]);
                    }
                } 
            } 
        }
    }
    for (short i_17 = 2; i_17 < 8; i_17 += 2) /* same iter space */
    {
        arr_60 [i_17 + 1] [i_17 + 1] = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)21696)) / (((/* implicit */int) (unsigned short)4765))))), (((((/* implicit */_Bool) arr_9 [i_17])) ? (((/* implicit */unsigned long long int) arr_5 [i_17] [i_17 - 2])) : (arr_32 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])))))));
        /* LoopNest 2 */
        for (unsigned short i_18 = 1; i_18 < 9; i_18 += 4) 
        {
            for (unsigned short i_19 = 2; i_19 < 9; i_19 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_20 = 0; i_20 < 10; i_20 += 1) 
                    {
                        for (unsigned short i_21 = 0; i_21 < 10; i_21 += 2) 
                        {
                            {
                                arr_69 [i_17 + 2] [i_17] [i_17] [i_18] [i_17] = min((((((/* implicit */int) (unsigned short)63225)) ^ (1056998646))), (((/* implicit */int) ((unsigned short) arr_30 [i_17] [i_17 - 1] [i_19 - 1] [i_19] [i_17]))));
                                var_44 -= ((/* implicit */unsigned long long int) arr_15 [i_17] [i_17] [i_19] [i_21]);
                                arr_70 [i_18] = arr_13 [i_21] [i_21] [i_21] [i_21];
                            }
                        } 
                    } 
                    arr_71 [i_18] [i_18] [i_19 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)22632)) ? (-1) : (793975737)))) + (max((8185498737670946267LL), (((/* implicit */long long int) (unsigned short)4762))))))) || (((((((/* implicit */_Bool) 2373558479494918627ULL)) && (((/* implicit */_Bool) arr_32 [i_18] [i_18] [i_18] [i_18 + 1] [i_18] [i_18] [(unsigned short)1])))) || (((/* implicit */_Bool) arr_24 [i_17 + 2]))))));
                }
            } 
        } 
        arr_72 [i_17] = max((((/* implicit */unsigned long long int) max((arr_31 [5] [i_17 + 1] [i_17 - 2] [5] [i_17]), (arr_31 [i_17] [i_17] [i_17 + 2] [i_17] [i_17 - 2])))), (((((/* implicit */_Bool) 8185498737670946261LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60778))) : (6677224481586891772ULL))));
    }
}

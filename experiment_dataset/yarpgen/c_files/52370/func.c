/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52370
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) var_6))))) == (((var_0) >> (((var_8) + (6665435616580389960LL)))))))) >> (((((((/* implicit */_Bool) var_6)) ? (max((var_4), (var_7))) : (((((/* implicit */_Bool) (unsigned short)65520)) ? (9342616328660251862ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) - (16792543446041156411ULL)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        arr_11 [i_1] = ((((/* implicit */_Bool) var_3)) ? (arr_2 [i_3 - 1] [i_3 - 1]) : (((/* implicit */unsigned long long int) var_8)));
                        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (var_9) : (arr_4 [i_3] [i_1] [i_3 - 1])));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 15; i_4 += 3) 
                        {
                            var_12 = ((((/* implicit */_Bool) arr_13 [(unsigned short)1] [i_4 - 2] [i_3 - 1] [i_1] [i_0] [5LL] [10ULL])) ? (arr_13 [i_3 - 1] [i_4 - 2] [i_3 - 1] [i_1] [(unsigned short)2] [i_2] [(unsigned short)2]) : (arr_13 [15ULL] [i_4 - 2] [i_3 - 1] [i_1] [i_3] [(unsigned short)14] [i_1]));
                            var_13 &= ((((/* implicit */_Bool) var_8)) ? (((var_9) + (6982245624562002212LL))) : (-1051593882139214059LL));
                            var_14 = arr_13 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_1] [i_4] [i_4] [i_4 + 1];
                        }
                    }
                    for (unsigned short i_5 = 2; i_5 < 14; i_5 += 2) /* same iter space */
                    {
                        var_15 |= ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) ((var_4) <= (((/* implicit */unsigned long long int) var_9)))))))) ? (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_2] [i_5] [i_5 + 1] [i_0] [i_0])) : (((unsigned long long int) arr_6 [i_5 + 1])));
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15529)) ? (9005821719662970011LL) : (380845360305903950LL))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 2; i_6 < 14; i_6 += 2) /* same iter space */
                    {
                        arr_20 [i_1] = ((/* implicit */unsigned short) (~(arr_15 [i_6 - 1] [i_6 + 2] [i_6 + 2] [i_6 + 2])));
                        var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_15 [i_0] [i_6 + 2] [i_6 + 1] [(unsigned short)15])) * (var_4)));
                    }
                    var_18 = ((/* implicit */unsigned short) max((max((arr_4 [i_0] [i_1] [i_2]), (arr_4 [i_0] [i_1] [i_2]))), ((~(arr_4 [i_2] [i_1] [i_2])))));
                    arr_21 [i_0] [i_1] [i_1] = ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_15 [i_2] [i_1] [i_1] [i_0]) : (var_3)))) < ((-(arr_3 [i_0]))))) ? (((/* implicit */unsigned long long int) var_3)) : (((5420618675566918017ULL) & (4767444071439214312ULL))));
                }
            } 
        } 
    } 
    var_19 = var_5;
    /* LoopSeq 2 */
    for (long long int i_7 = 1; i_7 < 12; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_8 = 1; i_8 < 12; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 3; i_9 < 13; i_9 += 1) 
            {
                {
                    var_20 -= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) arr_26 [8LL])) == (var_0))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)15005))))) : (((((/* implicit */_Bool) var_2)) ? (arr_26 [(unsigned short)8]) : (arr_26 [(unsigned short)8])))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 3) 
                    {
                        arr_36 [i_7] [i_7] [i_9] [i_7] [i_9 + 1] [i_10 - 1] = ((/* implicit */long long int) arr_29 [i_7] [i_7]);
                        var_21 = ((((/* implicit */_Bool) 1051593882139214052LL)) ? (-1375217764934797444LL) : (-9130121818798788333LL));
                        var_22 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_7 + 2] [i_7 + 2])) ? (1051593882139214058LL) : (var_3)))) != (((unsigned long long int) ((var_0) / (((/* implicit */unsigned long long int) -8382251074981488923LL)))))));
                        var_23 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3363494865285769989LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [8ULL] [8ULL]))) : (var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_7]))) : (((long long int) ((9342616328660251845ULL) & (((/* implicit */unsigned long long int) 8130151093108528381LL))))));
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((unsigned short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_3)) : (4024473389642390725ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [(unsigned short)14] [(unsigned short)14] [i_7])) : (((/* implicit */int) var_6)))))))))));
                    }
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((8395894164993494370ULL) * (((/* implicit */unsigned long long int) 4042204440973457647LL))))) ? (((arr_16 [i_9] [i_9] [i_7] [i_9 - 1] [12ULL]) - (arr_16 [i_9] [i_9] [i_7] [i_9 - 3] [i_9]))) : (arr_18 [i_9] [6LL] [i_9] [i_7])));
                        arr_40 [i_8] [i_7] [i_7] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((long long int) var_0))) ? (max((var_5), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) arr_19 [i_9 - 2] [i_8 - 1] [i_9] [i_11] [i_7 + 1])))), (max((((var_7) & (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) var_9))))));
                        arr_41 [i_7] [12LL] [i_7] [i_11] |= ((/* implicit */unsigned long long int) var_3);
                    }
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (~((~(var_9))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */long long int) arr_18 [i_7] [i_7 + 2] [i_7] [i_7]);
    }
    for (long long int i_12 = 0; i_12 < 20; i_12 += 2) 
    {
        var_28 = ((/* implicit */long long int) (~(((min((0ULL), (arr_42 [i_12] [i_12]))) ^ (arr_42 [i_12] [i_12])))));
        arr_45 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) ((((long long int) arr_44 [i_12])) / (((-5693838425095978397LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3320))))))))));
    }
    /* LoopNest 3 */
    for (long long int i_13 = 0; i_13 < 17; i_13 += 3) 
    {
        for (long long int i_14 = 0; i_14 < 17; i_14 += 3) 
        {
            for (unsigned short i_15 = 0; i_15 < 17; i_15 += 2) 
            {
                {
                    var_29 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(var_7)))) ? (((((/* implicit */_Bool) arr_53 [i_13] [i_14] [i_15] [i_15])) ? (var_1) : (((/* implicit */unsigned long long int) arr_50 [i_15])))) : (((unsigned long long int) arr_52 [i_15] [i_15])))) < (((/* implicit */unsigned long long int) ((long long int) max((var_0), (var_5)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 17; i_16 += 3) 
                    {
                        for (long long int i_17 = 3; i_17 < 13; i_17 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_16] [i_15] [i_15] [i_15] [i_15])) ? (var_4) : (((/* implicit */unsigned long long int) arr_58 [i_17] [i_15] [i_17] [i_15] [i_17]))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_58 [i_17 + 4] [i_15] [16LL] [i_15] [i_17]) : (-2454250874525274264LL))) : (max((var_8), (((/* implicit */long long int) var_2)))))))));
                                arr_59 [i_13] [i_13] [i_15] [i_13] [i_13] = ((/* implicit */unsigned short) ((((334837158614145038ULL) + (((/* implicit */unsigned long long int) arr_58 [i_17 + 1] [i_13] [i_17 + 4] [i_17 + 3] [i_17])))) ^ ((-(max((((/* implicit */unsigned long long int) arr_44 [i_14])), (var_4)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

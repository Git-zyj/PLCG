/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4437
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
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_14 = ((unsigned char) max((((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (22ULL))), (((1ULL) >> (((18446744073709551594ULL) - (18446744073709551554ULL)))))));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (min((max((((/* implicit */unsigned long long int) var_5)), (arr_6 [i_1] [i_0 + 1]))), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_0] [i_0 - 1]))))));
            }
        } 
    } 
    var_16 = var_12;
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    arr_14 [i_4] [(unsigned char)7] [i_2] = ((/* implicit */unsigned long long int) max((var_11), (arr_13 [i_2] [i_3] [i_4])));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) arr_11 [i_2] [i_3])), (((((/* implicit */_Bool) arr_10 [i_2] [i_3])) ? (15ULL) : (6109549497724148366ULL))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551569ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [i_2]))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)224))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_10 [(unsigned char)4] [i_2])) : (((/* implicit */int) arr_11 [i_2] [i_2]))))))))))));
                }
                /* LoopSeq 3 */
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (+((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) > (12171689096711961636ULL)))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            {
                                arr_21 [i_6] [i_3] [i_5] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)112), ((unsigned char)238)))) ? (6275054976997589998ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)211))))) : (((((/* implicit */_Bool) var_10)) ? (max((arr_19 [i_6] [i_7]), (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
                                var_19 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) arr_18 [i_2] [(unsigned char)18] [(unsigned char)12] [i_3]))))));
                                arr_22 [i_2] [i_2] [(unsigned char)3] [i_2] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_12 [i_2])), (18446744073709551594ULL)))) ? (max((arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_7 [i_2] [i_6]))) : (min((arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_12 [i_2]))))));
                                arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned long long int) arr_16 [11ULL] [i_3] [i_3] [i_3]);
                            }
                        } 
                    } 
                }
                for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        arr_29 [i_9] [i_3] = ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_8] [i_8])) ? (((/* implicit */int) arr_10 [i_3] [i_2])) : (((/* implicit */int) arr_10 [i_3] [i_8]))));
                        var_20 = (unsigned char)7;
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 2; i_10 < 17; i_10 += 3) 
                        {
                            arr_33 [i_2] [i_3] [i_8] [i_8] [i_10] [i_8] [10ULL] |= ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (unsigned char)189)))));
                            arr_34 [i_10] [(unsigned char)17] [i_9] [(unsigned char)19] = min(((unsigned char)233), ((unsigned char)127));
                        }
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203))) * (0ULL))))));
                    }
                    var_22 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) arr_25 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_25 [i_3] [i_3] [i_3])))), (((/* implicit */int) max((arr_25 [i_2] [4ULL] [i_8]), (arr_25 [i_2] [i_3] [i_8]))))));
                    arr_35 [i_8] [i_3] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) var_13)))) < (((((/* implicit */int) var_8)) >> (((12171689096711961636ULL) - (12171689096711961628ULL))))))) && (((/* implicit */_Bool) min((arr_12 [i_2]), ((unsigned char)238))))));
                    var_23 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)29)), (1ULL)));
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 1) 
                {
                    var_24 ^= arr_25 [i_2] [1ULL] [i_11];
                    arr_39 [i_11] [i_3] [i_3] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_11] [i_11 - 1])) ? (((unsigned long long int) (unsigned char)146)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_11] [i_11] [(unsigned char)18] [i_11 + 3] [i_11])))));
                    arr_40 [i_2] [i_11] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_8 [(unsigned char)12])) != (((/* implicit */int) arr_27 [(unsigned char)2] [i_11] [i_2] [i_2] [i_11] [i_2])))) ? (((/* implicit */int) arr_16 [i_3] [i_3] [i_11 + 1] [i_3])) : (((/* implicit */int) (unsigned char)133))));
                }
            }
        } 
    } 
}

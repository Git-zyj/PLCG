/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50766
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
    var_18 = ((/* implicit */short) max((((/* implicit */int) var_13)), ((+(((/* implicit */int) (!(((/* implicit */_Bool) 1243479701)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_19 ^= ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])))) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])) - (27776)))));
        var_20 += ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0 - 1] [i_0 - 1]))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), (((unsigned long long int) 1065151889408LL)))) : (min((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */short) arr_0 [(short)9]))))), (max((((/* implicit */unsigned long long int) var_7)), (var_15))))));
        arr_3 [i_0] = ((/* implicit */short) ((unsigned short) max((arr_1 [i_0 - 1]), (((arr_0 [i_0 - 1]) && (((/* implicit */_Bool) 1065151889408LL)))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            {
                var_21 = arr_2 [i_2] [(unsigned short)9];
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 4) 
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), ((!(((/* implicit */_Bool) arr_8 [i_3 - 1]))))));
                    var_23 = arr_7 [i_1] [i_3];
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_7 [i_1] [i_1]))))) && (((((/* implicit */_Bool) arr_10 [i_1] [0ULL] [i_1] [i_1])) || (((/* implicit */_Bool) var_9)))))))));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            {
                                arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_16 [i_1] [i_2] [i_3 - 1] [i_4] [i_2] [i_1] [i_4]) : (arr_16 [i_4] [i_2] [i_3 + 1] [i_4] [2ULL] [i_5] [i_4])));
                                var_25 &= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_9 [i_3])) && (arr_1 [(_Bool)1]))));
                                var_26 *= ((/* implicit */short) (~(((((/* implicit */unsigned long long int) 1065151889408LL)) | (arr_11 [6U])))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned char) arr_0 [i_2]);
                }
                for (long long int i_6 = 1; i_6 < 11; i_6 += 3) 
                {
                    var_28 -= ((/* implicit */unsigned long long int) arr_5 [i_1]);
                    var_29 *= ((/* implicit */int) ((((arr_11 [i_6]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_1])))))) | (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_10 [i_1] [0ULL] [i_2] [i_6 - 1])))), (arr_14 [i_1] [i_1] [i_2] [i_6]))))));
                    var_30 = min((((/* implicit */long long int) (signed char)-5)), (arr_16 [(unsigned short)2] [i_1] [i_2] [i_2] [i_2] [i_6] [i_6]));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_7 = 3; i_7 < 17; i_7 += 2) 
    {
        var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_7] [i_7 + 1]))))) ? (((int) -1065151889409LL)) : (((/* implicit */int) (unsigned short)65531))));
        var_32 = ((/* implicit */int) ((arr_20 [i_7 + 1] [i_7 - 1]) && (arr_20 [i_7] [i_7 + 1])));
        var_33 = ((/* implicit */_Bool) (+(var_10)));
    }
    var_34 = ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) | (var_8))) << (((((((/* implicit */_Bool) 12885267598809760746ULL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))))) - (11976158966720902974ULL))))));
}

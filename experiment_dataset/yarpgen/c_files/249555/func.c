/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249555
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
    var_10 -= ((/* implicit */unsigned long long int) min((min((var_7), (((((/* implicit */_Bool) var_8)) ? (var_7) : (var_7))))), (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) arr_3 [i_0] [i_1]);
                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_0])), (arr_3 [i_0] [i_1]))), (arr_1 [i_0])))) ? (max((min((((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1])), (arr_0 [i_0] [i_1]))), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1] [i_0])))) : (arr_0 [i_0] [i_1])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_12 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [14U])) ? (arr_0 [(unsigned short)10] [(unsigned short)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [12LL])))))) ? (arr_5 [(short)10] [(short)10]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_1 [14ULL])) : (((/* implicit */int) arr_6 [i_0 - 1] [(short)4])))))));
                    /* LoopSeq 4 */
                    for (int i_3 = 3; i_3 < 14; i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_7 [i_1]);
                        var_13 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_3 + 2] [i_1] [i_2]);
                    }
                    for (int i_4 = 3; i_4 < 14; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 1; i_5 < 14; i_5 += 4) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) arr_7 [i_0]);
                            arr_19 [i_0] [i_2] [i_0] [i_5] = ((/* implicit */short) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_5]);
                            arr_20 [i_5 + 2] [i_0] [(short)14] [i_2] [i_0] [i_0] = ((/* implicit */short) arr_9 [i_0] [i_1] [i_2] [i_0] [i_2] [i_4 - 3]);
                        }
                        for (int i_6 = 1; i_6 < 14; i_6 += 4) /* same iter space */
                        {
                            var_14 = ((/* implicit */short) arr_15 [i_2] [i_0] [i_6] [i_0] [i_6 - 1]);
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_1] [i_2] [i_2] [i_4] [12])) ? (arr_0 [(unsigned char)10] [(unsigned char)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [12] [12])))))) ? (((((/* implicit */_Bool) arr_1 [14U])) ? (((/* implicit */int) arr_6 [i_1] [14])) : (arr_15 [i_0] [(unsigned short)14] [i_0] [i_0] [i_0]))) : (((/* implicit */int) arr_1 [14ULL])))))));
                            var_16 = ((/* implicit */long long int) arr_0 [i_0] [i_1]);
                        }
                        var_17 = ((/* implicit */short) arr_8 [i_0] [i_1] [i_2] [i_4] [i_0] [i_1]);
                        arr_23 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) arr_14 [i_0] [i_4]);
                    }
                    for (int i_7 = 3; i_7 < 14; i_7 += 1) /* same iter space */
                    {
                        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 - 2] [i_0] [i_7] [i_1] [i_7])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_13 [i_0]))))) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_0]))));
                        arr_27 [i_0] [i_0] [i_0] [i_2] [i_7] = ((/* implicit */_Bool) arr_14 [i_0] [i_0]);
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_0 [0U] [i_2]))));
                        arr_28 [i_7] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_0 - 2] [i_0] [i_0]);
                    }
                    for (int i_8 = 3; i_8 < 14; i_8 += 1) /* same iter space */
                    {
                        arr_31 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_17 [i_0 - 2] [i_0] [i_0] [i_0] [i_2] [i_8] [i_0 - 2]) : (arr_26 [i_0] [i_1] [i_2] [i_8 - 1])))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [(short)15] [i_2] [i_8])) ? (((/* implicit */int) arr_9 [14] [i_0] [i_2] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_2])))) : (arr_25 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_20 += ((/* implicit */unsigned short) arr_26 [2LL] [2LL] [(unsigned short)14] [i_8]);
                    }
                }
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_7)) : (var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (var_7)))) : (max((((/* implicit */unsigned long long int) var_3)), (var_2)))))) ? (var_2) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_3)), (var_7))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249469
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0] [i_1]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_4 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [4LL] [i_1]))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (arr_2 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))))));
                arr_5 [(signed char)23] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [(_Bool)1]))) : (arr_2 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_17 |= ((/* implicit */unsigned char) var_15);
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_2]);
                            var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_3])) ? (((((/* implicit */_Bool) -5712991728358078014LL)) ? (15756450914417320731ULL) : (2147483647ULL))) : (var_9)))) ? (((/* implicit */int) arr_1 [i_3] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_4 = 2; i_4 < 14; i_4 += 2) /* same iter space */
    {
        arr_15 [i_4 + 1] [i_4 + 1] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_4 + 1] [i_4 + 2] [i_4] [i_4])) : (((/* implicit */int) arr_9 [i_4 - 2] [i_4 - 1] [i_4 + 1] [i_4])));
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4 - 2] [i_4 + 2])) ? (arr_2 [i_4] [i_4 - 2]) : (arr_19 [i_4 + 2]))))));
            var_20 = ((((/* implicit */_Bool) arr_16 [i_5] [i_4 + 2] [9LL])) ? (((((/* implicit */_Bool) arr_9 [i_4 - 2] [16ULL] [i_4] [i_4])) ? (((/* implicit */int) arr_6 [i_5] [i_4] [i_4] [i_4])) : (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_1)))));
            arr_20 [i_5] = ((/* implicit */_Bool) arr_4 [i_5]);
        }
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_7 = 1; i_7 < 12; i_7 += 2) 
            {
                var_21 = ((/* implicit */short) max((var_21), (var_10)));
                arr_28 [i_7 + 2] [i_6] [i_4] = arr_3 [i_4] [i_7] [i_7];
                arr_29 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_4 + 2] [i_4 - 2] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */unsigned long long int) arr_7 [i_4 + 2] [i_4 - 2] [i_4] [i_4 - 1])) : (var_11)));
            }
            arr_30 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_4])) ? (((((/* implicit */_Bool) arr_22 [i_4 + 2] [i_6])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6] [(unsigned char)11] [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4] [i_4 - 1] [i_6])))));
            var_22 = ((/* implicit */signed char) arr_21 [i_4]);
            arr_31 [i_4] = ((/* implicit */unsigned long long int) arr_23 [i_4]);
        }
    }
    for (signed char i_8 = 2; i_8 < 14; i_8 += 2) /* same iter space */
    {
        arr_35 [i_8 - 2] [(short)12] = arr_1 [(_Bool)1] [i_8 + 2];
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)7624))))) ? (((/* implicit */int) arr_25 [i_8 - 1] [i_8 - 2])) : (((/* implicit */int) arr_25 [i_8] [i_8 - 2]))));
        var_24 = ((((/* implicit */_Bool) 719024349272003257ULL)) ? (((/* implicit */unsigned long long int) -5342618298491127937LL)) : (16317064006155303221ULL));
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_17 [(signed char)15] [i_8] [i_8]))));
    }
}

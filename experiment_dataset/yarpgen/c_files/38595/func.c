/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38595
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                var_11 *= ((/* implicit */long long int) arr_0 [3ULL]);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_18 [i_1] [6U] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [9LL] [i_1 - 2] [i_2] [i_4 - 1] [i_1 - 2] [(_Bool)1])) << ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                                arr_19 [i_2] [i_2] [i_2] [12LL] [i_4] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) arr_13 [i_4 + 1])), (var_0))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [7LL] [i_2] [(unsigned char)11] [(short)3] [7LL] [i_2] [(unsigned short)9])) || (((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_1] [i_1] [1U] [i_2] [i_0]))))))));
                                arr_20 [i_2] [i_2] = ((/* implicit */signed char) var_9);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_5 = 3; i_5 < 13; i_5 += 2) 
                    {
                        var_12 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_1 + 2] [i_1] [(unsigned short)13] [(_Bool)1] [7])) ? (((/* implicit */int) arr_15 [i_5 - 1] [i_1 + 2] [i_1] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_15 [i_5 - 1] [i_1 + 2] [i_0] [i_0] [i_0] [(unsigned char)10]))));
                        var_13 = arr_6 [i_2] [i_1 + 1] [i_5 - 2];
                        arr_23 [i_0] [i_2] [i_2] [(unsigned short)3] [i_5] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_17 [(unsigned short)5] [i_0] [(unsigned short)5] [(_Bool)1] [i_1] [i_2] [7U])) > (((/* implicit */int) (_Bool)1)))))));
                        var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5 - 1] [i_5 - 1] [i_2] [i_5 - 1]))) > (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_5] [i_2] [i_2] [i_0] [i_0]))) : (arr_12 [i_5] [i_2] [i_1])))));
                    }
                    var_15 = ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */int) arr_14 [i_2] [i_0] [(_Bool)1] [(_Bool)1] [i_2] [i_0] [i_1])), (var_1)))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)230))) ^ ((-(arr_8 [i_2] [i_1])))))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) * (arr_12 [i_0] [i_2] [3])));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (var_5))), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned short) var_8)))))))) ? (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (var_0))) > (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_1)) & (var_3))))))) : (((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */int) var_2)), (var_1))) : (((/* implicit */int) ((((/* implicit */int) var_9)) != (var_10))))))));
}

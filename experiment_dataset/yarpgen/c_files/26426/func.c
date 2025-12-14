/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26426
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
    var_20 += var_14;
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            var_21 *= ((/* implicit */_Bool) ((((/* implicit */int) var_19)) >> (((/* implicit */int) ((_Bool) 1755691178)))));
                            var_22 = ((/* implicit */long long int) var_12);
                            arr_14 [i_0] [i_1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) var_10);
                        }
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 2] [i_3 + 1])) ? (var_13) : (((/* implicit */long long int) ((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_5)))))))));
                    }
                    var_24 = ((/* implicit */long long int) max((var_24), (((((/* implicit */_Bool) ((unsigned int) arr_1 [i_1]))) ? (((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 2])) ? (arr_4 [i_0 - 2]) : (((/* implicit */long long int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_8 [i_0 + 1] [i_0 - 1] [i_0 - 3] [i_1] [i_0 + 1]))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) ((var_15) & (((/* implicit */long long int) ((/* implicit */int) var_14)))));
    var_26 += ((/* implicit */unsigned short) 11774334777035276083ULL);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22691
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
    var_13 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */_Bool) var_1);
                var_15 = ((/* implicit */int) var_8);
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_11 [i_3] [i_2] [i_0] [i_0] = ((/* implicit */short) var_5);
                            arr_12 [i_0] [i_1] [i_0] [i_2] [6ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_4 [i_0] [i_0 + 1])))) ? (min((arr_4 [i_0] [i_0 + 1]), (arr_4 [i_0] [i_0 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1])) && (((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 1]))))))));
                            arr_13 [i_0] = ((/* implicit */short) max((min((((/* implicit */long long int) (unsigned char)45)), (min((9223372036854775807LL), (9223372036854775807LL))))), (((((max((-9223372036854775807LL), (((/* implicit */long long int) -1983676607)))) + (9223372036854775807LL))) >> (((((/* implicit */int) max((var_8), (((/* implicit */unsigned char) arr_1 [i_3]))))) - (163)))))));
                            var_16 = ((/* implicit */int) max(((((-9223372036854775807LL - 1LL)) - (((/* implicit */long long int) ((/* implicit */int) (short)-19613))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_0 [i_0] [i_0 - 1])), (((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(short)7]))) : (var_5))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 1]))) : (var_5))), (min((((/* implicit */unsigned int) (signed char)76)), (3845455599U))))))));
            }
        } 
    } 
}

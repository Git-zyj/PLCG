/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205110
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
    var_13 &= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2147483647))));
                var_14 = ((/* implicit */short) max(((-(((/* implicit */int) arr_1 [i_1 + 4])))), (((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_1 + 2])) : (((/* implicit */int) arr_1 [i_1 + 1]))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_11 [i_1] [i_2] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) var_3);
                            var_15 = ((/* implicit */long long int) max((((/* implicit */int) arr_10 [i_2] [i_3] [i_2] [i_1] [3ULL] [i_0])), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))))));
                        }
                    } 
                } 
                arr_12 [i_1] [i_0] [i_1 + 4] = ((/* implicit */_Bool) arr_0 [i_1 + 4]);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_6);
}

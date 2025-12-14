/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242641
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
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */short) var_6)), (var_0)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_21 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2841694942049160742ULL)))))) == ((~(arr_4 [i_0 - 1])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (17666728400961948143ULL) : (18446744073709551615ULL))))));
                    var_23 |= ((/* implicit */unsigned int) (!(var_1)));
                }
            }
        } 
    } 
}

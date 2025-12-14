/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1985
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
    var_19 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned char) arr_3 [18LL]);
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL))), (var_8))))));
                arr_5 [(unsigned short)21] = ((/* implicit */unsigned long long int) var_16);
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_15);
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            {
                var_23 = ((/* implicit */short) var_18);
                var_24 = ((/* implicit */unsigned long long int) var_16);
            }
        } 
    } 
}

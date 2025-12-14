/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32457
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
    var_15 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 = min((arr_1 [i_0]), (min((arr_2 [i_0]), (arr_2 [i_0]))));
        var_17 = ((/* implicit */signed char) min((var_17), (min((min((arr_1 [i_0]), (min((arr_1 [i_0]), (arr_3 [i_0] [i_0]))))), (arr_1 [i_0])))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_18 = ((/* implicit */_Bool) arr_2 [i_0]);
            var_19 = ((/* implicit */signed char) arr_4 [i_0]);
            var_20 = ((/* implicit */signed char) min((max((arr_6 [i_0] [i_0]), (arr_6 [i_0] [i_0]))), (arr_6 [i_1] [i_0])));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            arr_10 [i_2] [i_2] [i_0] = ((/* implicit */long long int) arr_4 [i_0]);
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_0 [i_2]))));
        }
        /* vectorizable */
        for (signed char i_3 = 3; i_3 < 22; i_3 += 1) 
        {
            var_22 = arr_1 [i_3 - 3];
            arr_13 [i_0] = arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1];
        }
    }
}

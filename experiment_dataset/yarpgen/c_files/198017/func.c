/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198017
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
    for (long long int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (+(arr_5 [i_0] [i_1])))) <= (max((((/* implicit */unsigned long long int) var_11)), (arr_1 [i_0])))))) ^ (((/* implicit */int) (short)-27624))));
                var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1])) ^ (((/* implicit */int) var_9))))), (min((11693018472814782921ULL), (arr_1 [i_0])))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_0);
    var_22 = ((/* implicit */short) var_4);
    var_23 = ((/* implicit */signed char) (+(((/* implicit */int) var_11))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219867
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((var_14) != (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2])), (arr_0 [i_0])))))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])), (min((508584863741457012ULL), (((/* implicit */unsigned long long int) -2147483635))))))) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_2]))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) min((var_2), (((unsigned int) ((((/* implicit */_Bool) var_16)) ? (var_12) : (((/* implicit */long long int) var_9)))))));
    var_23 = ((/* implicit */signed char) var_6);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2795
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */int) ((unsigned long long int) min((arr_5 [i_0] [i_0] [i_1]), (arr_5 [i_1] [i_1] [i_0]))));
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0] [i_1]))))) > ((~(var_3)))))), (max((((/* implicit */unsigned long long int) var_2)), (((var_4) % (var_0))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_12))));
    var_16 = ((/* implicit */unsigned char) 1449898243394084677LL);
}

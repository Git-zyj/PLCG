/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218462
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_10 = ((/* implicit */unsigned long long int) var_4);
            var_11 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))))), (max((var_8), (var_9)))));
            var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_5))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            arr_7 [i_0] [i_2] [i_0] = (+((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13131))) * (var_5))))));
            arr_8 [i_2] = ((/* implicit */unsigned short) ((((min((var_6), (var_6))) * (-1LL))) / (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))));
        }
        var_13 = ((/* implicit */int) ((max((((/* implicit */int) (short)-3749)), (1032068638))) > (-1524844893)));
    }
    var_14 = ((/* implicit */short) (~(var_0)));
    var_15 = ((/* implicit */unsigned short) var_1);
    var_16 = var_4;
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39987
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    var_15 |= ((/* implicit */short) ((((/* implicit */int) arr_4 [i_2 + 1])) < (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (short)21912)))))));
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) ((var_3) ? (16376554138528900916ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 1])))))))))));
                }
            } 
        } 
    } 
    var_17 *= var_1;
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207659
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
    var_19 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 += ((/* implicit */unsigned int) var_14);
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~(var_10))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)4096))) % (-1LL)));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_10)))) ? (var_15) : (var_15)))) ? (var_10) : (((/* implicit */unsigned long long int) (((-(var_4))) + (var_14))))));
}

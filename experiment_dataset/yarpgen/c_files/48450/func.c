/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48450
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
    var_10 += var_6;
    var_11 = ((/* implicit */_Bool) ((signed char) var_5));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((unsigned long long int) var_3));
                var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) >> (((var_8) - (3140198582U))))) << ((+(((/* implicit */int) var_5))))))) ^ ((((~(9926899947413930914ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_7)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) var_5);
    var_15 |= ((/* implicit */short) var_1);
}

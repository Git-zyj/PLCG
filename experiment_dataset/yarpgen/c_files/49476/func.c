/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49476
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
    var_12 = ((/* implicit */int) (!(((((/* implicit */_Bool) min((21403207), (-21403213)))) || (((21403224) == (-1790700978)))))));
    var_13 = ((/* implicit */signed char) ((((var_2) + (2147483647))) << ((((((~(max((2147483629), (((/* implicit */int) var_1)))))) - (-2147483641))) - (10)))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */int) max((((((/* implicit */int) (signed char)-116)) != (arr_3 [i_0]))), ((!(((/* implicit */_Bool) -1))))))) != (max((min((1790700981), (-21403219))), (max((-1790700982), (((/* implicit */int) arr_5 [i_0] [i_0]))))))));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (-((-(min((((/* implicit */int) arr_1 [i_0] [i_0])), (21403210))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) max(((-(((((/* implicit */_Bool) (signed char)-65)) ? (-5) : (((/* implicit */int) (signed char)116)))))), (-7)));
}

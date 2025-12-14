/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219554
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
    var_19 ^= ((/* implicit */long long int) var_9);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) arr_8 [3] [6LL] [i_2 - 1])) & (((/* implicit */int) arr_8 [i_2] [i_2] [i_2 - 2])))));
                    var_21 = (~(((((arr_1 [i_2 - 2]) + (2147483647))) >> (((var_3) + (9089702843346466961LL))))));
                    var_22 -= ((/* implicit */short) max((max((var_7), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))))), ((~(var_14)))));
                }
            } 
        } 
    } 
    var_23 += max((((/* implicit */long long int) ((var_7) < (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_18)) : (var_10)))))), (var_5));
    var_24 += ((/* implicit */long long int) var_13);
}

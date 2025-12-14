/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(((min((max(4446312902025161882, var_14)), var_15))), 13709727089012714661);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = var_7;
                var_17 = ((((min((4446312902025161884 ^ -1), (arr_4 [i_0] [i_1])))) ? (min(((max(104, var_9))), var_9)) : (max(((var_11 ? (arr_0 [i_1]) : (arr_1 [1]))), var_15))));
                var_18 = (max(var_18, ((((((((max(123, 30590))) ? (min(var_12, var_13)) : (arr_0 [i_0])))) ? (((var_7 * 0) << ((((max(124, (arr_1 [i_0])))) - 59186)))) : ((((min(var_13, var_15))) ? (max(var_7, (arr_3 [i_1]))) : (((var_15 ? 3380726403 : var_6))))))))));
                var_19 = (((!15343628934718339907) >> ((((1 ? var_0 : ((((arr_2 [i_0]) > var_5))))) - 44681))));
            }
        }
    }
    #pragma endscop
}

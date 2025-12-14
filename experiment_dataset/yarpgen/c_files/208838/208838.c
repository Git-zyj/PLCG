/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(((38740 <= (-32767 - 1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = 38764;
                var_19 = arr_2 [i_1 - 1] [i_0];
            }
        }
    }
    var_20 = ((((((max(var_9, 0))) ? (-2147483647 - 1) : ((max(var_2, 1))))) <= (((!(var_13 / 1837213727))))));
    #pragma endscop
}

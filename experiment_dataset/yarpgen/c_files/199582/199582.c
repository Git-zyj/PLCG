/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(-1, -4));
    var_20 = ((!(((-1 ? ((200825098 ? 4094142198 : 200825098)) : (var_12 != -1))))));
    var_21 = (((((min(var_5, var_4)))) % var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_22 = (min((min(((-(arr_6 [7] [7] [i_0]))), ((((arr_2 [i_0]) || 127))))), (min(4094142197, -4))));
                arr_7 [i_0] = 200825098;
                arr_8 [i_0] = (((arr_1 [i_0] [i_1]) ? -127 : ((max(((min(2, 1))), var_5)))));
            }
        }
    }
    var_23 = ((((((min(var_12, -23))) ? (var_2 + 1548897677) : 0)) >> ((((-7936 ? var_16 : ((127 >> (var_0 - 51264))))) - 207))));
    #pragma endscop
}

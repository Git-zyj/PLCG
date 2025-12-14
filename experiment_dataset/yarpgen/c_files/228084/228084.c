/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((var_17 / (max((max(var_5, var_3)), var_17)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_20 = (((max(0, 65535))) ? 24937526 : 5399020934503365837);
                arr_6 [i_0] [i_0] [i_1] = ((-(arr_2 [i_0] [i_1])));
                arr_7 [i_0] [i_0] [i_0] = (arr_4 [i_1 + 2] [i_1]);
                var_21 = ((((arr_0 [i_0]) ? var_8 : var_17)));
            }
        }
    }
    var_22 = (min(var_22, var_10));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_5 ? var_2 : var_1));
    var_11 = var_0;
    var_12 = 9439;
    var_13 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = (-var_4 * var_9);
                    arr_10 [i_0] [i_2] [i_0] [i_0] = (((min(var_6, 3676000323))) ? (min(618966960, var_3)) : 3676000323);
                    var_14 = (min(-112, -9));
                }
            }
        }
    }
    #pragma endscop
}

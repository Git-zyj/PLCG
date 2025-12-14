/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((18107 >= var_3), var_12));
    var_20 -= ((-32766 ? 16383 : 9430));
    var_21 = ((((((var_9 ? var_13 : var_9)))) ? 32766 : (((var_4 && ((((-2276 + 2147483647) >> (125 - 105)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_22 = (-32762 & 78);
                    arr_9 [i_0] [i_1] [i_1] = ((((((17 ? var_6 : var_5)) ? (min(4294950912, 32765)) : (((min(-32742, var_6))))))));
                }
            }
        }
    }
    #pragma endscop
}

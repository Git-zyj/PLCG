/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max(var_10, var_8);
    var_12 = (min(var_12, var_9));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 &= (((arr_0 [i_0]) ? (!var_4) : ((~(arr_1 [i_0 - 1])))));
                    var_14 = 44908;
                }
            }
        }
    }
    var_15 = (min(var_7, ((var_6 ? ((1727 ? -107 : var_9)) : var_8))));
    #pragma endscop
}

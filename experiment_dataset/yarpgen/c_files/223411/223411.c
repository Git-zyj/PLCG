/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 *= 1;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = ((~(!4294967295)));
                    var_21 = 562949953355776;
                    var_22 -= (!(!4294967295));
                    var_23 = (min(var_23, 1));
                }
            }
        }
    }
    var_24 = 883938290;
    #pragma endscop
}

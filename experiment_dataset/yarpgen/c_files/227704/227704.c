/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~103);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((!(~1)));
                var_21 += (+-9119577827740811452);
                var_22 = (!59);
                var_23 = (max(var_23, (((((~(arr_0 [i_1]))))))));
            }
        }
    }
    var_24 = (~var_5);
    var_25 = (~12);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(var_17, 255))) ? var_12 : 0));
    var_19 = ((!(((-1 ? 12930 : -258568697)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (((min((!var_13), var_12)) - ((((-32767 - 1) ? 3682222478 : (-32767 - 1))))));
                var_21 = ((!((!((max(258568696, (arr_5 [i_1]))))))));
            }
        }
    }
    #pragma endscop
}

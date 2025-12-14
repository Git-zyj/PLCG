/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_2);
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = arr_4 [i_0] [i_0] [i_0];
                var_14 = ((63 << (65 - 43)));
                arr_6 [i_0] [i_0] = (!76);
            }
        }
    }
    var_15 = (((((min(68, -87)))) / ((var_5 ? var_5 : 2945976101))));
    #pragma endscop
}

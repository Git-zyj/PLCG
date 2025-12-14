/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (max((((!-467432063) != 1)), (((arr_3 [i_1]) >= (arr_3 [i_1])))));
                arr_5 [i_0] [i_1] [i_1] = (!-9865);
                var_14 = (((!467432061) << ((((max((arr_0 [i_1 + 1]), (arr_0 [i_1 + 1])))) - 4365))));
            }
        }
    }
    var_15 = (!var_6);
    var_16 = 15;
    var_17 = (max(var_7, (min(((18894 ? var_3 : var_10)), (6 ^ 14680064)))));
    var_18 = ((!(~48)));
    #pragma endscop
}

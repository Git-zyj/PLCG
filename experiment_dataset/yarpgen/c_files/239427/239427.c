/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (max(32767, 32766));
    var_15 = ((((var_2 && (var_13 > -48))) ? var_7 : (max(((var_3 ? var_12 : 1)), 24587))));
    var_16 = (~var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = ((!(59674 / 3574889663692704473)));
                    arr_9 [i_1 - 2] [i_1] [i_1] [15] = 18662;
                }
            }
        }
    }
    var_18 = (((max((-32766 > 8192), var_0)) ? var_7 : (var_12 != 1)));
    #pragma endscop
}

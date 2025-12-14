/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((1203213037 <= ((var_2 >> (!-64))))))));
    var_11 = (min(var_11, 2676));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 ^= (arr_8 [i_0] [i_1] [i_1] [i_2]);
                    var_13 = 4294967281;
                }
            }
        }
    }
    var_14 |= ((62881 ? 1279915884 : (((((62881 << (96 - 86)))) ? (~var_0) : var_6))));
    #pragma endscop
}

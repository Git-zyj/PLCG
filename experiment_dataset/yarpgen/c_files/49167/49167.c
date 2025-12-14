/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_18 -= (max(2885212047, (((max((arr_1 [i_0]), (arr_3 [i_1] [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_19 = (((min(3942460273, (arr_11 [i_0] [i_1] [i_0] [i_3 + 2]))) << (((~-2505) - 2482))));
                            arr_12 [i_2] [i_1 + 1] [i_2] = -26;
                        }
                    }
                }
            }
        }
    }
    var_20 = (-536898349 * -1);
    var_21 = (min(0, 18296377861173126188));
    #pragma endscop
}

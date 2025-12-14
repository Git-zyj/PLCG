/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((-61 ? -var_1 : var_7));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_12 = (arr_10 [i_3 + 3]);
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [11] = ((~((7 ? 0 : var_3))));
                        }
                    }
                }
            }
        }
    }
    var_13 = ((var_0 ? -var_0 : ((-9223372036854775805 ? -var_2 : -8704499898543132016))));
    var_14 = 101;
    #pragma endscop
}

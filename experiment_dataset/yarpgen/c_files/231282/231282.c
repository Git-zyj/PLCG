/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((~(~65535)));
                arr_8 [11] [4] [i_1] = (((((32767 / ((max((-32767 - 1), 219)))))) != ((-65536 ? (min(var_1, 65535)) : var_5))));
            }
        }
    }
    var_19 = -var_13;
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_22 [i_5] [3] [3] [i_2] [i_5] [15] = (!-1);
                            var_20 -= var_14;
                            arr_23 [i_2] [i_5] = 32;
                        }
                    }
                }
                arr_24 [i_2] [11] = var_10;
            }
        }
    }
    #pragma endscop
}

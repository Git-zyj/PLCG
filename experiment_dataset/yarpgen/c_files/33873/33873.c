/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (((arr_0 [i_1] [i_1]) || var_5));
                var_20 = -733056908;
                var_21 -= (!1598100460);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        {
                            var_22 = (max(var_22, 72057525318451200));
                            var_23 = (arr_14 [9]);
                            arr_19 [i_4] [i_3] [i_4] [0] = -7854;
                            var_24 *= (46081 ? (631950248 != -7854) : var_7);
                        }
                    }
                }
                var_25 = max((((arr_8 [i_2 + 1]) - var_18)), -120);
                arr_20 [i_3] [i_3] = var_10;
                arr_21 [i_3] = min(((((arr_0 [i_3 - 1] [i_2 + 1]) || (arr_0 [i_3 - 1] [i_2 - 1])))), (((((arr_4 [7]) < 209)) ? 0 : -1598100460)));
            }
        }
    }
    var_26 = (((min(1598100460, 66)) >> (-7833 + 7840)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((((((2147483644 ? 3053554197 : 1241413099))) || (arr_2 [i_0 - 1] [i_0 - 3] [i_0 - 4]))));
                var_10 = (844813615 + 4294967295);

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 = var_0;
                                var_12 = var_3;
                            }
                        }
                    }
                    var_13 = 2147483644;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            {
                var_14 = ((+((-1989246616 ? (arr_11 [i_6] [i_6] [9] [i_6] [i_6] [i_6] [i_5]) : (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 - 1] [i_6])))));
                arr_19 [i_5] [i_5] [i_5 + 1] = (((-2147483647 - 1) != 2136041603));
            }
        }
    }
    var_15 = (max(var_15, ((((min((max(var_8, 516181784)), var_9))) ? var_8 : 2147483647))));
    #pragma endscop
}

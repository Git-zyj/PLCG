/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_13;
    var_18 = (~134217600);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] = (arr_6 [i_1 + 2] [i_1] [7]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_1 + 4] [i_2] [i_1] [i_4 - 1] [i_2] = (arr_10 [i_4 - 1] [5] [5]);
                                var_19 = ((-1575876857 == (max((arr_0 [i_0] [10]), 32755))));
                                arr_14 [i_1] [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_3] [i_4] = (min((arr_12 [i_0 - 1] [i_1] [i_1] [i_1] [i_4 - 1]), (((4294967295 != (arr_6 [i_1 + 4] [i_3 + 1] [i_3 + 1]))))));
                                arr_15 [i_4] [i_1] [i_3] [i_2] [i_1 + 2] [i_1] [i_0 - 2] = ((15584699064038825037 ? 70 : -32760));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

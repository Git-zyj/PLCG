/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_1] = ((~(min(285576558, 1794973598))));
                    arr_9 [i_0] [i_0] [i_2] = ((!((min((arr_2 [i_2 + 1] [i_2 + 1] [i_2]), (arr_2 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((!(((max(0, 25807))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                arr_17 [i_4] = (--4009390737);
                arr_18 [i_3] [i_4] [10] = (((!(arr_7 [i_4]))));
            }
        }
    }
    var_14 = 285576558;
    var_15 = ((!((max((((0 ? -1295796615 : 285576553))), var_3)))));
    var_16 = ((var_13 || (((((min(245, var_4))) ? 34175 : var_9)))));
    #pragma endscop
}

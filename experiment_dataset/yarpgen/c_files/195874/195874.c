/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((~(~502100449))));
    var_21 -= ((502100449 ? 53800 : (((!(((var_1 ? -1 : var_0))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] = (33554431 | -502100449);
                            var_22 = (+((((((arr_4 [i_0] [i_1] [i_3]) ? var_19 : 53800))) ? 2147483647 : (arr_0 [i_0]))));
                        }
                    }
                }
                arr_11 [i_0] [i_0] = (min((arr_9 [i_0 + 1] [i_0]), (arr_3 [i_0])));
            }
        }
    }
    #pragma endscop
}

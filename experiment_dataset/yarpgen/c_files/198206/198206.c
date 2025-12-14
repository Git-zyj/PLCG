/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 4146803057170468047;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_14 = (min(((~(arr_1 [i_0] [i_0]))), (arr_0 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_15 = (max((arr_5 [i_0] [i_3]), (((~(arr_1 [i_0] [i_0]))))));
                            arr_11 [i_0] [i_0] [i_0] [i_3] = (min(129, 126));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

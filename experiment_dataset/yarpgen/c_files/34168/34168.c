/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = (var_9 ? (max((min((arr_0 [i_1]), 1499658540631524638)), 31572)) : (((-(((arr_0 [i_1]) % 5857778934143362839))))));
                arr_5 [i_0 + 1] [i_0] [i_1] = ((65535 ? 8814295412101658339 : 1));
                var_12 = -5857778934143362840;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 6;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 6;i_3 += 1)
        {
            {
                var_13 = (min((16947085533078026978 % var_0), (min(32, -1))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        {
                            var_14 -= var_4;
                            var_15 = var_10;
                            arr_16 [i_2] = ((965791301 ? 1 : 220));
                            var_16 = (max(var_3, (((!(arr_15 [i_2 + 3] [i_5] [i_2 + 3] [i_2]))))));
                        }
                    }
                }
            }
        }
    }
    var_17 = 134217472;
    var_18 -= ((~(var_4 & var_7)));
    #pragma endscop
}

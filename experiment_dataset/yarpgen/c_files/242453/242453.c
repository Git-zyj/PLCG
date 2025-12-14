/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_1] = var_5;
                            arr_10 [i_0] [i_1 - 1] [i_2] [i_1] = ((2147483647 ? (-2147483647 - 1) : 2339390221));
                            var_12 += 1;
                        }
                    }
                }
                arr_11 [i_1] = (((~1523233630) ? 21808 : (var_3 || 1)));
            }
        }
    }
    var_13 ^= var_0;
    var_14 = (((!(~9469569637099983626))));
    var_15 = var_5;
    var_16 = var_6;
    #pragma endscop
}

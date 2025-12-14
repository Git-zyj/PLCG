/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_14 = (-8691500551446239635 != 2068576514);
                    var_15 = ((!(((8691500551446239625 ? (-99 || -14508) : -2068576505)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                arr_11 [i_3] [i_4] = ((-(max((((~(arr_8 [i_3])))), var_2))));
                var_16 = ((~((-(arr_8 [i_3])))));
            }
        }
    }
    var_17 = var_11;
    #pragma endscop
}

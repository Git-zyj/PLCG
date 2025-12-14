/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(min(((min(0, 1))), (1 >> 1)))));
    var_16 = var_2;
    var_17 = (var_8 ? var_12 : ((((min(var_14, var_5))) ? ((max(var_3, var_4))) : var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_0] [0] = (219873369 != 0);
                            var_18 = ((~-1) ? ((~(min(1, var_10)))) : 0);
                            var_19 -= (((((arr_8 [i_0] [i_0] [i_3] [i_3]) + 2147483647)) << ((((((min(var_7, 9640))) ? 37 : (arr_3 [i_0]))) - 37))));
                            var_20 = ((!((min(37, 0)))));
                        }
                    }
                }
                arr_15 [i_0] [i_1] [i_0] = (min(var_12, (min((max(1, -8782267083852042599)), var_4))));
            }
        }
    }
    #pragma endscop
}

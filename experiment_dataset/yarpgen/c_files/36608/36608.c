/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = ((!((((1 ? var_4 : -7))))));
                    var_14 = (-2147483647 - 1);
                    arr_10 [i_2] [6] [i_0] [i_0] = (max(3756151176, 1936613603));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_15 = var_3;
                                var_16 *= ((((min((min((arr_9 [i_0] [i_0] [i_4 + 3] [i_3]), 4294967290)), -26933))) ? ((-((var_11 ? -9191412811867400307 : (arr_7 [i_3] [0] [i_3] [i_3]))))) : ((-((-26910 ? var_5 : 1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

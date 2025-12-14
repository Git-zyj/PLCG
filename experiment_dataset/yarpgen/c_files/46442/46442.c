/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((max(var_7, var_6)) | var_3)), ((min(var_11, (var_0 < var_0))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] = 63;
                                arr_17 [i_1] [i_3] [i_1] = (((((((-4767 ? 60 : var_1)) % (var_2 ^ 49)))) ? -525601540 : -12305));
                            }
                        }
                    }
                    arr_18 [i_0 - 1] [i_1] = (((max(var_7, var_7))));
                }
            }
        }
    }
    var_13 = var_2;
    #pragma endscop
}

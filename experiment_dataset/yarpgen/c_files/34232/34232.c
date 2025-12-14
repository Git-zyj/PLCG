/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((~55682) <= var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_14 [i_3] [i_1] [i_1] [i_1] [11] [i_1] = ((min(-1, 1)));
                            var_12 = 1;
                        }
                    }
                }
                var_13 = (max(55679, -28));
                arr_15 [i_0] = (max((max(var_10, 8355840)), ((max(var_4, 708333309)))));
                arr_16 [i_0] [i_0] [4] = var_7;
            }
        }
    }
    var_14 |= 112;
    #pragma endscop
}

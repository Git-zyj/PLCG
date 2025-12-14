/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (max(var_1, var_3));
    var_15 = ((max(var_5, (var_13 % var_1))) >> var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 &= (arr_2 [i_0]);
                var_17 -= (max(102, 22395));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] = 315544240;
                                var_18 *= (((max(var_11, (max(1, (arr_10 [i_0] [i_0] [i_0] [i_0] [14]))))) + ((var_4 + ((((arr_0 [18]) - (arr_0 [i_0]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_12;
    #pragma endscop
}

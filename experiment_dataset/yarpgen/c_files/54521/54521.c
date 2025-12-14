/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_15 = ((((~((1703607537 ? 2591359759 : var_10)))) << (((arr_8 [i_0] [i_1] [i_2] [i_3]) - 2491893237))));
                            var_16 = var_3;
                            var_17 = arr_0 [i_1];
                        }
                    }
                }
                var_18 = (min(var_18, ((min(2944559317, var_0)))));
                arr_9 [0] &= (1703607547 - 74);
                var_19 = (max(var_19, (((2591359752 << ((((-((74 >> (((arr_6 [i_0] [i_1] [i_1] [i_1]) - 1818096218)))))) + 26)))))));
            }
        }
    }
    var_20 = (((max(2591359759, 570957926)) > var_3));
    #pragma endscop
}

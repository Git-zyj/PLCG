/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] [i_1] = ((var_16 ? var_0 : (arr_3 [i_3 + 3] [i_0 + 2])));
                            var_17 &= (((min((var_2 % var_3), 0)) != var_9));
                            var_18 = (min(var_18, ((((~var_13) ? 3784 : (((arr_8 [i_2] [i_3 + 4] [i_3 + 4] [i_3]) + var_5)))))));
                            var_19 = 4974;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [6] [i_0] = ((((var_2 && (arr_21 [i_5 - 1] [i_5 - 1] [i_0] [i_5 - 1] [i_5]))) ? ((-((var_9 << (((((-2147483647 - 1) - -2147483625)) + 28)))))) : (arr_8 [i_1] [i_4] [i_5] [i_6 - 1])));
                                var_20 = ((((min((arr_19 [i_5 + 2] [6] [i_0] [i_6 - 2]), ((((arr_20 [i_0] [i_1] [i_0] [i_0] [i_5] [i_5 - 1] [6]) ? var_12 : var_9)))))) ? (((-(!4974)))) : (((arr_21 [19] [i_1] [i_0] [i_5 + 1] [i_0]) ? (max(var_12, var_13)) : var_2))));
                                var_21 = (((((~var_11) < ((255 ? (arr_19 [i_0] [i_0] [i_0] [i_0]) : (-2147483647 - 1))))) ? var_2 : var_11));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_12;
    #pragma endscop
}

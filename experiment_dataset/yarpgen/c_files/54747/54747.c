/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        var_15 = ((((max(var_5, ((var_9 ? (arr_8 [i_0] [i_0] [i_3 - 2] [i_3 - 2]) : var_3))))) ? 46379 : (max(((var_3 << (var_7 - 8919777946797891103))), (!var_6)))));
                        arr_10 [i_0] [5] [i_0] [i_3] [i_3 + 1] [i_1] = (max((((var_9 >> (((arr_2 [i_2] [i_3 + 2]) + 80))))), (max(3490095889741716259, -3490095889741716253))));
                        arr_11 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] = ((((((var_0 == (-2147483647 - 1))))) > (((var_3 ? var_0 : 4294967285)))));
                        var_16 = var_4;
                        var_17 = (min(var_17, ((((-((1538897916 ? 65535 : var_0))))))));
                    }
                }
            }
        }
        arr_12 [i_0] = (max((!var_5), ((var_3 >> (var_4 - 26663)))));
        var_18 &= (!19156);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_17 [i_4] [i_4] = -var_0;
                    arr_18 [i_4] = ((-(arr_14 [i_0] [i_4] [i_5])));
                }
            }
        }
    }
    var_19 = var_2;
    var_20 = (((((min(var_10, var_3)))) || ((max((~var_0), var_5)))));
    #pragma endscop
}

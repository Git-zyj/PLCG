/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((-(((arr_0 [i_0]) ? var_9 : var_18)))) >> (3221225472 + 1073741833));
                arr_5 [i_0] [i_1] = (min((arr_2 [i_1 + 1] [3]), (min(var_5, var_13))));
                var_19 *= (((((-(arr_1 [i_0])))) || var_6));
                var_20 = var_5;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_21 = (((((((var_8 ? var_0 : 1073741835))))) + 3221225457));
                    var_22 = min((min((arr_9 [i_2 - 1] [i_3]), var_5)), (arr_11 [i_2] [15] [i_4]));
                }
            }
        }
    }
    var_23 = var_3;
    #pragma endscop
}

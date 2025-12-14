/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((max((max(18446744073709551615, 18446744073709551614)), (min((!var_2), -0)))))));
                var_19 = (max(var_19, (((((((arr_3 [i_0] [i_0]) ? 65528 : 5141469149186558252))) && (((31313 | (~-236556552893241280)))))))));
                var_20 = ((max(0, -14985)));
                arr_5 [i_1 + 1] [i_1 + 1] [i_1] = 0;
            }
        }
    }
    var_21 = var_14;
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                {
                    var_22 = (min(var_22, 88));
                    arr_15 [i_4] [i_2] [i_2] = (((((18446744073709551599 ? 11584 : 236556552893241300))) >= (min((((var_0 && (arr_7 [i_4 - 2])))), (((arr_8 [7] [i_3]) ? 48291 : var_3))))));
                }
            }
        }
    }
    #pragma endscop
}

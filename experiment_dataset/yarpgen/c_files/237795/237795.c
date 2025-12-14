/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 + 1] [i_2] [i_0] = var_1;
                    var_11 = ((var_3 != ((var_4 ? var_2 : var_0))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 7;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                arr_12 [i_3] [i_3] = (((((arr_8 [i_4]) & ((var_3 ? -1573672434 : (arr_0 [i_4]))))) + (!2160260340214166083)));
                arr_13 [i_3] = ((~(((arr_8 [i_3 + 2]) & -91))));
                var_12 = min((((((1 ? 0 : var_7))) ? (arr_8 [i_3 + 3]) : var_3)), ((((max((arr_3 [i_3] [i_4]), 1))) >> ((((arr_11 [i_3]) < var_5))))));
                var_13 = (min(var_13, ((((~var_1) + (((((((arr_8 [i_4]) ? 191005728 : 1))) < ((var_6 ? var_3 : var_5))))))))));
            }
        }
    }
    #pragma endscop
}

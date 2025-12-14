/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_10 = (max(-4503599627370495, (max(-var_6, var_5))));
                var_11 = ((((((arr_3 [i_0] [i_1] [i_1 - 3]) ? (arr_3 [2] [i_1] [i_1 - 3]) : var_3))) ? -1896279625 : (arr_3 [i_0] [i_1] [i_1 - 3])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_12 = (max((((var_4 * (arr_1 [i_2])))), ((max((arr_11 [i_3 + 2] [i_2]), (arr_11 [i_3 + 1] [i_2]))))));
                    arr_12 [i_2] [i_3] [1] [i_4] = (max(4294967295, (arr_9 [i_2] [i_3 - 1])));
                    var_13 = (max(var_13, ((max(38564, ((-12454 ? (arr_8 [i_2] [i_2] [i_3 - 1]) : -62)))))));
                    arr_13 [i_2] [i_3] [i_3] = (((~220235569669119291) ^ ((2398687670 ? var_1 : ((0 ? var_9 : 0))))));
                }
            }
        }
    }
    #pragma endscop
}

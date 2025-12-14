/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((max(((max(222, var_15))), (((arr_2 [i_0] [i_1] [i_0]) ? var_11 : var_12)))) >> ((((-21 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_2 [i_0] [6] [i_1]))) - 684887477))));
                arr_5 [i_0] = (((!123) || ((((((87 ? 848944976 : -2123))) ? 140737488093184 : 20)))));
                var_17 = (max(((var_8 * (!var_6))), 1));
                arr_6 [10] = ((max((!-15724), var_3)));
                var_18 = var_7;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                arr_12 [3] [i_3] [i_3] = (7738464733832717489 <= 1734640866);
                arr_13 [i_2] [i_2] [i_2] = ((-(max(7918780291609212004, -var_16))));
                var_19 -= 62;
                var_20 = var_0;
                var_21 *= -var_0;
            }
        }
    }
    #pragma endscop
}

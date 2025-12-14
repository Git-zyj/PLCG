/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 = (max(((var_3 ? (min(-91, 4042041537158736463)) : (((var_6 ? var_4 : var_3))))), (((var_8 ? var_5 : 90)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (((((min((arr_5 [11] [i_1]), var_7))) * (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_1]))))))));
                var_13 = (((((~(arr_5 [i_0] [i_1])))) ? (((arr_2 [i_0] [i_1]) / var_1)) : -13508));
            }
        }
    }
    var_14 &= ((var_6 | ((((max(var_8, 14404702536550815152))) ? (21439 && var_0) : ((-63 ? 52 : var_1))))));
    #pragma endscop
}

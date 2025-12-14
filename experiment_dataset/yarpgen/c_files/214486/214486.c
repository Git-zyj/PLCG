/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (103 >> var_9);
    var_11 = ((!((max(0, 7929335953087225210)))));
    var_12 = (max(var_1, (max(3560521211, ((12571 ? var_3 : var_0))))));
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((max(var_9, ((103 / (arr_1 [i_0] [i_1])))))) ? -728434770 : 0));
                arr_5 [10] [10] [9] = ((((((arr_1 [i_0] [i_0]) & var_3))) >> (((!(((arr_2 [i_1] [i_0]) <= 728434756)))))));
                var_14 |= ((((((((arr_3 [i_0] [i_1] [11]) ? var_0 : (arr_2 [i_0 + 3] [2])))) || ((max(var_6, (arr_3 [8] [8] [i_0 + 1])))))) ? ((((var_1 / 18446744073709551598) ? var_1 : (((4294967290 || (arr_3 [i_0 + 3] [i_1] [i_1]))))))) : (arr_2 [i_0 + 2] [i_0 + 2])));
            }
        }
    }
    #pragma endscop
}

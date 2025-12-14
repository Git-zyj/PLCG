/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_7;
    var_11 -= (min(-49, var_0));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((min(((-1176238715 % (((arr_5 [11] [i_1] [i_1]) ? (arr_1 [i_1]) : 1176238714)))), ((var_2 ? (1176238714 | var_7) : (arr_1 [i_0 - 2]))))))));
                var_13 = (arr_5 [i_0 - 4] [i_1] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            {
                var_14 = ((((min((((var_5 ? var_9 : 1176238714))), (arr_10 [i_3 + 1] [i_3 - 1] [i_3 - 1])))) ? -1176238715 : var_1));
                var_15 = (min((!1176238714), ((var_7 ? (arr_8 [i_2] [i_2]) : (arr_6 [i_2] [19])))));
                arr_11 [i_2] [i_3] = 1176238719;
                arr_12 [i_3] = min((((arr_9 [i_3 + 1] [i_3 + 1] [i_2]) <= (arr_10 [i_3 + 1] [i_3 - 1] [1]))), (arr_8 [i_3 + 1] [12]));
            }
        }
    }
    #pragma endscop
}

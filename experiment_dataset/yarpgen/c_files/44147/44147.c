/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((((((!(arr_1 [i_0 - 4]))))) <= ((-28465 ? 19860 : 19860)))))));
                var_14 |= 60;
                var_15 = ((-(((arr_1 [i_0 + 1]) / (arr_1 [i_0 - 1])))));
                var_16 -= (!-19860);
                var_17 = (max(var_17, (arr_2 [i_0 - 1])));
            }
        }
    }
    var_18 = (min(((min(((var_0 ? 10365 : 22)), ((min(var_0, var_3)))))), (var_5 + var_5)));
    var_19 = (max((!var_7), (((((25175 ? 27723 : 19860))) ? ((50 ? var_7 : var_12)) : ((var_3 ? var_2 : var_6))))));
    var_20 = var_3;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_21 *= (~-22);
                    arr_13 [i_2] [i_2] [i_4] [i_4] = ((!((((arr_3 [i_3 - 1]) ? var_2 : (arr_7 [i_3 + 1] [i_3 - 1]))))));
                    arr_14 [i_2] [i_3] [i_4] = (arr_12 [i_2] [i_4]);
                    var_22 = ((!(arr_8 [i_4] [i_4])));
                    var_23 = (min(var_23, ((((-8453 * 19860) ? (arr_7 [i_3 - 1] [i_4]) : (min((((arr_8 [i_2] [i_3]) ? (arr_9 [i_2] [i_3] [i_2]) : (arr_3 [i_3]))), ((min(-19868, (arr_4 [i_4] [i_3] [i_2])))))))))));
                }
            }
        }
    }
    #pragma endscop
}

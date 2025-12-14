/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_10 [i_1] = 1;
                    arr_11 [i_1] = (max(((((min(var_10, 2697589699))) ? 1597377601 : ((((arr_4 [i_1] [5] [i_1]) < 0))))), ((((((arr_6 [i_1]) ? (arr_1 [i_0]) : var_1)) < ((185 ? 827343164 : var_4)))))));
                    var_13 = (max(var_13, (((+((((((arr_8 [i_0]) ? -3781 : var_11))) ? (arr_9 [i_2 + 1] [i_2 + 1] [i_2] [i_0]) : 14)))))));
                }
            }
        }
    }
    var_14 = (max(var_6, ((((max(27495, var_9))) ? (min(var_10, 8191)) : var_12))));
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_15 = ((((max((var_6 < 1), 206))) ? (((((var_5 ? (arr_15 [i_3] [i_4] [i_4]) : var_7))) ? 1 : 18261415735993569542)) : ((((arr_0 [i_3 - 3]) ? 1216735064 : 3226577335)))));
                arr_17 [i_4] = (((1 ? 18261415735993569542 : 3226577335)));
            }
        }
    }
    #pragma endscop
}

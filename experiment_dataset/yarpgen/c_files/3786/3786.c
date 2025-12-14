/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2] = (arr_7 [i_2]);
                        arr_10 [i_2] = (min((((!((max(var_9, 3395092417)))))), (((9223372036854775801 && 36) ? ((((arr_6 [i_3] [i_2] [i_0] [i_0]) && var_5))) : (max(var_3, var_8))))));
                    }
                    var_11 = ((((min(((((arr_3 [7] [i_1] [i_1]) <= var_6))), ((var_10 ? 4294967283 : var_2))))) ? ((max((((!(arr_5 [i_0] [i_1] [i_0])))), ((46614 ? var_7 : var_6))))) : ((((min(18916, 18916))) ? (var_7 % var_9) : var_0))));
                    arr_11 [i_0] [i_1] [i_2] |= (max(((-(max(150, 997580135)))), ((((var_4 % 189) >= 2)))));
                }
            }
        }
    }
    var_12 = 994045556;
    #pragma endscop
}

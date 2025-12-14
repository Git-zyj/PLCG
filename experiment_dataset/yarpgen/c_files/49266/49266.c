/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((12847241402535136663 ? 4511670304826515171 : 269885016)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = -var_6;
                arr_5 [i_0] [i_0] = (i_0 % 2 == 0) ? (min((min(((min(var_6, var_3))), (arr_3 [i_0 + 1]))), ((((arr_4 [i_0] [i_0] [i_0 - 1]) >> (((arr_4 [i_0] [i_0] [i_0 + 1]) - 1666))))))) : (min((min(((min(var_6, var_3))), (arr_3 [i_0 + 1]))), ((((arr_4 [i_0] [i_0] [i_0 - 1]) >> (((((arr_4 [i_0] [i_0] [i_0 + 1]) - 1666)) - 17980)))))));
            }
        }
    }
    var_17 = ((var_13 ? var_12 : 29891));
    #pragma endscop
}

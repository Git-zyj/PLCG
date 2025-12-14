/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (~0);
    var_13 = 9223372036854775807;
    var_14 = (236 > 5373);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (((((-(min(var_4, (arr_1 [i_0] [i_1])))))) ? (var_8 & var_4) : var_10));
                arr_7 [i_0] = ((((min(15872, var_11))) ? (arr_1 [i_0] [i_1]) : var_7));
                arr_8 [i_0] = (((((9223372036854775807 ? (((((arr_0 [i_0] [i_1]) != 105)))) : (((arr_3 [i_0]) ? var_7 : 10979))))) ? (((((((64 ? 0 : -5))) && var_8)))) : (((((var_4 ? var_7 : (arr_4 [i_0] [i_1 - 1])))) ? (((arr_2 [i_0] [i_0] [i_0]) ? 8104289087467816139 : 124)) : 7879))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, var_1));
                            arr_14 [i_3] [i_0] [i_1] [i_0] [i_0] = (!-1295884909264415477);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

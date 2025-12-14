/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_14 *= ((!((max((arr_1 [i_0 + 1] [i_1 + 2]), (-9223372036854775807 - 1))))));
                var_15 = (((((-(arr_3 [i_0 - 1])))) ? var_12 : (((!(!var_1))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            {
                arr_9 [i_2] [i_3] [i_3] = (arr_8 [i_2] [i_3]);
                var_16 = (min(var_16, (((-(((arr_7 [i_2] [i_3 - 1]) >> ((((~(arr_5 [i_2]))) - 2770983893)))))))));
                var_17 = ((((arr_8 [i_3 - 2] [i_3 + 1]) + 21634)));
            }
        }
    }
    #pragma endscop
}

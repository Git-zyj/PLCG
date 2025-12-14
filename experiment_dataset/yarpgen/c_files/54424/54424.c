/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = (min((((((0 ? 18446744073709551615 : 0)) == 1))), (arr_0 [i_0 - 1])));
                    var_19 = (min(var_19, ((((arr_2 [4] [i_2] [i_2]) << (((arr_3 [i_0] [i_0] [i_2]) + 54)))))));
                    var_20 |= (max(((((arr_0 [i_0]) >> (arr_6 [i_0] [i_0])))), (((((arr_3 [i_0] [i_1] [1]) || (arr_5 [i_0] [i_1] [i_2])))))));
                    var_21 = (min(var_21, 249));
                }
            }
        }
    }
    var_22 -= (((((max(var_9, var_10))) && var_4)));
    #pragma endscop
}

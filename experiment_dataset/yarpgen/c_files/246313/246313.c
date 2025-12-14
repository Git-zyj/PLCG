/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = ((476565919 * (((((1 ? 3519072770 : 3634680896222721067))) / ((-476565928 ? -2269605789216195477 : 18446744073709551606))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((((((2140382845 ? 3396703877 : (arr_2 [i_0] [i_0]))) + ((max(4, 2147483647)))))) && ((max(65524, (!var_14))))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_0] = (min(((((max(4999724229868296720, var_11))) ? (arr_2 [i_0] [i_0]) : ((2165108949 ? (arr_7 [3] [i_1] [i_1] [3]) : var_12)))), 1));
                    arr_10 [i_2] [i_0] [i_0] = (arr_6 [i_1] [i_1] [i_2]);
                    var_17 ^= (!-476565919);
                }
            }
        }
    }
    var_18 ^= ((((max((var_4 + var_6), ((var_14 ? 4686895562348669042 : var_14))))) ? ((1 ? 65531 : -var_14)) : ((-var_12 ? var_1 : ((-32765 ? 2207 : 32767))))));
    #pragma endscop
}

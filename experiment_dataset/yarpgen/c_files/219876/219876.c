/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_10 -= (arr_0 [16]);
        var_11 = (((((arr_0 [i_0]) ? var_7 : (arr_1 [i_0]))) + ((((arr_1 [0]) == 1)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = (min(2655015470, 1639951804));
                    var_13 = (min(var_13, (min((((!(arr_8 [i_0] [i_1 - 1] [13])))), (min((arr_1 [i_0]), (arr_8 [i_0] [i_1] [i_0])))))));
                }
            }
        }
    }
    var_14 += ((((min((var_3 * var_6), ((min(var_9, var_9)))))) || (((1 ? 1 : 14594)))));
    #pragma endscop
}

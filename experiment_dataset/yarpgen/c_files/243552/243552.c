/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 += (((min(7447583962787989034, 15)) >= ((min((arr_2 [i_0] [i_1] [i_0]), (arr_1 [i_0]))))));
                arr_4 [i_0] [i_0] [i_0] = min((arr_3 [i_0]), (((min(var_2, 1)))));
                var_14 *= (((1 > 0) == (((12 > (((max(9, -123)))))))));
            }
        }
    }
    var_15 += (((var_0 || var_10) ? var_8 : ((var_1 * (((var_11 ? -83 : var_7)))))));
    var_16 = (var_0 <= var_11);
    var_17 = (max(var_17, var_9));
    #pragma endscop
}

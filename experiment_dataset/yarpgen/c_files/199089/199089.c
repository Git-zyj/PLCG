/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (!1)));
                    var_12 *= (((((-(((arr_3 [i_1 - 3] [i_1 - 3] [11]) ? 10188976323570481033 : (arr_6 [i_0] [i_2])))))) ? (((0 >= (arr_3 [i_0] [i_1] [i_2])))) : (((!(arr_4 [i_0]))))));
                    var_13 = (min(var_13, ((((((arr_0 [i_0] [6]) + 2147483647)) >> (((max((arr_5 [i_0] [i_1 - 2] [i_2]), (arr_6 [i_2] [i_1 + 2]))) - 35679)))))));
                }
            }
        }
    }
    var_14 = (min(var_14, (((var_7 >= var_9) >= var_0))));
    #pragma endscop
}

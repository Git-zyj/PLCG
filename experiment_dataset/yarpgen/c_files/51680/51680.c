/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((!((min(((var_13 ? 59841 : var_9)), (((7 || (arr_3 [i_0] [i_0])))))))));
                arr_5 [i_0] [i_1] = (min(4, var_2));
                var_14 = ((-(((arr_2 [i_0] [i_0] [2]) >> ((((var_12 ? 9063798025889336505 : var_13)) - 9063798025889336492))))));
                arr_6 [4] &= ((~((16 ? 24 : 31936))));
            }
        }
    }
    var_15 &= (8 % 268435424);
    #pragma endscop
}

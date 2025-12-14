/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_2));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((((((((arr_7 [i_0] [i_1] [i_0] [i_0]) ? -79 : 511916089258498513))) || 17934827984451053112)) ? (max(((17934827984451053112 ? var_9 : 1891171857991354116)), 113)) : (arr_1 [i_0 - 1])));
                    var_11 = (max(var_11, 21239));
                }
            }
        }
    }
    var_12 *= ((var_1 ? var_6 : (min(var_5, var_6))));
    #pragma endscop
}

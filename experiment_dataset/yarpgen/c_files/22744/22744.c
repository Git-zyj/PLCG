/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (54 * (((!(101777669 || 1048124698)))));
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_8 [i_0] = (((arr_5 [i_1 - 1] [i_1 - 1]) ? -2275531406336681614 : (((((var_13 ? (arr_7 [i_0]) : (arr_1 [i_0]))))))));
                arr_9 [i_0] [i_0] [i_1 + 1] = 239;
                arr_10 [i_0] [i_0] [i_0] = (((((min((arr_1 [i_0]), (arr_6 [i_0] [11])))) ? (((8897 ? (arr_5 [i_1] [i_0]) : var_0))) : ((var_12 ? var_7 : var_5)))));
                arr_11 [i_0] = (max((var_1 / 6886719613434001003), ((max((min((arr_4 [i_0] [i_0]), var_8)), 10)))));
            }
        }
    }
    #pragma endscop
}

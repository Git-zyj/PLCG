/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!30108);
    var_18 |= ((var_6 ? var_10 : ((0 ? var_16 : ((var_13 ? var_11 : -1955134172))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) ? (((arr_1 [i_0]) ? var_11 : var_16)) : 22270));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_19 = 17971;
                        arr_9 [0] [0] |= (((!-56) ? 0 : ((9 ? 18446744073709551599 : 2147483647))));
                        arr_10 [1] |= ((-(arr_4 [i_0] [i_1] [i_1 - 2])));
                        var_20 = (min(var_20, (arr_4 [i_0] [i_0] [0])));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_21 |= 3027261328742928211;
        arr_13 [1] = (max((((arr_12 [i_4]) / (arr_12 [i_4]))), (max((arr_12 [i_4]), (arr_11 [i_4])))));
    }
    var_22 = (((((4 ? 15429598380033843310 : 548895714))) ? (((!(((1960724588 ? 3017145693675708306 : 3017145693675708300)))))) : var_3));
    #pragma endscop
}

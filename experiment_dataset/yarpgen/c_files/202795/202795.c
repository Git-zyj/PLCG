/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = (((max((1 - 1), ((var_13 + (arr_1 [i_0] [i_0]))))) - (arr_0 [i_0])));
        var_16 -= 18446744073709551596;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            {

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    arr_10 [i_1] [i_2] = (arr_4 [13]);
                    arr_11 [i_1] = ((!((min(var_10, (arr_1 [1] [i_3]))))));
                }
                var_17 = (((arr_2 [i_2 - 2] [i_2 - 2]) ? ((max((arr_5 [i_2 - 2] [i_2]), (arr_2 [i_2 + 1] [i_2 + 1])))) : (131 | 65535)));
                arr_12 [i_1] [i_1] = ((((((max((arr_2 [i_1] [i_1]), 1))) + (arr_7 [i_2 - 1]))) >= (20 != 1)));
                var_18 = -127;
            }
        }
    }
    #pragma endscop
}

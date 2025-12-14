/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = (arr_1 [i_0]);
        arr_2 [i_0] = (arr_1 [i_0]);
        var_15 = ((1 ? 31 : 40));
        var_16 = ((min((arr_1 [i_0]), ((((arr_0 [i_0]) <= -34))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_17 = (max(var_17, 7162201147108133722));
        var_18 ^= (((((((arr_1 [i_1]) < (arr_1 [i_1]))))) == (arr_3 [i_1] [i_1])));
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                arr_9 [8] [i_2] [i_2 - 2] = (((1 ? 1 : (arr_3 [i_2 - 3] [i_2 - 3]))) % (arr_3 [0] [i_2 - 3]));
                arr_10 [i_2] [i_3] = (((max(8606, -52))) ? var_3 : (((-(arr_1 [i_2 + 3])))));
                var_19 -= (!1);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_20 = ((((min((arr_0 [i_5]), (arr_0 [i_2 + 1])))) < (((-32758 - 1) / (arr_0 [i_4])))));
                            var_21 = 6;
                        }
                    }
                }
            }
        }
    }
    var_22 = ((-(12789686937430549523 && 1)));
    #pragma endscop
}

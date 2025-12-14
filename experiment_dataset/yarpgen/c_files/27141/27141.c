/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((-(((-56 ^ 0) ? var_1 : 55))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_11 ^= 581838793;
        var_12 = (max(var_12, (((((3713128503 != (arr_1 [6]))) ? 28672 : ((39 ? (arr_1 [4]) : -56)))))));
        var_13 = (arr_0 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        var_14 += (arr_3 [i_1] [9]);

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_15 = (min(var_15, (((-(((((56 ? (arr_10 [i_4] [i_1] [i_2] [i_3 + 1]) : (arr_1 [i_4])))) ? (arr_2 [4] [i_1] [i_2]) : 64)))))));
                            var_16 -= var_9;
                            var_17 |= (min(0, 125));
                        }
                        var_18 = -2147467264;
                        arr_14 [i_0] [i_1] = 220;
                    }
                }
            }
            var_19 = (min(var_19, ((min((((min(var_8, 43)))), (max((129 % var_6), (((arr_12 [i_0] [i_0] [i_0] [i_0 + 1] [i_1] [i_0 + 1]) ? (arr_12 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1]) : var_4)))))))));
            arr_15 [i_0] = ((-(arr_4 [11] [17] [i_1] [11])));
        }
    }
    #pragma endscop
}

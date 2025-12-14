/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_10 = (max(var_10, (arr_0 [i_0])));
        var_11 = (((64 ? -71 : 17885315239392553707)));
        var_12 = (arr_2 [i_0]);
        var_13 = (max(var_13, ((var_8 ? var_0 : (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_14 *= ((-(((!(arr_0 [i_1]))))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_1] = (min(((~(~31))), -19));
                        var_15 = (min(var_15, (((((((arr_1 [i_2 + 2] [i_2 + 2]) ? (arr_1 [i_2 - 2] [i_2]) : (arr_1 [i_2 + 3] [i_2])))) && ((min(var_8, (-62 + var_3)))))))));
                    }
                }
            }
        }
        var_16 |= (!((((arr_11 [i_1] [i_1] [i_1]) ? 4294967272 : (arr_11 [i_1] [i_1] [i_1])))));
    }
    var_17 = ((-19 | ((((min(var_0, var_5))) ? var_8 : ((max(var_2, -19)))))));

    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_18 = -1;
        arr_18 [i_5] [6] = ((!((max(var_0, ((2425202780 ? 16931744062702516186 : 0)))))));
    }
    #pragma endscop
}

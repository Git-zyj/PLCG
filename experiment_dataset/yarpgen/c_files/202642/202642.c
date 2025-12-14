/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [0] [i_1] [i_2 - 1] [i_3] [i_3] = 57489;
                        var_15 += (((arr_3 [i_3] [i_3]) ? 8046 : 8050));
                        var_16 = (arr_5 [i_0] [i_0] [1]);
                        var_17 = (~8047);
                    }
                }
            }
        }
        arr_12 [i_0] = (((arr_10 [i_0] [i_0] [i_0] [4]) / -983614340861819972));
        var_18 = 2289018979;
        var_19 &= (((((2289018978 ? (arr_9 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [8] [i_0 - 1])))) || (arr_9 [i_0] [i_0 + 2] [i_0])));
        arr_13 [i_0] |= ((((((arr_2 [4]) ? (arr_8 [10]) : (arr_8 [6])))) ? ((-1979326715 ? -1328013345917837322 : -800649724)) : ((((arr_10 [i_0] [i_0 - 1] [i_0 + 3] [10]) ? (arr_3 [10] [10]) : (arr_7 [i_0 - 2] [i_0] [1]))))));
    }
    var_20 |= (min((8039 + 146), (var_2 / var_4)));
    #pragma endscop
}

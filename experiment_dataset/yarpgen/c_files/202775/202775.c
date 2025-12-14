/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_10 &= (+(((-1079470870 <= (((arr_8 [i_0] [i_0] [i_0]) / 2138))))));
                arr_11 [i_0] [19] [i_2] [i_1] = ((((~(arr_1 [i_1]))) | (arr_5 [i_1] [15] [15])));
                arr_12 [i_2] [i_1] [i_0] = (~var_0);
            }
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_11 = (arr_15 [i_3] [i_3]);
                arr_16 [i_0] [i_0] [i_0] [i_0] = -1079470870;
            }
            var_12 = (arr_6 [i_1] [2] [i_1]);
        }
        arr_17 [i_0] = ((!(arr_6 [i_0] [i_0] [i_0])));
    }
    var_13 = 1;
    #pragma endscop
}

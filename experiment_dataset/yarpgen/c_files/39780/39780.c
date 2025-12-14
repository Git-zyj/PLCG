/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        arr_12 [i_1] [i_1] [21] [13] = (arr_8 [i_0] [i_1]);
                        arr_13 [i_0] [i_0] [i_1] [i_2] [6] = ((1 ? ((~(arr_5 [i_3]))) : var_14));
                        arr_14 [i_0] [i_0] [i_1] [i_3] [i_2] = 49070;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_17 [i_0 + 1] [i_1] [14] [i_1] = (arr_6 [i_1]);
                        var_16 = var_7;
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        var_17 = ((!(arr_1 [i_0 - 3])));
                        var_18 = ((((!(arr_10 [i_0] [i_0] [11] [i_5] [i_5] [i_0])))));
                        var_19 = (max(var_19, (!-1035629269483508976)));
                    }
                    arr_20 [i_0] [i_0] [i_1] [i_1] = ((-(((((878425879 ? 2723576904106918120 : (arr_18 [i_0] [i_0] [i_0] [i_0 + 1]))) <= (min((arr_1 [i_2]), -2723576904106918121)))))));
                }
            }
        }
    }
    var_20 = ((!((!(!var_2)))));
    #pragma endscop
}

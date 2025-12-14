/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = ((((((min((arr_0 [i_0]), (arr_0 [i_0])))) + 2147483647)) << ((((((max((arr_0 [i_0]), (arr_0 [i_0])))) + 46)) - 2))));
        arr_2 [i_0] [i_0] = (min(((((arr_0 [i_0]) == (((!(arr_0 [i_0]))))))), (((arr_1 [i_0]) << ((((~(arr_0 [i_0]))) - 24))))));
        var_18 = -9789021933585106343;
        var_19 = (max((~var_0), var_11));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = (min(-1203476541, (arr_7 [i_0])));
                    arr_9 [i_1] [i_2] = (max((max((arr_4 [14] [0] [i_2]), (arr_4 [i_0] [1] [i_0]))), ((-(arr_4 [i_2] [i_1] [i_0])))));
                }
            }
        }
    }
    var_21 = ((~(var_4 >= 7279)));
    var_22 = var_7;
    #pragma endscop
}

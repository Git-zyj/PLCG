/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_5, (((((((var_8 ? -1941043509 : var_7)) + 2147483647)) << var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_2] = (arr_6 [i_0] [i_0]);
                    var_11 = (~-var_4);
                    var_12 = ((~(arr_2 [i_0])));
                }
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    arr_10 [i_0] [i_3 - 1] = (((min((((arr_4 [i_0]) ? (arr_6 [i_0 - 1] [i_0]) : 1941043509)), (arr_8 [i_0] [i_0 - 1] [i_0 + 1]))) * ((max((((arr_6 [i_3] [0]) ? -433 : (arr_2 [i_0]))), (arr_4 [i_0 + 1]))))));
                    arr_11 [i_0] [12] [7] [i_0] = var_0;
                }
                arr_12 [i_0] = (((min(-1, 228)) <= (arr_9 [i_0] [i_0])));
                var_13 = (arr_6 [i_0] [i_1 - 2]);
            }
        }
    }
    var_14 += (var_0 <= var_4);
    #pragma endscop
}

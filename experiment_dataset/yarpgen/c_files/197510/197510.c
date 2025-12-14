/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((13964 ? 13964 : 18));

    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = min(((min((arr_2 [i_0 + 1] [i_0 - 1]), var_3))), (((arr_2 [i_0 + 1] [i_0 - 1]) ? -13964 : var_14)));
        var_16 = (min(var_16, 13964));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    {
                        var_17 = var_7;
                        arr_16 [i_3] [1] [4] = ((-(((arr_13 [i_1 - 1] [i_2] [i_3]) ? (arr_13 [i_1 - 1] [i_1 - 1] [i_3]) : (arr_13 [11] [i_3 + 1] [i_3])))));
                        var_18 = 13960;
                        arr_17 [i_1] [17] [i_2] [i_3] [i_1] [i_3] = (arr_4 [2]);
                    }
                }
            }
        }
        var_19 = (min(var_19, (((13962 ? (var_4 - -13961) : -19846)))));
    }
    #pragma endscop
}

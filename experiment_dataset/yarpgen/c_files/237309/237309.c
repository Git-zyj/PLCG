/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_14 = (min(var_5, ((((0 ? var_11 : var_8))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_15 = (min(var_15, (arr_0 [i_1])));

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                arr_9 [7] [13] [i_2] [i_2] = ((-(arr_4 [i_0 - 3])));
                var_16 = (var_1 >= ((((arr_3 [14] [i_2] [i_2]) != 3))));
            }
        }
        var_17 -= (arr_4 [i_0]);
        var_18 += (((!((max(1623205955, (arr_3 [i_0] [i_0 - 4] [i_0])))))) ? 2671761337 : 31843);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_19 = var_10;
                        arr_17 [i_3] [i_3] = ((~((252 >> (((arr_0 [i_0 + 1]) >> (var_5 - 55829)))))));
                    }
                }
            }
        }
    }
    for (int i_6 = 4; i_6 < 14;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = 5899;
        arr_23 [i_6] = ((((-(arr_1 [3] [i_6])))));
    }
    var_20 = var_2;
    #pragma endscop
}

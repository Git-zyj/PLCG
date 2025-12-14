/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(13830556037947849477, var_9));
    var_21 = (max(var_15, 0));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_22 = (arr_4 [i_0] [i_0]);
            arr_5 [i_0] [i_0] [i_1] = (max(3963503219, var_7));
        }
        arr_6 [i_0] = ((((-(arr_4 [i_0] [i_0]))) != ((~((min(6, (arr_1 [i_0] [i_0]))))))));
        arr_7 [i_0] [i_0] = 1;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_15 [i_0] [i_2] [i_3] [i_0] = (min(var_8, ((~(min(var_16, 3963503195))))));
                        var_23 = (arr_10 [i_0]);
                        arr_16 [i_2] [i_2] [i_2] [i_0] [i_2] [i_2] = ((~(arr_14 [i_0] [i_2] [i_3] [6])));
                        arr_17 [i_0] = (max((arr_11 [i_0] [i_0]), (max(3963503219, 19777))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

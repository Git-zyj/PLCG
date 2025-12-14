/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (min(var_4, var_2));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_15 = var_3;
                    arr_8 [2] [i_1] [i_0] = (((!(arr_1 [i_0 - 1] [i_0 - 2]))));
                    var_16 = (max(var_16, (min(var_9, (max(var_0, ((((arr_3 [i_0 + 1]) - 3606348385)))))))));
                    arr_9 [i_0] [i_1] [4] [i_2] = (((min((arr_6 [i_0] [i_0] [i_0] [i_0 - 3]), (arr_7 [i_0]))) & ((~(max(var_6, var_11))))));
                }
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    arr_13 [i_3] |= (arr_3 [i_0 - 2]);
                    var_17 &= (((arr_6 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_3 + 1]) / (((arr_6 [i_0 + 1] [i_0 - 2] [i_0 - 3] [i_3 - 2]) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (arr_6 [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_3 - 2])))));
                    var_18 = (((-(max(4294967295, 4602678819172646912)))));
                }
                var_19 = 706;
            }
        }
    }
    var_20 = (max(var_20, var_11));
    #pragma endscop
}

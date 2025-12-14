/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] &= (arr_0 [i_0] [i_0]);
        var_12 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_2] [i_1] [i_2] [i_3] [4] = (arr_5 [i_1] [i_4]);
                            var_13 = (((-772521637 ? (((arr_6 [i_2] [i_1] [i_2] [i_2]) ? (arr_1 [i_2]) : var_2)) : (((var_11 << (9 - 9)))))));
                        }
                    }
                }
            }
            var_14 -= (max(((((arr_5 [i_1] [i_1]) - var_2))), (max(((4294967282 ? 4294967283 : 31)), 127))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_15 = ((!(arr_5 [i_5] [i_1])));
                        var_16 = (var_6 - 65510);
                        arr_19 [i_0] [i_0] [i_0] [12] [i_0] [i_0] = (var_7 + var_10);
                    }
                }
            }
            var_17 -= ((((((var_6 ? 75 : var_5))) ? (1081852773 >= 2147483647) : var_5)));
        }
    }
    var_18 &= (~var_1);
    var_19 = (-(((4294967285 && (((4294967279 ? 2442 : 65535)))))));
    #pragma endscop
}

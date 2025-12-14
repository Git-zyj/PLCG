/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_12 = min((arr_1 [i_0]), 173);
        var_13 -= (min((min(3385526521671312071, ((min(64, (arr_3 [i_0 - 3] [0])))))), ((max((arr_0 [i_0 - 3] [i_0 - 1]), 207)))));
        var_14 -= 187;
        var_15 = min(((max((arr_2 [i_0] [i_0 - 2]), (arr_1 [4])))), (min(32767, 233)));
        arr_4 [i_0] = 99;
    }
    var_16 = (max((min(30, 18)), var_6));

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    arr_14 [i_1] [i_1] [i_3] = (~203);
                    var_17 = arr_13 [10] [i_3];
                }
            }
        }
        arr_15 [i_1] = 30;
        var_18 *= (min((((arr_5 [i_1] [i_1]) ? 187 : 31)), (!30)));
    }
    var_19 = var_2;
    #pragma endscop
}

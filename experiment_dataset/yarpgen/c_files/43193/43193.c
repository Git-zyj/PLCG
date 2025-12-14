/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(0, (((arr_0 [i_0 + 1] [i_0 + 1]) / 3189))));
        var_13 ^= (((arr_0 [i_0] [i_0 - 1]) + var_5));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] |= ((((((arr_0 [i_0 + 1] [i_0 + 1]) ? (arr_2 [i_0 + 1] [i_1]) : (arr_0 [i_0 + 1] [i_0])))) && -var_5));
                    arr_9 [i_2] [i_1] [i_0] = (((((22433 ? ((min(1, 1))) : -66))) ? (arr_5 [i_1]) : (arr_6 [i_0] [i_1] [i_2])));
                    arr_10 [i_0] [i_0 + 1] [i_0] [1] = (-46 || 60229);
                }
            }
        }
    }
    var_14 = (min(var_7, (((((min(1, var_8))) ? var_1 : (max(var_4, 1073741823)))))));
    #pragma endscop
}

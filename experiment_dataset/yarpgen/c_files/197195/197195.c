/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(63, 2386242850));

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_12 |= ((!((!(arr_1 [2])))));
        var_13 = ((2386242844 && ((!(!8294)))));
        var_14 = ((-(arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 15;i_4 += 1)
                {
                    {
                        var_15 = 2386242842;
                        arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] = (~(arr_4 [i_1 - 1]));
                        arr_14 [i_1] [i_2] [i_4] [i_4 - 2] [i_4] [i_1] = 1908724424;
                        var_16 *= ((1908724424 ? 2058067130 : 5504077982686876260));
                    }
                }
            }
        }
        arr_15 [i_1] = (((((arr_4 [4]) * (arr_7 [i_1] [i_1])))) ? (arr_0 [i_1 + 2]) : (((arr_6 [i_1]) - var_9)));
    }
    #pragma endscop
}

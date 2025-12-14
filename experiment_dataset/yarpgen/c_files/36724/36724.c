/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_19 |= (~-123003669749070525);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_20 = -2790713463694908328;
                        arr_8 [5] [i_2] [i_1] [i_3] [i_0] = ((~(~8191)));
                        arr_9 [i_0] [i_1] [i_2] [i_3] = (~67108863);
                    }
                }
            }
        }
        arr_10 [10] [i_0] |= (107 ^ (!18446744073709551615));
        var_21 = -624095855;
        var_22 -= ((!(~2147483647)));
    }
    var_23 = (((((((79 >> (-1 + 5))) >> (var_12 - 34)))) / var_11));
    #pragma endscop
}

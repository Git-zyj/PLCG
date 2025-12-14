/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min(var_7, (((-1 + 2147483647) << (var_5 - 241))))) >= var_6));
    var_12 = (min(var_12, (!1)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = (min(var_13, -1972665926));
        arr_4 [i_0] = (arr_3 [i_0] [21]);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_14 |= ((~(arr_5 [i_0])));
                var_15 ^= (arr_10 [i_1] [i_2] [i_1] [i_0]);
            }
            var_16 -= (~(max((-29706 | var_8), (~7))));
        }

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_17 = (min(var_17, (!-122)));
            arr_13 [i_0] [i_0] [i_3] = arr_6 [i_0] [i_0] [i_3];
        }
    }
    var_18 = var_5;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (max(var_1, (min(var_1, var_10))));
    var_16 |= (~var_13);

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] = (arr_1 [i_0 + 1]);

        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            arr_9 [i_0] [i_1 - 2] |= (max(0, 1));
            var_17 = (max(var_17, (((((max((arr_6 [i_0 + 1] [i_1 - 2]), (arr_5 [i_0] [i_0] [i_1 - 1])))) ? ((((!(arr_5 [i_0 + 1] [i_1 + 1] [i_1]))))) : (max((arr_8 [i_1] [i_1] [i_1]), (min(var_6, var_10)))))))));
            var_18 = 1;
            arr_10 [i_0] [i_1] = (1 % var_11);
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            arr_14 [i_2] = (arr_13 [i_0] [i_2 - 1]);
            var_19 -= (((0 ? 22 : 1)));
        }
    }
    #pragma endscop
}

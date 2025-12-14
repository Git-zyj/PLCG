/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((126 ? -470213687593125404 : (max((arr_2 [i_0]), 18446744073709551615))));
        arr_4 [i_0] = 122;

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_8 [i_1] = (((min(131, -260945930))) ? 1 : 14172010841992680852);
            arr_9 [i_1] [0] = (max(549755813887, -3107748791606463688));
            arr_10 [i_0] [6] [6] = ((min((((-2147483647 - 1) ? 13433694993478655011 : -8783593377368286279)), var_6)));
        }
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_13 [8] [8] = var_7;
        arr_14 [i_2] [i_2] = -1159665912;
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((111 ? 4 : (((0 ? var_12 : 1692389955))))), ((17 / ((81 ? var_4 : 53))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_21 &= 8;
        var_22 = (arr_0 [i_0 - 1]);
        arr_2 [i_0] = 665910084;
        var_23 = ((((197 ? -69 : 48035))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = (3402358037 ? 0 : 1);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_9 [i_1] [i_1] [i_2] = (-(arr_4 [i_1]));
            var_24 = ((119 ? (36470 > 1249959189) : ((-28998 ? 186 : 2147483647))));
        }
    }
    for (int i_3 = 4; i_3 < 18;i_3 += 1)
    {
        var_25 = 69;
        var_26 = 0;
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = ((min(0, var_2)));
            var_16 += (!var_1);
            var_17 = (1 / 2408931702057846184);
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_9 [i_0] [i_2] [i_0] = (((arr_3 [i_2] [i_0] [i_0]) >> (((arr_3 [i_0] [i_2] [i_0]) - 4025445903805454793))));
            var_18 = (((arr_4 [i_0]) ? var_10 : (arr_4 [i_0])));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_12 [i_3] [i_0] [i_0] = var_8;
            var_19 = (min(((var_1 ? (arr_4 [i_0]) : (arr_4 [i_0]))), (!0)));
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_20 = var_13;

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            arr_17 [i_5] = 2408931702057846181;
            arr_18 [i_4] [i_5] = (min(var_8, ((475874923 && (arr_1 [i_4])))));
            arr_19 [i_4] [i_5] [i_5] &= (((0 == 3819092373) >> (((arr_16 [i_5]) - 218))));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_21 *= (((arr_8 [i_6] [i_6]) % 2977668762));
        var_22 = var_11;
        arr_22 [i_6] [i_6] = 15872;
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_3 && ((((((1 ? 1 : var_5))) ? -1 : ((31757 ? var_6 : 4095)))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 += ((((((arr_0 [i_0] [i_0]) / -1116501815))) ? (~1) : (arr_1 [i_0] [i_0])));
        arr_2 [i_0] [i_0] = (((((-9819 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? ((((31757 >= (arr_1 [i_0] [i_0]))))) : (((arr_1 [i_0] [i_0]) % (arr_1 [i_0] [i_0])))));
        var_12 = (max(var_12, (arr_1 [i_0] [i_0])));
        arr_3 [i_0] = ((arr_1 [i_0] [i_0]) ? ((min(1, 1))) : ((((arr_1 [i_0] [i_0]) > (arr_1 [i_0] [i_0])))));
    }

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_13 = (min(var_13, (((3247777476105322058 ? 255 : (arr_0 [i_1] [i_1]))))));
        arr_6 [i_1] = ((((((((arr_4 [i_1] [i_1]) ? (arr_1 [i_1] [i_1]) : var_0)) / (((225 ? var_0 : -31781)))))) ? var_1 : (1 || 1)));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_14 = (((arr_9 [i_3]) ? (arr_9 [i_3]) : -107));
            var_15 = ((var_0 ? 224 : (arr_7 [i_2] [i_2])));
            var_16 = ((((!(arr_10 [i_2]))) ? (((arr_10 [i_2]) ? (arr_1 [i_2] [i_2]) : var_9)) : 1));
        }
        var_17 = ((((((((7398160960513959545 & (arr_1 [i_2] [i_2])))) ? var_9 : ((227 ? (arr_0 [i_2] [i_2]) : (arr_11 [1])))))) ? ((0 - (((arr_7 [i_2] [i_2]) ? 2281103265764571856 : (arr_8 [i_2]))))) : (((((arr_11 [2]) <= (arr_11 [22])))))));
        arr_13 [i_2] [i_2] = (((-22870 * 7) ? (!24692) : (arr_12 [18])));
        arr_14 [i_2] &= (1 != 0);
    }
    #pragma endscop
}

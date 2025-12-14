/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_14 |= (min((min((min(-23645, (arr_0 [i_0]))), (arr_0 [i_0 - 2]))), (~258889034)));
        var_15 = 2241737;
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_16 |= ((47207 ? 56 : 0));
        arr_5 [i_1] = (((~(min(1099867314, 35)))));
        var_17 = 50;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_8 [i_2] = (~8791);
        arr_9 [i_2] = (!6989715738315835455);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_18 = arr_12 [15];
        var_19 += ((!(((1 ? 1 : 351389573)))));
        arr_14 [i_3] [i_3] = arr_0 [i_3];
    }
    var_20 = 39969;

    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        arr_18 [i_4] = ((var_2 + (~-8973651623388040550)));
        var_21 = ((1542697259145266176 <= (((93901558 ? 208 : 29187)))));
        arr_19 [i_4 - 2] = (min((arr_0 [i_4 + 2]), (~267512421)));
        var_22 = (!(((arr_16 [i_4 + 2]) <= (arr_16 [i_4 + 1]))));

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_23 = ((((-8991 ? -4039282213105033673 : (arr_1 [i_5] [i_4 + 2])))) ? (min(3487191958820302903, 20866)) : (~-1));
            var_24 = ((-((((var_5 << (34357 - 34347))) | var_11))));
        }
    }
    #pragma endscop
}

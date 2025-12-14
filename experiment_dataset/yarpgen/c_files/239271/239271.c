/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((!(3706469477 && 150))) || (((-1678692420 ? (1678692419 && 7298992325845418942) : ((var_0 ? 10293395144873338629 : 75)))))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_12 = (min((((((var_1 ? 0 : -6327997205118675468)) > (((63950 ? 1 : 3354696447)))))), (((min(7186, 4930027441924867612)) + 181))));
        arr_4 [i_0 - 2] [0] |= ((1678692419 ? 24919 : var_5));
        arr_5 [i_0] = -4888472147203921232;
        var_13 ^= ((+((-((0 ? (arr_3 [4]) : var_3))))));
    }

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_14 |= ((~((77 ? ((456646439 ? 3690719573 : 8703)) : 0))));
        arr_9 [7] = ((min(((238 ? 1 : 1)), (1949363606 / -64))));
        var_15 = -1678692420;
        arr_10 [i_1] [i_1] &= (((-1949363606 & 96) >= ((var_8 ? 1168285160 : 2785685918))));
        var_16 ^= arr_7 [i_1];
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        arr_14 [11] = ((~(~1253045893)));
        arr_15 [i_2] = (((5042115925142389005 ^ (arr_12 [i_2] [i_2]))));
        arr_16 [i_2] = -5042115925142389005;
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_19 [8] [i_3] = ((~((max((arr_7 [i_3]), 1)))));
        arr_20 [i_3] = (((-1678692420 && (arr_7 [i_3]))));
        arr_21 [i_3] = ((((8685 < (464856400 && 1)))));
    }
    #pragma endscop
}

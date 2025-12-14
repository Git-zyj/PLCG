/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_10 = (min(var_10, (((((min((-24287 && -4910), (arr_1 [1])))) ? ((((4294967295 ^ 1) > (((arr_0 [i_0]) / 8388592))))) : (max((((arr_0 [i_0]) * 1)), 62801)))))));
        arr_3 [i_0] = (15 > 105);
        var_11 += (max(-17, 1));
        arr_4 [i_0] = (min((max(((max(-755505809, 26075))), (min(-102, var_9)))), ((((-109 ? 8049537845825348415 : -3868))))));
        var_12 = (max((((-1 ? 8388580 : -127))), 1535821411241342687));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_13 += ((1 % ((1 ? (arr_5 [i_1] [i_1]) : var_5))));
        var_14 -= (((max(31020, 524160)) / 77));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_15 *= ((3882 && ((((arr_9 [i_2]) | (arr_8 [i_2]))))));
        var_16 -= (-16 || 83);
        var_17 = (min(var_17, ((((((624080128343099641 ? (arr_5 [i_2] [i_2]) : var_2))) + (min(2305843009213693951, 3679073996)))))));
        var_18 = (max(var_18, ((min(4294967295, var_1)))));
    }
    var_19 -= var_0;
    var_20 = (max(var_20, var_6));
    var_21 &= ((var_9 || ((((max(-1, -75))) == var_2))));
    #pragma endscop
}

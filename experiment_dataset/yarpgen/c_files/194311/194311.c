/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_20 *= (max((min(var_7, (arr_0 [i_0 - 1]))), var_7));
        arr_3 [i_0] = (((!12716008035890777269) >> var_5));
        arr_4 [i_0] [i_0] = var_17;
        var_21 = var_8;
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_22 = (min((arr_0 [i_1]), (((arr_6 [i_1 - 1]) ? ((12716008035890777255 ? 12716008035890777269 : 3696237351)) : (((max(var_12, 128))))))));
        arr_7 [i_1] = (max(2288605098, 67108863));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_23 *= (arr_1 [i_2] [i_2]);
        var_24 = ((12034 ? var_9 : (((min(17682, (((127 == (arr_1 [i_2] [i_2]))))))))));
        var_25 = arr_5 [i_2] [i_2];
        arr_12 [i_2] [i_2] = var_7;
    }
    var_26 = 130;
    var_27 = (max((min((-32763 - 65535), (var_10 ^ var_6))), var_13));
    #pragma endscop
}

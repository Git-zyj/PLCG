/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = (max(((max((arr_1 [i_0] [i_0]), ((min(-15782, var_13)))))), (max((max((arr_2 [i_0 - 1]), 47926)), (!-5652652021495747999)))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_16 = (min(var_16, 17623));
            arr_8 [i_0] = (max((min(-21303, (arr_0 [i_0 + 1]))), (arr_0 [i_1])));
        }
        arr_9 [i_0] [i_0] = (min(70, ((min(123, (max((arr_2 [i_0 + 1]), -21322)))))));
        arr_10 [i_0] = (~-744318652);
        arr_11 [i_0] [i_0] = (max(2191787857, (((11611 / (-11255 ^ 1292018075))))));
    }
    var_17 = (max(var_17, ((max(((((~var_3) * (25736 / -744318670)))), (+-2062742727418124331))))));
    var_18 = var_6;
    var_19 -= var_5;
    var_20 += 16934;
    #pragma endscop
}

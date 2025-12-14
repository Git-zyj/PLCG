/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (!(~116));
        arr_2 [i_0] = (((((var_5 != 0) && (var_7 == var_7))) && ((min(var_0, 62772)))));
        var_14 = -18339;
        var_15 = ((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 18346))) ? -8844005239959938891 : (((var_9 ? 3221225472 : (-9223372036854775807 - 1))))));
    }
    var_16 = (((~var_2) ? (min(((2788799944 ? var_9 : 35331)), var_3)) : ((((var_1 <= (84 && var_11)))))));
    var_17 = (((-var_10 != ((2491052173062300037 ? 0 : var_3)))) ? var_3 : ((((var_8 != (var_9 == var_3))))));
    #pragma endscop
}

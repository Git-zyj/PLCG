/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_8 ? var_12 : (var_12 && var_5)))) ? (((var_6 && var_10) ? var_9 : var_4)) : (1023 >= 9007199187632128)));
    var_17 -= (min(var_7, ((((min(1023, var_4))) ? var_15 : 18437736874521919488))));
    var_18 = var_4;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = (arr_1 [i_0]);
            var_20 = (max(var_20, (((+((((((arr_4 [i_0] [i_0] [i_1]) ? (arr_2 [13]) : var_8))) ? (((arr_3 [i_0]) ? var_11 : var_4)) : (110 | 169))))))));
            arr_6 [i_1] = ((((1685802932830798444 <= (arr_4 [i_0 + 1] [i_0 - 1] [12]))) || (arr_4 [i_0 + 1] [i_0 + 2] [i_0])));
        }
        arr_7 [9] = (((max(1, 1)) ? 21376 : 1965732528018448375));
        arr_8 [i_0] = (min(((16481011545691103233 << (var_14 >= 16481011545691103241))), (arr_2 [6])));
    }
    #pragma endscop
}

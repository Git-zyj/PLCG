/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_6 || (((!var_6) && var_7))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_15 = (min(var_15, (min((min(((var_7 ? var_7 : var_8)), (arr_1 [i_0 + 1] [i_0 + 1]))), ((((15728640 >= 2048) || (((var_7 ? -785810450 : var_10))))))))));
        arr_3 [i_0] = min((min((max((arr_2 [i_0]), var_13)), (arr_2 [i_0 - 1]))), ((max(((var_5 ? var_3 : var_7)), var_7))));
        var_16 = ((-(max((arr_1 [i_0 - 1] [i_0 + 1]), (arr_1 [i_0 - 1] [i_0 + 1])))));
        var_17 = (min(((-((var_10 ? var_4 : (arr_2 [i_0]))))), var_12));
    }
    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_18 = (-(((0 ^ var_11) ? (~var_1) : var_13)));
            arr_10 [i_2] [i_1] [i_1] = (((((~var_8) | (7861546978145262169 <= 16383))) >> ((((min(var_5, 785810443)) >= var_0)))));
            var_19 = (((min((var_1 / var_7), ((min(-2059, 16333))))) + (min((var_11 && var_11), (min(var_10, var_0))))));
            var_20 = ((144 | ((min(127, 81)))));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_21 = ((((0 >> (var_10 + 5410846916751404221))) / (((var_7 || (arr_7 [2]))))));
            arr_13 [i_1] = (min(((var_12 + ((var_13 ? var_6 : var_1)))), ((((((var_5 ? 111 : -2052))) ? (2091138397 * var_11) : var_6)))));
        }
        var_22 = (min(var_22, (((-8 ? 785810449 : -30649)))));
        var_23 -= (arr_11 [i_1 - 1]);
        var_24 ^= var_2;
    }
    #pragma endscop
}

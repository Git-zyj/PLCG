/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((min((min(var_2, var_6)), var_0)), (((2454921377 ? ((3678677798 ? var_11 : var_7)) : var_3)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = 63;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_18 *= var_13;
            var_19 = ((((((32763 ? 193 : 2305843009213693951)) ? (((max(31943, (arr_4 [i_1] [14]))))) : (((arr_1 [i_1]) ? 255 : var_2))))));
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            var_20 = (max(var_20, (var_0 / 4067182193134749345)));
            arr_7 [i_0] [i_2 - 1] [i_0] |= var_12;
            arr_8 [i_0] [9] [i_2 - 1] = min((arr_1 [i_2 + 1]), (arr_4 [i_0] [i_2]));
            arr_9 [i_0] [i_2] = (min((min((arr_2 [7]), (arr_3 [i_0] [i_0] [i_0]))), (arr_1 [1])));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_21 = ((((547786692 / (arr_5 [i_0]))) < 2712773568));
            var_22 = ((((((((4294967285 ? var_0 : 208)) != 49079)))) ^ ((((min(192, 1))) ? 23 : 5))));
            var_23 = var_10;
            arr_12 [i_0] [20] [i_0] |= (((((max((arr_2 [i_3]), (arr_0 [i_3])))) ? ((185 ? 15 : var_11)) : (arr_6 [5] [i_3] [i_3]))));
            var_24 = (max(var_24, ((max(((-(var_8 < var_14))), 134217216)))));
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_25 ^= (((var_4 ? var_4 : (arr_11 [i_4] [i_4]))));
            var_26 = (min((((arr_11 [i_0] [i_0]) >> (534591714 - 534591702))), 17));
        }
    }
    var_27 = min(-1, var_1);
    var_28 = ((var_6 ? var_13 : (((-2716879615124319912 + var_2) ? (((min(var_10, var_14)))) : (min(-32245, var_6))))));
    var_29 = (((((((min(17058, var_15))) ? var_4 : var_13))) * -4067182193134749346));
    #pragma endscop
}

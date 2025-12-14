/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_12 *= var_3;
        var_13 = (~((~(arr_1 [i_0 + 1]))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] [i_0] = ((((((((arr_4 [i_0] [i_0]) - var_8))) ? var_6 : 15546443513455119422)) + ((((arr_5 [i_0 + 1]) ? var_0 : (arr_2 [i_0 - 2] [i_1 - 1] [i_2 + 2]))))));
                    var_14 &= ((-((var_10 >> (var_3 < var_5)))));
                    var_15 = (max(var_15, (((((3722593712 / (arr_2 [19] [i_1 + 3] [i_2 + 1])))) ? ((-((-1155895334362034208 ? (arr_2 [i_0] [1] [i_1]) : 185)))) : (arr_0 [i_0 - 1] [0])))));
                }
            }
        }
        arr_8 [i_0 + 2] [i_0] = (min((~var_3), ((((min(185, var_8))) ? (arr_1 [i_0]) : (var_6 - var_7)))));
    }
    var_16 = (((+-1551056271) ? var_0 : var_4));
    var_17 |= ((3991491861 ? 0 : 224));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((~(~-3925347901403018234)));
                var_18 += (((~(~4582463631649896703))));
                arr_7 [i_0] [i_0] = 65535;
            }
        }
    }
    var_19 = (max(var_19, (((-(~65535))))));
    var_20 = (~266939792);
    var_21 = ((-((~(~-10198)))));

    for (int i_2 = 4; i_2 < 13;i_2 += 1)
    {
        var_22 = 10197;
        var_23 = ((-((~(!65535)))));
        arr_10 [i_2] = (~-26);
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_24 = var_15;
        arr_13 [i_3] [0] = 10198;

        for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
        {
            arr_18 [8] = (+-15666);
            var_25 -= ((~((((!(arr_3 [i_4] [i_3])))))));
            arr_19 [i_3] [i_3] [i_3] = ((((!(!88)))));
        }
        for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
        {
            arr_24 [i_3] = ((((!(~-89)))));
            arr_25 [i_5 + 1] [11] = ((~(~var_1)));
        }
    }
    #pragma endscop
}

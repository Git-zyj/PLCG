/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((((((~((68 ? var_3 : 37))))) ? var_3 : 28)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 = (min(var_21, -1));
        var_22 = ((-59 ? 307283568879297918 : 1372415605765644591));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_23 = (max(var_23, (((13 <= (!6))))));

        /* vectorizable */
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            var_24 = (arr_6 [i_2 + 1] [i_2] [i_1]);
            var_25 = (((arr_4 [i_2 - 1]) ? 1 : (~1)));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    {
                        var_26 = ((((((-32767 - 1) ? (arr_15 [i_1] [i_1] [17] [i_1] [i_4 - 1]) : 1855441493695145432))) ? -56853 : (arr_8 [12])));
                        var_27 = (min(var_27, ((((((35715 ? 21506 : 63))) ? 56167 : (((116 && (arr_6 [i_4] [9] [i_4])))))))));
                        var_28 = (arr_15 [i_1] [i_2] [i_2 + 2] [i_4 + 2] [i_4]);
                        var_29 = (max(var_29, (arr_14 [i_1] [i_2] [i_2] [i_2] [i_3] [i_2])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_30 = ((2314206900141980508 ? 9 : -7));
                        var_31 = (((arr_9 [i_2 + 2] [i_2 - 3] [i_2 - 3] [i_2 + 2]) - (arr_4 [i_6])));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_32 = ((-46 ? 35284 : (((4 > ((-55 ? (arr_11 [i_1] [i_1] [i_7]) : (arr_15 [i_1] [2] [i_1] [i_7] [i_7]))))))));
            var_33 = (1 ? 1023 : 16);
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_34 = (((10398158971253060111 / 67) ? (arr_14 [i_1] [i_1] [i_1] [i_8] [i_1] [i_8]) : 46));
            var_35 = ((479746501 <= ((~(max(120, 13293041458149255034))))));
        }
        var_36 = (!3249);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        var_37 = (max(var_37, (((3448 || (((1 ? -61 : 5269835237695391078))))))));
        var_38 = (((arr_5 [i_9]) ? (245 > -1) : -15195));
    }
    var_39 = 1904711520;
    #pragma endscop
}

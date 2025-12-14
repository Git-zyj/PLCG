/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_13 = (min(var_13, ((min((max(-1890995393, ((min(0, 6250))))), var_0)))));
        var_14 |= ((min(var_8, var_11)));
        arr_2 [i_0] |= (((3 ? (~11480234023124827406) : 11069427404536470824)));
        var_15 = -1;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_1] = ((59286 ? 0 : var_1));
            var_16 = 1088126038;
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_9 [i_0] [i_0] = (((min(var_2, 1))));
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [7] [i_3 + 1] [i_4] [i_4] = (max(1, ((1220897032 ? 131071 : 11637))));
                            arr_18 [i_0] [18] [i_4 - 2] [i_4 - 1] [14] [i_4] [i_5] = (min(1, ((-(~2666651889491883991)))));
                            arr_19 [i_0] [1] [i_3] [i_4 - 2] [i_4] = -11638;
                            var_17 = 18446744073709551615;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_26 [1] [i_2] [i_6 + 1] [i_7] = ((min(var_8, -12660)));
                        arr_27 [i_0] = (~(max(1, ((max(-16, 1))))));
                    }
                }
            }
            var_18 = ((((((!27) | (min(1985076695, 4294967295))))) ? 3973 : 1));
        }
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 20;i_8 += 1)
    {
        var_19 = var_4;
        arr_32 [i_8] = ((-28530 ? var_5 : 10110));
        var_20 = (2095 | var_3);
    }
    for (int i_9 = 2; i_9 < 15;i_9 += 1)
    {
        var_21 = 0;
        arr_36 [i_9] [i_9 - 1] = ((65508 ? 7348189037692295873 : 0));
        arr_37 [i_9 - 2] = -30680;
        arr_38 [i_9 + 1] [i_9] = (min((max(var_1, (max(-1894246019, 27)))), ((((min(var_1, 24382)) <= 1)))));
        arr_39 [i_9 - 1] [i_9] = 27;
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        var_22 = ((0 ? 20572 : -24486));
        arr_43 [i_10] = ((var_8 ? var_9 : -63));
    }
    var_23 = ((~(((((0 ? 0 : -56))) ? -16287 : (min(var_2, 2407828071))))));
    #pragma endscop
}

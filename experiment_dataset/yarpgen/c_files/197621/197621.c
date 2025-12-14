/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (65535 * 20932);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [14] [19] [i_2] [i_2 + 1] [19] [i_1] = ((126 ? (((((min(4216722250, -8002943979138704917))) || 31295))) : ((((60 && 2147483647) || ((min(1, 18446744073709551615))))))));
                                arr_15 [i_1] = (((min(144114913197948928, (arr_6 [i_0 - 1] [i_1] [10]))) >= 53));
                                var_17 = (max(var_17, ((((!2742910024476395070) ? 2597901274 : (((-2507082174169935074 ? (202 != 771670573) : (var_7 > var_11)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((28672 ? 4961788154871836744 : 9052603121973172122)) <= ((min((((var_8 ? var_16 : var_5))), var_4)))));
    var_19 = (min(var_19, ((min(var_6, var_16)))));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                var_20 = (((var_14 - 1003404651390734496) && (arr_7 [i_5 + 2] [i_5 - 2] [i_5 + 2] [i_5 - 1])));
                arr_21 [i_5] [i_6] = (min((arr_18 [i_5 + 2]), (((210 >> (255 - 246))))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_0 ? var_7 : (((10246530403024786309 ? (var_17 != 2548975666) : (!var_13))))));
    var_19 = ((var_12 ? ((((!var_11) <= var_4))) : var_5));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = (((~var_17) ? 3057205537 : ((((2126492655 <= (~var_3)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = ((((((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1])))) != (((arr_6 [i_1]) ? (arr_6 [i_1]) : 206513161))));
                                var_22 = ((var_9 | (((arr_4 [i_1 - 1]) ? var_15 : (max(8200213670684765292, 2126492661))))));
                                arr_15 [i_2] [i_1] = (9868342307454652537 * 2524145689);
                                var_23 = -var_14;
                                var_24 = (((((147 ? (((4611686017890516992 ? 4294967295 : -464565622))) : (min(2026584148070995784, 4))))) ? (arr_11 [i_1] [i_1] [i_2] [i_2] [i_1] [i_0]) : ((((((var_1 ? (arr_3 [i_2 + 1] [i_1 - 3]) : 1241417483))) == (((arr_2 [i_1 - 2] [i_1]) ? 2026584148070995764 : (arr_13 [i_2] [1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (max(((-24627 ? var_8 : (max(4611686017890517000, var_15)))), (((2147483647 ? (43266 || var_4) : (((var_13 != (-2147483647 - 1)))))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_6] = ((((((arr_6 [i_6]) ? 18446744073709551602 : (4802 || var_9)))) || 756));
                    var_26 = (min(var_26, ((max((min(-2126492682, (arr_9 [i_7] [i_7] [i_6] [i_7] [i_7]))), 2147483645)))));
                    var_27 = ((~(min(1, 2458706677359831607))));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (max(((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))), 18446744073709551615));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (arr_3 [i_0] [i_2]);
                    arr_10 [5] [i_1] [i_0] = (min((((var_11 ? (arr_1 [i_1 + 1] [i_1 + 1]) : -31830))), (max(5761429620646242040, 8856445854945297762))));

                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        arr_13 [i_0] [i_2] &= var_0;

                        for (int i_4 = 4; i_4 < 7;i_4 += 1)
                        {
                            arr_16 [i_1] [i_1 - 1] [i_1] [i_1] [i_1] = ((((arr_4 [i_3] [i_1]) - ((3715 + (arr_6 [i_2]))))));
                            var_18 = (min(var_18, (((!((max(4294967295, 5169946408851622650))))))));
                        }
                    }
                }
            }
        }
        var_19 -= ((!((min((var_10 < 40532), 17484)))));
    }
    var_20 = (min(((((max(186, (-32767 - 1)))) ? var_10 : var_5)), var_8));
    var_21 -= ((((~(var_2 - -97))) != ((((((var_6 ? var_9 : var_7))) ? var_15 : -762051747373513685)))));
    #pragma endscop
}

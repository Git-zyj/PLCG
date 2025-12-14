/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        var_20 = ((-(4892 / 4892)));
                        var_21 = ((4892 >= (((!4695) / var_12))));
                        var_22 = (~var_8);
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_23 = ((4695 ? 15350314586234451016 : 4095));
                            var_24 = (min(var_24, (-4887 ^ 4892)));
                        }
                        var_25 = ((((4883 ? (arr_6 [i_1] [i_1] [i_1]) : ((var_5 ? var_10 : -4887)))) <= (arr_1 [i_1])));
                        var_26 = 1;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        var_27 |= 1;
                        var_28 = 4892;
                        var_29 |= (!var_5);
                    }
                    var_30 = (max(var_30, (((~(((13380267325339280051 & -1801070380) / (-17 != var_10))))))));
                }
            }
        }
    }
    var_31 = var_7;
    #pragma endscop
}

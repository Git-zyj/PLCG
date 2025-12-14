/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_7 << (-1867 + 1904)));
    var_20 = ((var_10 ? (~var_5) : (((var_4 ? var_0 : var_1)))));
    var_21 = var_4;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_22 = (max(var_22, (((~(-32767 - 1))))));
        var_23 = ((!(((((max(var_4, 255))) ? var_17 : var_7)))));
        var_24 -= ((+(((!var_2) ? (arr_0 [i_0]) : var_5))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_25 = (arr_0 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                {
                    var_26 = (arr_0 [i_3 - 1]);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_17 [i_1] [i_2] [i_3 + 1] [i_4 - 1] = (arr_5 [i_5] [7] [7]);
                                var_27 = ((~(arr_3 [i_1] [i_1])));
                                var_28 = 245;
                            }
                        }
                    }
                }
            }
        }
        arr_18 [i_1] = min(((~(max(5347486841593184253, 2568192578)))), var_7);
    }
    #pragma endscop
}

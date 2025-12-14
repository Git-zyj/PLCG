/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = var_11;
                    var_20 = (max((((9223372036854775785 & 0) >> ((((max(var_7, var_4))) + 108)))), (((-3883428231088857026 ? 3 : 1)))));
                    var_21 = 26481;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = (((((max(var_3, var_12)))) ? (max((max(-2714, 1660906790)), (1 | var_15))) : var_5));
                                var_23 = ((!(-32767 - 1)));
                                arr_12 [i_0] [i_3] [i_3] [i_1] [i_1] [i_1] [i_0] = ((!(arr_6 [i_0] [i_0] [i_2] [i_3])));
                            }
                        }
                    }
                    var_24 &= ((((max((((-32767 - 1) ? 18446744073709551615 : -32761)), 255))) ? (max(((var_12 ? var_15 : (arr_3 [i_2]))), -32751)) : ((((!(2220574451406968019 & -30060)))))));
                }
            }
        }
    }
    var_25 = (max(var_25, 1323));
    #pragma endscop
}

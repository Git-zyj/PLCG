/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_21 *= (((!var_1) >> (((((max((-127 - 1), -5465))) > -5440)))));
                var_22 = 5440;
                var_23 = (min((244 ^ 0), 27508));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 7;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [i_4] [i_5] [0] = arr_8 [i_6];
                                var_24 -= ((-(((var_16 >= 18446744073709551606) & 16105897988814166857))));
                                var_25 = ((!((max((arr_17 [2] [i_6 - 1] [i_4] [2] [i_2] [1]), -5465)))));
                            }
                        }
                    }
                }
                var_26 = (max(var_26, ((max((((-5442 + 2147483647) >> (((min(var_13, var_7)) - 17793901624694499035)))), (((!(arr_3 [i_2] [i_2] [i_3])))))))));
            }
        }
    }
    var_27 = ((5440 ? -5440 : 2047));
    #pragma endscop
}

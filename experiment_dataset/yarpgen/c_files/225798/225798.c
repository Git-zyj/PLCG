/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (min((((arr_5 [i_1] [i_1] [i_0]) ? ((max((arr_5 [i_0] [i_1] [13]), 1))) : var_17)), (max((((-26504 + 2147483647) << (1 - 1))), 1))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_20 &= 26486;
                            var_21 = (((((-50 ? (1 % 128) : ((var_12 ? 9223372036854775807 : 124))))) ? ((-(arr_7 [1] [i_2] [1] [i_0]))) : ((((max((arr_4 [10] [i_1]), (arr_11 [i_3] [i_0] [i_0])))) ? (101 && var_8) : (var_1 + 105)))));
                        }
                    }
                }
                var_22 = (((90 + 109) >= ((((arr_10 [i_0] [i_1] [i_1] [i_1] [7]) ? 25296 : -1)))));
                var_23 = ((!((min((arr_0 [i_0]), 872732070)))));
            }
        }
    }
    var_24 = (min(-1359390668, ((max(1, var_1)))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_25 -= ((((((var_0 ? 1 : 52)) ? (-123 / 205) : -7))));
                var_26 &= ((!(arr_8 [i_4] [i_4] [i_4] [i_4])));
                var_27 = ((((!(1 || 9397094719208861947))) && 112));
                arr_19 [i_5] = ((206 ? -445524237 : 52));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((735700331 << (var_16 - 4322)));
    var_21 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_22 = (((((5 ? 2342741145 : 1952226152))) ? (((((var_5 ? (arr_4 [i_0] [i_0] [i_1]) : 127355191))) ? var_14 : var_1)) : ((max(104, 127355196)))));
                arr_5 [i_0] [i_0] [i_0] = (((~8160) < ((-((-127355197 ? -127355205 : 1952226167))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_23 = (arr_8 [i_3] [i_1] [i_0]);
                            var_24 = (((((4189925718 ? ((-2554 ? 9223372036854775801 : (arr_11 [i_0] [i_0] [i_0] [i_0]))) : 4519331399242325081))) ? (((+(((arr_10 [i_3] [i_2] [5] [i_0]) ? (arr_2 [i_2]) : (arr_7 [i_3] [i_1] [i_2])))))) : 15227234547202930886));
                            arr_12 [i_2] [i_3] [i_2] [i_2] = (((~(min(2342741144, (arr_6 [i_3]))))));
                            var_25 = ((((max((25 || -8163), (8163 - 12)))) ? var_18 : ((((arr_8 [17] [i_1 - 1] [i_1 + 1]) ? (arr_8 [i_1] [i_1 - 3] [i_1 + 3]) : (arr_8 [i_0] [i_1 + 3] [i_1 + 3]))))));
                        }
                    }
                }
            }
        }
    }
    var_26 = ((!(((var_5 ? ((27639 ? 1660507922 : 4194304)) : ((var_0 ? var_19 : var_2)))))));
    #pragma endscop
}

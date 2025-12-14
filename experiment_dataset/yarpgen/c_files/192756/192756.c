/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_1);
    var_21 = (max(var_21, ((((((1 ? (!var_2) : (1 == var_6)))) ? var_11 : var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [4] = (((((-var_12 ? (arr_2 [i_1]) : (var_8 ^ 90)))) ? ((((-(arr_1 [3]))))) : (arr_2 [i_1 + 3])));
                arr_5 [i_0] [i_1 + 3] = (((min(((max(2996612358, 1414537933))), (max((arr_2 [i_0]), var_13)))) % var_16));
                var_22 *= ((((min(((var_19 - (arr_0 [i_0]))), ((min(55, var_5)))))) && ((min(var_15, var_3)))));
                arr_6 [i_0] = ((((-10832 ? (arr_1 [i_1 - 1]) : (min(var_15, var_3)))) <= ((((arr_1 [i_0]) ? (var_17 != var_9) : (!var_7))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_13 [12] [i_0] [i_0] [i_0] = ((-0 ? (var_16 - var_13) : var_0));
                            var_23 = (((-(arr_1 [i_3]))) + (arr_2 [i_0]));
                        }
                    }
                }
            }
        }
    }
    var_24 = ((((min(((min(var_19, var_14))), ((11930 ? -99 : 21168))))) - (((1 ? 1 : 2880429363)))));
    #pragma endscop
}

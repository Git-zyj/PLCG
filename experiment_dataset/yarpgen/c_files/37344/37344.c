/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((175951953 ? var_8 : (max(((min(var_6, var_6))), ((var_3 ? 7314 : var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (arr_2 [i_1] [i_0] [i_0]);
                arr_4 [1] = ((((((arr_1 [i_0]) - (arr_1 [i_0])))) ? 152 : (max((arr_0 [i_1]), (arr_1 [i_0])))));
                arr_5 [i_1] [5] [i_0] = ((var_8 > (((arr_1 [i_0]) ? 37206 : (((arr_1 [i_0]) ? 1151657258 : var_5))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_15 = ((((!((max((arr_10 [i_2]), (arr_0 [i_0])))))) ? (((arr_11 [i_0] [i_3 - 1] [6]) ? (arr_11 [9] [i_3 + 1] [i_2]) : (arr_11 [i_0] [i_3 - 1] [i_2]))) : (arr_3 [i_0] [i_0])));
                            var_16 = ((+((var_3 ? (2220864929342285189 != 249) : var_7))));
                            var_17 = max((max((max(-4403557911961131728, 7659)), (((!(arr_7 [2] [2] [i_2] [i_2])))))), (arr_8 [i_0] [i_1] [i_3]));
                            var_18 = (arr_6 [i_0]);
                            arr_12 [i_0] [i_0] [i_0] [i_0] |= (min(-63424, (min(var_10, (~26163)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

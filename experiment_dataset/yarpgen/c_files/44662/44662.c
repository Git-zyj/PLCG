/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_0 ? ((116 ? 9223372036854775807 : var_2)) : var_10))) && (((var_1 ? var_3 : ((1 ? 10213595293890081328 : 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 *= (((((var_14 ? var_5 : var_6))) >= ((((arr_1 [i_0] [i_0]) | var_11)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, (((18446744073709551615 ? (((arr_3 [i_3 - 3] [i_3 - 3] [i_3 + 2]) - (arr_3 [i_3 + 2] [i_3 + 2] [i_3 - 1]))) : (((arr_1 [i_0] [i_3 - 2]) ? (arr_3 [i_3 + 3] [i_3 + 1] [i_3 - 3]) : var_12)))))));
                            var_18 = (((10213595293890081320 ? -1693809861752506250 : var_7)));
                            var_19 = ((~(((arr_8 [i_0] [i_3 + 2]) ? ((var_1 ? 1125899890065408 : var_12)) : ((~(arr_5 [i_0] [i_0] [i_0] [i_0])))))));
                            var_20 = (max(var_20, ((min((((((((arr_7 [i_0]) ? var_14 : var_5))) ? ((243 ? -11584 : 0)) : ((var_11 ? (arr_9 [i_2] [i_2] [i_0]) : var_5))))), ((min(var_7, -1693809861752506250))))))));
                            arr_10 [i_0] [i_0] [i_0] [i_2] [i_3 - 1] [i_3 - 1] = ((!(arr_5 [i_3 + 1] [i_3] [i_3 - 3] [i_3 + 1])));
                        }
                    }
                }
            }
        }
    }
    var_21 = (min((((((var_8 ? var_0 : var_11)) & ((132 >> (63 - 45)))))), (8233148779819470287 && var_0)));
    #pragma endscop
}

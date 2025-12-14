/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (max(var_13, var_1));
        var_14 = (max(var_14, ((min(((~(4817036533095541387 ^ -2147483645))), (-127 - 1))))));
        var_15 = (min(var_15, 2147483644));
        var_16 = (max((min((arr_0 [i_0]), (((var_8 ? var_10 : -2147483645))))), (max(((var_8 >> (1798458859 - 1798458805))), (~127)))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 21;i_2 += 1)
        {
            {

                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    var_17 = (max(var_17, ((((((var_2 ? var_12 : var_11))) ? (arr_3 [3] [i_1]) : 2147483645)))));
                    var_18 = (max(var_18, ((((((~var_0) < 2147483644)) ? (min(((3 ? (arr_3 [i_1] [i_1]) : (arr_6 [i_1] [i_2]))), (((2147483629 ? (arr_7 [i_1] [i_2] [i_3] [i_3]) : var_5))))) : ((min(((max(var_9, var_3))), ((~(arr_5 [i_2] [10])))))))))));
                    var_19 = ((~((~(min(var_0, var_12))))));
                }
                var_20 = (min(var_20, -2147483644));
                var_21 = var_3;
            }
        }
    }
    var_22 = var_3;
    #pragma endscop
}

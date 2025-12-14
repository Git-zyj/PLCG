/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = var_7;
                var_21 = ((-2354 * ((var_5 ? (arr_0 [i_0]) : var_2))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        arr_9 [i_2] = (((((arr_6 [i_2] [i_2]) >= 6427810142145193703)) ? (~-30770) : ((var_13 ? (arr_6 [i_2] [i_2 + 2]) : (arr_6 [i_2] [i_2 + 1])))));
        var_22 = (min((32765 ^ 30759), 2992931538));
        var_23 = (min(((((arr_8 [i_2 - 1]) ? (arr_8 [i_2 - 1]) : -1565))), (((arr_8 [i_2 + 2]) ? (arr_8 [i_2 - 1]) : 1302035754))));
        var_24 = 0;
        arr_10 [i_2] [i_2] = (min(((((max(var_3, var_7))) > (((var_3 > (arr_7 [i_2])))))), ((!(((-32767 - 1) && 18446744073709551610))))));
    }
    var_25 = (max(var_4, ((max(var_9, (max(3305028907, var_8)))))));
    var_26 = ((var_1 == ((var_13 ? var_4 : var_15))));
    #pragma endscop
}

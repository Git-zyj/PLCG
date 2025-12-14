/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_12 / var_15) / ((((((max(-61, -23274)))) / ((var_7 ? var_6 : 4294967292)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_1] = (min(1, ((~(arr_1 [i_1 - 1] [i_0 - 1])))));
                arr_6 [i_1] [i_1] = (((arr_2 [i_0] [i_0] [i_0]) == ((((~-84) || (arr_1 [i_0 + 1] [i_1 + 2]))))));
                arr_7 [i_1] = (-118 | 4918);
                arr_8 [i_1] [7] = (~-23281);
                var_20 = (max(var_20, ((((((((~1) + 2147483647)) << (arr_0 [i_0] [i_0]))) << (((((arr_2 [i_1 + 2] [i_1 + 2] [i_0 + 1]) ? ((-84 ? (arr_2 [i_0 - 1] [i_0 - 1] [i_0 + 1]) : (arr_3 [i_1] [i_1] [i_0]))) : ((4884267492942421989 ? 55308 : -24533)))) - 31531)))))));
            }
        }
    }
    var_21 *= ((var_0 ? var_1 : var_14));
    var_22 *= var_7;
    #pragma endscop
}

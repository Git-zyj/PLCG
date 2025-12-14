/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    var_20 = (min(var_20, var_14));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_21 = ((((((!var_1) ? ((((arr_0 [i_0]) ? var_7 : -2542024116547958917))) : (((arr_1 [i_0]) ? var_4 : -73))))) ? (((((-99 ? 140737488355327 : -2542024116547958886))) ? (((min(17, 119)))) : var_10)) : ((((!var_8) * (max(var_1, (arr_0 [i_0]))))))));
        var_22 = (((max((!1), (arr_0 [i_0]))) & var_3));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_23 = (max(var_23, (((((min(-101, 127)))) < (((arr_5 [i_1] [i_1] [i_2]) ? (arr_5 [i_2] [i_2] [i_1]) : (arr_5 [i_1] [i_2] [i_2])))))));
            var_24 = ((-45 && (((~(arr_0 [i_2]))))));
            var_25 = (min(((((min(106, 106))) ? -33 : -33)), (((((-9223372036854775806 ? -29693 : 184))) ? var_1 : (var_18 <= 58)))));
        }
        var_26 &= (max(((min(var_5, (arr_2 [i_1] [i_1])))), ((var_17 >> (var_0 + 23445)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_12 [i_3] = var_17;
                    arr_13 [i_1] [1] [i_1] = (((max(var_13, 197))));
                    var_27 = (max(var_27, ((min((min((arr_9 [i_3]), (arr_9 [i_1]))), ((var_8 && (arr_9 [i_1]))))))));
                }
            }
        }
    }
    #pragma endscop
}

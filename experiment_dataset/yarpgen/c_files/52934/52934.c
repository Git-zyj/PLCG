/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] = ((-((-61 ? ((max(0, 1))) : -121))));
        var_18 = min(216, 5080590555908605703);
        var_19 = (((arr_2 [i_0 + 1]) * (((arr_1 [i_0 + 1]) / 17044530542779908609))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_20 = (((arr_10 [i_1 - 1] [i_1 - 1] [1]) && 9));
                    arr_12 [1] [1] [i_3] = ((arr_5 [i_3]) + (((18446744073709551610 ? (!255) : (arr_6 [i_1] [i_3])))));
                    var_21 = -75;
                }
            }
        }
        arr_13 [i_1 - 1] [i_1] = 46;
        arr_14 [i_1] = (max((!var_17), (((arr_10 [18] [i_1] [5]) || var_7))));
        var_22 = ((+(((arr_4 [i_1 - 1]) * var_10))));
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] = 1;
        var_23 = (max(var_23, ((min(((-(arr_5 [i_4 - 1]))), (arr_11 [i_4 - 1] [i_4 - 1] [i_4 - 1] [18]))))));
        arr_18 [i_4] = (219 > -373928024);
        var_24 = (max(var_24, (((var_1 ? (((arr_16 [12]) | (arr_16 [16]))) : ((((25 / var_14) != (1 > -125)))))))));
    }
    var_25 = (min(var_25, var_15));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1073391416678306373;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (max((((-(arr_2 [i_0])))), (min((((480 ? (arr_1 [i_0]) : -1148288095))), var_0))));
        var_11 = (min(var_11, (((124 ? 16777215 : var_8)))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_12 = (arr_4 [i_1]);
        var_13 = -4339681176787407276;
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (arr_4 [i_2]);
        arr_10 [i_2] = ((((-(((arr_4 [i_2]) / var_1)))) - ((((!(arr_2 [9]))) ? (((var_6 == (arr_5 [i_2])))) : (arr_5 [i_2])))));
        var_14 |= ((+((~((((arr_7 [i_2] [i_2]) == 8796091973632)))))));
        var_15 = (arr_7 [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    arr_18 [i_5 - 1] [i_3] [i_3] = ((((8796091973605 ? (1963588676 % 240518168576) : (arr_11 [i_3]))) << (((max(((((arr_4 [i_3]) == var_4))), var_0)) - 15516301512417095502))));
                    var_16 = (max(var_16, (arr_4 [i_5])));
                    var_17 = (((((((var_4 ? -8796091973613 : var_8))) ? (!var_4) : 1)) << (arr_11 [i_3])));
                    var_18 = (min(var_18, ((min(8796091973616, (((!var_6) ? ((max(-8796091973630, (arr_4 [i_3])))) : (arr_13 [i_4 - 1] [i_5 - 1]))))))));
                }
            }
        }
        arr_19 [i_3] = 8796091973630;
        arr_20 [i_3] [i_3] = (((~(arr_16 [i_3] [i_3] [i_3]))));

        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            var_19 += ((-(min(var_0, (arr_22 [i_6 - 2] [18])))));
            var_20 = (max(var_20, 6));
        }
    }
    var_21 = (-127 - 1);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((-26 ? 15010 : 38464))) << var_14));
    var_16 = var_1;
    var_17 = 1;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 += (min((((var_14 ? (((var_2 > (arr_4 [i_0] [i_1])))) : var_3))), ((~(min(var_0, (arr_4 [4] [20])))))));
                    var_19 = (min((((-1 ? 25 : var_9))), (min(var_5, (arr_1 [i_0])))));
                    arr_8 [19] [19] [i_2] = (min(((var_4 ^ ((-25742 & (arr_5 [i_0] [i_0]))))), (!0)));
                }
            }
        }
        var_20 = (min(var_20, ((!((var_0 && ((max(1, (arr_7 [i_0] [4] [4] [i_0]))))))))));
        arr_9 [i_0] = (arr_4 [i_0] [i_0]);
    }
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        var_21 = min(6044365550985693865, 15158945198507610579);
        var_22 = var_12;
        arr_14 [i_3] = (((arr_12 [1]) * var_14));
    }
    var_23 += var_7;
    #pragma endscop
}

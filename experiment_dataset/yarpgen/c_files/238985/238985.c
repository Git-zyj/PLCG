/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_12 % var_11) ? ((var_8 ? var_12 : var_8)) : ((var_1 ? var_7 : var_3)))) >> (((var_3 == ((min(var_3, var_0))))))));
    var_14 -= ((((var_7 << (15583 - 15564))) > (16996110790545935683 != 1854173904)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1 - 1] [i_1] = arr_4 [i_0];
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((((((!(((arr_2 [i_0] [i_2 - 3]) >= (arr_6 [9] [i_1] [i_2]))))))) != 13242721064947215544));
                    var_15 = (max(var_15, (((((((((var_0 ? 17962850114481510561 : 7737246965516533066))) ? (((arr_4 [i_0]) ? 1377454799925117914 : (arr_6 [12] [i_1] [i_1]))) : var_10))) ? (min((max(1, var_12)), (!1212512725))) : ((((!(arr_6 [i_0] [i_0] [i_0]))))))))));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1 + 1] [i_1] [i_3] = (arr_4 [i_1 + 1]);
                        var_16 = ((!(((((((arr_9 [i_0] [i_0] [1] [i_2] [i_3]) ? var_11 : (arr_11 [i_0] [i_1])))) ? (max((arr_4 [i_1]), 1647232000)) : ((min((arr_11 [i_1] [i_1]), (arr_1 [1] [1])))))))));
                        var_17 -= -1854173905;
                    }
                    var_18 = (min(10270233170962703328, 1854173904));
                }
            }
        }
    }
    var_19 &= (min(1, 1));
    #pragma endscop
}

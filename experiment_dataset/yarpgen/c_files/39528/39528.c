/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = (var_6 / var_5);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((((var_6 ? ((min(var_1, (arr_1 [i_0])))) : var_13)) < (min((((var_12 > (arr_1 [i_0])))), var_9))));
        var_16 = var_10;
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    {
                        var_17 = (max(var_17, -5));
                        var_18 = (max(var_18, (((((!(arr_6 [i_1 - 1] [i_1 - 3]))) ? (((arr_6 [i_1 - 1] [i_1 - 3]) ? var_13 : (arr_6 [i_1 - 1] [i_1 - 3]))) : ((((arr_5 [i_1 - 1] [i_1 - 3] [i_1 + 1]) > (arr_6 [i_1 - 1] [i_1 - 3])))))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (!5);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_15 [i_4] = var_11;
        var_19 = (min(var_19, ((min(((min(var_1, var_0))), ((var_8 | (min(-28950628621491974, (arr_13 [i_4]))))))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_20 = 1212142063;
        var_21 = (max(var_21, (((((max((var_12 % var_6), var_10))) ? (max(((~(arr_17 [14] [i_5]))), (((arr_17 [14] [i_5]) ? 28950628621491970 : var_13)))) : ((((var_6 >= ((max(var_10, (arr_16 [16] [i_5])))))))))))));
        var_22 = (max(var_22, (((var_7 ? (arr_17 [12] [i_5]) : (arr_16 [4] [4]))))));
        arr_18 [i_5] = 227;
    }
    #pragma endscop
}

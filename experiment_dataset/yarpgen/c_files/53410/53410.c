/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = (min(var_17, (((((((var_5 ? 1636513623 : var_9)) > ((((!(arr_3 [i_0]))))))) ? (min((min(2658453673, 1636513623)), (980641521 % 1636513601))) : var_4)))));
        var_18 = (max(((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_15))), var_2));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_19 = 2658453673;
            arr_10 [i_1] = (((((((min(var_10, var_13))) ? (arr_9 [i_1] [i_2] [i_2]) : 980641521))) ? (min(var_12, (arr_6 [i_1] [i_1]))) : ((var_10 ? var_9 : var_7))));
            var_20 &= (arr_4 [i_2]);
            arr_11 [i_1] [i_2] = var_2;
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_20 [i_1] [i_5 + 1] [i_3] [i_4] [i_5] = 1636513623;
                            var_21 = (min(var_21, ((max(((~(arr_14 [i_1] [i_2] [i_3] [i_1]))), var_10)))));
                            arr_21 [i_1] [i_2] [i_3] [i_1] &= (((var_14 ? ((980641521 ? var_13 : (arr_5 [i_1]))) : (((var_8 ? 980641521 : (arr_5 [i_4])))))));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
        {
            arr_24 [i_1] = 1207058149374974314;
            arr_25 [i_6] [i_1] [i_1] = var_1;
            arr_26 [i_1] [i_1] [i_6] = (min(var_8, -1207058149374974314));
        }
        arr_27 [12] = 2658453673;
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            {
                var_22 = (max(var_22, var_13));
                var_23 += 2658453673;
            }
        }
    }
    #pragma endscop
}

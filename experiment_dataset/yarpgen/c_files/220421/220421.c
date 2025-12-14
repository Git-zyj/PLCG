/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0] = 48418;
        var_19 = (max(17117, (((((190 ? (arr_3 [i_0 + 4]) : 17113942883462280994))) ? (max(0, 17113942883462280994)) : ((((var_0 || (arr_3 [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] = var_12;
        var_20 = (min(var_20, 11584192275666470676));
        var_21 *= ((5 && (((((arr_5 [i_1] [i_1]) | var_5))))));
        arr_8 [i_1] &= ((+((-(((arr_5 [i_1] [i_1]) % var_14))))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_22 *= (!-24867);
        var_23 = ((!48418) ? (!var_3) : (arr_9 [i_2] [i_2]));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_24 = (arr_13 [i_3] [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_25 *= ((3427700408 ? (-5018716078843563359 > 0) : var_9));
                    var_26 = (!-12145);
                    var_27 |= (((1 % 1) ? 3683479627107939475 : 0));
                }
            }
        }
    }
    var_28 = (111231808074472904 & 20737);
    var_29 |= -var_6;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 9;i_7 += 1)
        {
            {
                arr_23 [i_6] = (!3427700408);
                var_30 = (min((((var_5 < var_9) ? ((11584192275666470676 ? (arr_0 [4]) : (arr_13 [i_6] [8]))) : ((-(arr_9 [i_6] [13]))))), (arr_19 [i_7] [1])));
                arr_24 [i_7] [i_7] [i_6] = ((((max(11043, 0))) <= (((((var_17 ? 0 : var_18))) ? (arr_1 [i_6] [5]) : var_13))));
            }
        }
    }
    var_31 &= -var_8;
    #pragma endscop
}

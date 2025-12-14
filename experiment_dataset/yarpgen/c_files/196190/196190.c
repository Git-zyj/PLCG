/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((var_14 ^ -1165626661), -var_9));
    var_18 = var_7;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 |= (((1 / 426952036) < -11));
        arr_2 [i_0] [i_0] = (850280828273277027 >= 3273378254739221550);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_9 [i_1] = 105;

            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                var_20 &= 376391455;
                var_21 = (min(var_21, 3154041095));
                arr_13 [19] [i_2] [i_3] &= var_10;
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    {
                        var_22 = (min(var_22, ((min((min((arr_15 [i_5 + 1] [i_1]), (arr_15 [i_5 + 1] [i_1]))), (((arr_15 [i_5 - 1] [i_1]) ? (arr_15 [i_5 + 1] [i_2]) : 1867406165)))))));
                        var_23 = 102;
                        var_24 = var_3;
                        var_25 = (min(var_25, ((min((((!(arr_3 [i_1])))), (max(-949, (arr_18 [i_1]))))))));
                    }
                }
            }
        }
        var_26 = ((27 / ((705507241751138087 ? var_2 : (arr_18 [i_1])))));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {
        var_27 = (1784096094 < var_12);
        arr_22 [i_6] = var_16;
        var_28 = 99;
    }
    #pragma endscop
}

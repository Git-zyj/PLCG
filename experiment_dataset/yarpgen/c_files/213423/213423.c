/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((min(var_8, var_3))) ? (171 ^ var_6) : var_1))) ? ((-24 ? 186 : var_6)) : (((((((var_12 << (85 - 78)))) || var_1)))));
    var_14 -= ((((max(-243, (!61446)))) ? -var_3 : ((min((var_5 / var_12), (4090 ^ 61446))))));
    var_15 = (((((((var_7 < var_8) != (var_3 & 1089983192632641458))))) <= (((!var_6) ^ (min(var_4, 66))))));
    var_16 = (var_1 & var_6);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 = (min((arr_2 [i_0 - 1]), (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [10] [i_0] [i_2] [i_2] = (-(((arr_1 [i_0 - 1]) * var_5)));
                    var_18 = (arr_0 [i_0]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    var_19 = (((((-((min(var_0, 4090)))))) * 510525217095001149));
                    var_20 = (max(var_20, -1));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    arr_23 [i_3] [i_6] = var_3;
                    arr_24 [14] [i_6] [i_6] = (((((((arr_4 [i_3]) | 1792))) ? ((((!(arr_20 [i_3]))))) : -var_3)));
                }
            }
        }
        arr_25 [i_3] = (max(((-((111 ? 4068487164214142574 : (arr_5 [i_3] [2] [i_3]))))), ((max((((!(arr_13 [i_3])))), 4078)))));
        arr_26 [i_3] = 93;
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    arr_36 [i_8] [i_9] [i_9] = ((((var_7 == ((-(arr_35 [i_8]))))) ? -var_12 : -13814));
                    var_21 -= ((171 ? 20745024992973364 : -1089983192632641430));
                }
            }
        }
        var_22 -= ((~((~(-9223372036854775807 - 1)))));
        var_23 |= (-20745024992973359 & 1089983192632641429);
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((((((((arr_0 [i_0] [i_0]) ^ var_9))) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : 16)) : ((min((arr_1 [i_0]), var_3)))))) || var_16));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2 - 1] [i_0] [i_0] |= (arr_4 [i_2 + 3] [i_1]);
                    arr_9 [i_1] [i_1] [i_2] [i_0] |= (min(var_15, (arr_6 [i_0] [i_0] [i_2])));
                    var_20 += (min((arr_4 [i_0] [i_1]), (((!((((arr_6 [i_0] [i_0] [i_0]) ? 1577584156 : (arr_5 [i_0] [i_0] [i_2])))))))));
                }
            }
        }
        arr_10 [i_0] |= (min((((!(arr_6 [i_0] [i_0] [i_0])))), (arr_6 [i_0] [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = var_2;
        arr_14 [i_3] |= (((arr_4 [i_3] [i_3]) ? var_11 : ((((112 ? (arr_11 [i_3]) : 139)) ^ (((max(84, -1))))))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_21 = (arr_5 [i_4] [i_4] [i_4]);

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_22 = (((arr_4 [i_4] [i_4]) == ((((-var_16 && (arr_7 [i_5] [i_5] [i_5] [i_5])))))));
            var_23 += max((arr_1 [i_5]), -85);
            arr_19 [i_4] = (max((max((((arr_7 [i_5] [i_4] [i_4] [i_4]) ? var_4 : -1)), (arr_15 [i_4] [i_5]))), ((((max(2097144, var_19)) > (((arr_5 [i_4] [i_5] [i_5]) ? 9327173130923357451 : (arr_11 [i_4]))))))));
            arr_20 [i_4] [i_5] [i_4] = ((!((max(((min(-84, var_15))), ((var_17 ? var_17 : (arr_12 [i_5]))))))));
        }
    }
    var_24 = ((-126 ? var_2 : (max(((-1 ? var_11 : var_12)), (var_16 || var_0)))));
    var_25 = (max(var_25, var_2));
    #pragma endscop
}

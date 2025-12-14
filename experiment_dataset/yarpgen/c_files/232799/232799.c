/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = -var_10;
    var_20 |= ((var_7 % (~14875371195365062340)));
    var_21 = -7;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min((0 - 85), 81));

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_22 = (((arr_6 [i_0] [i_0 - 1] [i_0 + 2]) ? ((-((var_9 ? (arr_4 [i_0]) : (arr_0 [i_1]))))) : 69));
            var_23 = -984701684;
        }

        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0 + 2] = ((((((arr_0 [i_0 - 2]) <= (arr_5 [i_0 - 2] [i_0 + 3])))) > ((((178176582 ? 14471 : (arr_4 [i_0 - 1])))))));
            var_24 -= -2712847529415472244;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                arr_17 [i_0] = (((arr_13 [i_3] [i_4]) != -3));
                var_25 = (((arr_0 [i_0 + 2]) ? ((var_11 << (4997893218429907847 - 4997893218429907824))) : (59987 | 5548)));
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_26 = (max(var_26, (((-(arr_18 [i_0 - 1] [i_3] [i_5] [i_0]))))));
                arr_20 [i_0] [i_3] [i_5] [i_5] = 984701704;
            }
            var_27 = (((arr_1 [i_0] [3]) & var_4));
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_24 [i_0] [i_6] [i_0] = ((-((var_7 ? (arr_22 [i_0 - 1]) : (arr_22 [i_0 + 4])))));
            var_28 = (((((-((52219 ? var_9 : 1117548600705349268))))) ? ((17351936763939020929 ? var_5 : (2336843866 > 631512323734718935))) : -17));
            var_29 -= -107;
            var_30 = -3310265626;
        }
    }
    #pragma endscop
}

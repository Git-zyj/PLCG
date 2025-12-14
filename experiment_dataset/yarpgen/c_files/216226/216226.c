/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (4397509640192 - 1523926883);
        var_16 = (arr_0 [i_0]);
        var_17 = (min(var_17, (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = 98;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            var_18 = (arr_6 [i_2 + 1]);
            var_19 = ((-1815102669 + 343797075) ? (arr_6 [i_1]) : (-1815102669 != 3785624959715441590));
        }
        for (int i_3 = 4; i_3 < 20;i_3 += 1)
        {
            var_20 = ((-((((arr_10 [21] [i_3] [i_3 - 4]) && 9157178056644206019)))));
            var_21 = ((1815102669 ? (!var_4) : (arr_11 [i_1])));
            var_22 = ((2771040412 >> (((-121 <= (arr_8 [i_3] [i_3] [i_1]))))));
            arr_12 [i_1] = ((240 ? 12104345199267702176 : (arr_9 [i_3 - 2] [i_3 - 4] [i_3 - 2])));
        }
        for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
        {
            arr_15 [i_1] [i_4 - 1] = ((var_8 | (arr_8 [i_4 - 1] [i_4 - 1] [i_4])));
            arr_16 [i_1] [10] [i_4] = 15085;
            arr_17 [i_1] [i_1] [i_4 - 1] = ((~(arr_14 [i_4] [i_4 - 1] [i_4 - 1])));
            arr_18 [i_4] [i_4 - 1] [i_1] = ((15681098724320933014 ? -88 : (((arr_7 [i_4] [17]) >> (((arr_6 [i_1]) - 14324174393317540821))))));
        }
        for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
        {
            var_23 = 4059247375645032592;
            var_24 = 740487647;
            var_25 = (((arr_10 [i_1] [i_1] [i_5]) ? ((-1815102669 ? 166725116 : -1053050240)) : (arr_8 [i_1] [i_1] [i_5 + 1])));
            var_26 = -127;
        }
        arr_22 [i_1] [i_1] = (((~18446744073709551615) >> ((-(arr_8 [i_1] [i_1] [i_1])))));
        var_27 = (max(var_27, (-25005 | var_12)));
    }
    for (int i_6 = 2; i_6 < 24;i_6 += 1)
    {
        var_28 = ((((var_3 - (arr_23 [i_6 - 2] [i_6 + 1]))) - -1));
        var_29 = (min(var_29, ((min((((-24980 <= (arr_24 [i_6 - 2])))), (arr_23 [i_6] [i_6]))))));
        var_30 = (min((((min((arr_24 [i_6]), 1262883377665752006)) / (arr_23 [i_6] [i_6]))), (arr_23 [i_6] [i_6 - 2])));
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_31 = (min(var_31, (((+(((arr_27 [18]) / (min(24523, var_2)))))))));
        var_32 = (max(var_32, ((min(-1, (arr_27 [i_7]))))));
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 14;i_10 += 1)
            {
                {
                    arr_35 [2] [i_9] [2] [i_10] = (((((-(arr_4 [i_8])))) == (min(var_2, (((!(arr_32 [1] [1] [i_10]))))))));
                    var_33 = ((-1338823530 ? 879538566354326004 : 39627));
                }
            }
        }
    }
    var_34 = ((((4385704988085317900 * var_3) * var_11)) * (+-2789173679));
    var_35 = (102 != 0);
    #pragma endscop
}

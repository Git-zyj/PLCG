/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    var_19 = (((max(0, ((var_2 ? 0 : var_9)))) / (((-var_15 * (var_10 / var_0))))));
    var_20 = var_12;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = var_3;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [9] = ((((!(arr_6 [i_2 - 1] [i_1] [7] [i_2]))) ? (arr_4 [1] [1] [i_1 + 2]) : (((-(arr_7 [i_1 + 2] [i_1 + 2] [i_2]))))));
                    arr_9 [i_2] [i_1] [i_2] = ((((((-(arr_6 [i_0] [i_0] [8] [i_2])))) ? ((var_16 ? (arr_2 [i_2]) : (arr_5 [8]))) : (arr_6 [i_0] [i_1 + 1] [2] [i_2]))));
                }
            }
        }
        var_21 = (min((max((min(var_12, (arr_7 [1] [i_0] [8]))), ((((arr_0 [i_0] [i_0]) ? (arr_1 [5]) : 22253))))), var_5));
        arr_10 [i_0] [i_0] = ((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_22 [i_3] = ((11 ? (arr_14 [i_3] [i_4]) : ((+((((arr_21 [i_6]) <= 10366)))))));
                        var_22 &= 12954;
                        var_23 = (min(var_23, (((!((!((max(13754883890266999748, (arr_20 [i_3] [i_4] [14] [13])))))))))));
                        arr_23 [i_6] [i_3] [8] [i_3] = (!56652);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    var_24 = (min(0, var_17));
                    arr_29 [i_3] [i_7] [19] = 22260;
                    arr_30 [7] [1] = (arr_16 [i_3]);
                }
            }
        }
        arr_31 [i_3] [i_3] = ((var_16 ? (min(8896, 9223372036854775807)) : (arr_15 [12] [1] [i_3])));
        var_25 = (min(((var_16 ? (max((arr_24 [i_3] [i_3]), (arr_19 [i_3]))) : (((2598992205 ? 1 : -42))))), 5872463472066257342));
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        var_26 |= (!((!(((arr_33 [i_9] [0]) != (arr_16 [i_9]))))));
        arr_34 [i_9] [i_9] = (min((arr_14 [i_9] [i_9]), 22261));
        var_27 += ((((max(var_16, (((arr_1 [10]) * -26170))))) ? ((4691860183442551890 ? 34311 : 17073309720278286225)) : (((16476505745075095965 ? 10635 : 159)))));
    }
    #pragma endscop
}

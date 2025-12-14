/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_11 += max(32768, -25755);
        var_12 = ((((max((arr_2 [i_0] [i_0]), ((min((arr_1 [8]), (arr_3 [i_0]))))))) ? (((!(arr_0 [i_0] [i_0])))) : (((arr_3 [i_0]) ? (arr_1 [i_0]) : (((arr_0 [20] [20]) ? (arr_2 [11] [11]) : 4095))))));
        var_13 = (max(var_13, (((-((((min(128, (arr_3 [6])))) ? (((~(arr_3 [20])))) : -4927043871008997412)))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [6] = (((((-(arr_0 [i_1] [i_1])))) ^ (((63 % 10814818276687974367) ? 16756014257205647410 : (((1243658862 ? (arr_3 [1]) : (arr_4 [i_1]))))))));
        var_14 ^= (max((arr_5 [i_1] [i_1]), (min((((!(arr_3 [10])))), (max((arr_0 [i_1] [i_1]), 6802))))));

        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                arr_14 [i_2] [i_2] = 12000746791415664386;
                var_15 = (-(min((arr_4 [2]), (max((arr_0 [0] [i_2]), var_4)))));
            }
            arr_15 [i_2] [i_1] [i_2] = (!var_7);
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                var_16 = -4754;
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 9;i_8 += 1)
                        {
                            {
                                arr_32 [i_4] [i_5] [i_6 - 2] [i_6] [11] [10] [11] = 8942781569215162661;
                                arr_33 [i_4] [i_4] [i_4] = ((var_4 ? (((((((arr_25 [9] [i_5] [7]) ? (arr_8 [i_8]) : (arr_6 [19] [7])))) ? ((max((arr_25 [i_8 + 2] [1] [10]), 233122206))) : ((56 ? var_8 : var_7))))) : (max((~40046), (min(var_6, 1807309172234269256))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

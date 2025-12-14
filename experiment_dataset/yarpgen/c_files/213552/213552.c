/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((max(5402, var_12))) ? (max(3128196066, 5402)) : 108))) ? ((max(-23559, -9017))) : ((min((~var_17), (((!(-2147483647 - 1)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = ((-((((min(var_14, (arr_3 [0] [i_0] [i_1])))) ? ((44978 ? 23558 : (-127 - 1))) : -8644))));
                    arr_6 [i_0] [i_1] [i_0] = (((~var_2) ? ((-(arr_4 [i_0]))) : (arr_4 [i_0])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_20 = 5402;
                    var_21 = (((arr_12 [i_3 + 1]) % (max((arr_0 [i_3 + 1]), (arr_12 [i_3 - 2])))));
                    arr_15 [i_3] [i_3] [i_3] = ((((60134 ? var_11 : (((!(arr_1 [i_3]))))))) ? 15861 : var_16);
                    var_22 = (((var_9 + 9223372036854775807) >> (((((arr_2 [i_4 + 2] [i_3 - 1] [i_3 - 1]) ? (arr_2 [i_4 + 2] [i_3 - 2] [i_3 - 2]) : (arr_2 [i_4 + 1] [0] [i_3 + 1]))) - 4129558352))));
                }
            }
        }
    }
    var_23 = 1;

    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_19 [i_6] = (arr_10 [i_6]);
        arr_20 [i_6] = (+(((arr_7 [i_6] [i_6]) / var_8)));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_24 = (!3069391881);
        var_25 = (min(var_25, (((0 ? ((((var_10 ? var_0 : (arr_12 [i_7]))) << (((((arr_2 [i_7] [i_7] [i_7]) & var_3)) - 2518679922)))) : (-9223372036854775807 - 1))))));
        var_26 += ((((((max((-32767 - 1), 1225575415))) ? 15878 : ((~(arr_5 [18] [18]))))) >> var_8));
        var_27 = ((var_2 * (!1)));
        arr_23 [i_7] = ((var_5 ? (49684 % -1) : ((2166347731510212321 ? ((5408 ? -57 : (arr_13 [i_7] [i_7] [i_7]))) : (-32767 - 1)))));
    }
    #pragma endscop
}

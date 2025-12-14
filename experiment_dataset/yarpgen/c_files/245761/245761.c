/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (min(var_9, 1));
        arr_3 [i_0] = 31;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_6 [i_1] = 32;
        arr_7 [i_1 + 1] = var_10;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((((((9223372036854775807 | (arr_10 [i_2]))))) ? ((((!(((var_7 ? var_3 : 3031545825))))))) : (((((-6168926044695731792 ? 3546821848 : 1))) ? ((max(1036067849, var_7))) : (~-4755225847205557064)))));
        arr_12 [i_2] = var_10;
        arr_13 [i_2] = -1429099183;
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_19 [i_3] = ((9223372036854775796 >= ((var_5 ? 1 : ((-8761342601637088016 % (arr_10 [i_3])))))));
            arr_20 [i_3] [i_4] [i_4] = (((((-((~(arr_18 [i_3])))))) ? (((!-7789210385364892816) ? var_11 : (!var_12))) : (arr_15 [i_3] [i_4])));
            arr_21 [i_3] [i_3] [3] = (min(19, 124516794));
            arr_22 [6] [7] = 0;
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_25 [i_3] [i_5] = ((((31116 % (((arr_16 [i_3]) - (arr_1 [i_3]))))) >= (var_7 | var_13)));
            arr_26 [i_5] [i_5] = 18446744073709551615;
            arr_27 [i_3] [i_3] = 9494419185193141289;
        }
        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {

            for (int i_7 = 3; i_7 < 15;i_7 += 1)
            {
                arr_33 [i_6] = ((-(arr_16 [i_3])));
                arr_34 [i_3] [i_3] [i_6] [i_7] = (min((min(1678351435, 93)), ((max(var_11, 1)))));
            }
            arr_35 [i_6] = (arr_23 [16]);
        }
        arr_36 [i_3] [i_3] = ((~(max((arr_23 [i_3]), (min((-9223372036854775807 - 1), 202))))));
    }
    var_16 = ((min(var_0, (~62))));
    #pragma endscop
}

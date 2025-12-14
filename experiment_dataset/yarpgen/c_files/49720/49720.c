/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_16 = (max((min((arr_0 [17]), ((var_0 ? 255 : var_4)))), ((~(arr_0 [i_0 + 2])))));
        var_17 = (max(var_17, ((((((max(-1083570892799229856, var_1)) ? -1083570892799229856 : 255)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_6 [i_1] = (~((1083570892799229864 + ((((!(arr_5 [i_1] [i_2]))))))));
            arr_7 [i_1] [i_1] [i_1] = (max((((~9598) + ((-(arr_3 [i_1]))))), ((-((-(arr_3 [i_2])))))));
            var_18 *= ((((!(arr_5 [i_2] [i_1]))) ? ((((arr_4 [i_1] [i_2]) || (arr_5 [i_1] [i_1])))) : (((((((arr_3 [i_1]) ? 3779926221485039386 : (arr_3 [i_2])))) && -29359)))));

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                arr_10 [i_3] [i_2] [i_2] [i_1] = ((((max(((var_2 ? -1083570892799229841 : (arr_3 [i_1]))), ((((arr_3 [i_1]) ? (arr_3 [i_2]) : 125)))))) ? var_14 : ((((-1407284590 || var_8) ^ ((min(0, var_11))))))));
                arr_11 [19] [i_3] = (((var_11 | var_10) ? ((((arr_4 [22] [i_2]) * (arr_3 [i_3])))) : (29358 * var_15)));
            }
            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                var_19 = ((max((arr_2 [i_4 + 3]), (arr_2 [i_4 - 3]))));

                for (int i_5 = 3; i_5 < 23;i_5 += 1)
                {
                    var_20 += (arr_8 [i_1] [i_2]);
                    var_21 *= 1;
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    arr_20 [i_4] [i_4] = (((217972917 + 127) + ((4294967280 ? ((-122 ? (arr_15 [i_1] [i_1] [i_4] [i_4] [i_6] [i_6]) : 1083570892799229855)) : ((((1 > (arr_15 [i_1] [i_1] [i_4] [i_2] [i_4] [i_6])))))))));
                    var_22 = ((((!(arr_14 [i_1] [i_2] [i_4] [i_4 - 3]))) ? ((max(var_7, (arr_9 [21])))) : ((((arr_14 [i_4] [i_4 - 1] [i_4] [i_4 + 2]) ? (arr_19 [i_6]) : (((-1083570892799229860 <= (arr_2 [i_2])))))))));
                }
                arr_21 [i_1] [i_4] [i_4 + 1] = (((-((1 ? (arr_3 [i_4]) : (arr_14 [i_4] [i_2] [i_2] [i_1]))))));
            }
        }
        arr_22 [i_1] &= ((((((((arr_8 [i_1] [i_1]) ? 4076994383 : 4294967295))) ? (arr_13 [i_1]) : (min(var_15, var_11)))) >> (((arr_4 [i_1] [i_1]) - 62692))));
        var_23 = ((!((((arr_18 [i_1] [i_1] [i_1] [i_1] [18]) ? (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : 9598)))));
        arr_23 [i_1] &= var_1;
        arr_24 [i_1] [i_1] = (((((var_13 <= (arr_12 [i_1] [i_1] [0])))) <= (((arr_13 [i_1]) ? (arr_14 [i_1] [i_1] [10] [i_1]) : (arr_14 [i_1] [i_1] [i_1] [i_1])))));
    }
    var_24 = -var_5;
    #pragma endscop
}

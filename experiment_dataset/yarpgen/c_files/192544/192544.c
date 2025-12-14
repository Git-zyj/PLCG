/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_0] = max((((((min((arr_2 [i_0]), (arr_2 [i_1])))) >= (arr_4 [i_0])))), (arr_1 [5]));
            var_17 = ((((((arr_2 [i_0]) >= (((arr_2 [i_0]) / (arr_3 [i_1])))))) ^ (arr_2 [i_0])));
            var_18 = (arr_2 [i_0]);
            var_19 = (min((max((arr_0 [i_0]), (arr_3 [7]))), ((min(((((arr_3 [i_1]) > (arr_1 [i_0])))), (arr_3 [i_0]))))));
        }

        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            var_20 = (((arr_6 [i_0] [1]) % (arr_7 [i_0] [i_0] [i_0])));
            arr_8 [i_0] [i_2 - 1] [9] = (min(((max(((((arr_1 [9]) >= (arr_1 [i_0])))), (arr_7 [i_0] [9] [9])))), (min((min((arr_0 [i_0]), (arr_2 [i_2]))), (arr_0 [i_0])))));
            arr_9 [i_0] [i_0] = (arr_3 [i_0]);
            var_21 = (arr_3 [8]);
            var_22 = (arr_4 [i_0]);
        }
        var_23 = min((max((arr_6 [i_0] [i_0]), (min(-9223372036854775778, -9223372036854775777)))), ((((arr_6 [i_0] [13]) + (arr_2 [i_0])))));
        var_24 ^= (min((((max(-35, 418671713)) > (((min((arr_6 [3] [i_0]), (arr_6 [4] [4]))))))), (((9223372036854775781 && -65) < ((min((arr_6 [6] [i_0]), (arr_2 [i_0]))))))));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_25 = (max((((((((arr_12 [i_4]) / (arr_12 [i_3])))) && ((max((arr_15 [13] [i_4] [13]), (arr_11 [i_3]))))))), (((arr_13 [i_3]) / (arr_10 [i_4] [i_4])))));
            var_26 += (arr_14 [i_3]);
            var_27 *= (min(((((arr_10 [i_3] [i_4]) > (((arr_12 [i_3]) - (arr_10 [i_4] [i_4])))))), ((4 * (arr_14 [i_4])))));
        }
        arr_16 [i_3] = (min((((((arr_10 [8] [5]) >> (((arr_11 [i_3]) - 27819)))) | ((((arr_14 [2]) < (arr_15 [i_3] [i_3] [13])))))), (((((arr_14 [2]) | (arr_10 [7] [i_3]))) / ((min((arr_11 [i_3]), 112)))))));
        var_28 = min((max((max((arr_10 [i_3] [15]), (arr_10 [i_3] [i_3]))), (max((arr_12 [i_3]), (arr_10 [i_3] [10]))))), (arr_13 [i_3]));
    }
    var_29 = var_3;
    #pragma endscop
}

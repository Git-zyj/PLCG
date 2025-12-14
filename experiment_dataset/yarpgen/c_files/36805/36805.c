/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            var_14 ^= var_11;
                            arr_14 [i_0] [i_3] [i_2] [i_3] [i_1] [i_2] [i_3] &= ((1419867196626193568 >= (arr_1 [i_4 + 2])));
                        }
                        arr_15 [i_2] = (max((max(4294967269, (((1419867196626193581 || (arr_8 [i_0] [i_1] [i_2])))))), var_4));
                        var_15 = (((((-(((arr_7 [i_3]) ? 4294967269 : 27))))) ? (arr_2 [i_1]) : (!-5421)));
                    }
                    arr_16 [i_0] [i_0] = ((-(((!(arr_0 [i_1]))))));

                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        var_16 = (min((((((-(arr_13 [i_0] [i_0] [i_0] [9]))) <= (~var_8)))), (arr_17 [i_0] [i_0] [i_2] [1])));
                        arr_19 [i_0] [i_1] [i_2] [8] = ((arr_8 [i_0] [i_5 - 1] [i_2]) ? (!1) : ((((((arr_2 [i_2]) - (arr_7 [i_1])))) ? 1 : (arr_8 [i_1] [i_1] [i_0]))));

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_17 = ((!((min((arr_5 [i_0] [i_5 + 2] [i_5 + 2]), (arr_5 [i_1] [i_5 + 2] [i_1]))))));
                            var_18 = (arr_7 [i_2]);
                            arr_22 [i_0] [i_0] [i_2] [i_5] [i_6] = ((((2927300852 ? -1269480658 : var_8))) ? ((11696876454772411823 ? (arr_12 [i_5 + 1] [i_5] [i_5] [i_1] [9]) : (arr_12 [i_5 + 2] [i_5] [i_5 + 2] [i_5] [i_2]))) : (arr_2 [i_0]));
                            var_19 = (arr_12 [i_0] [i_1] [i_2] [7] [i_2]);
                            var_20 = ((((((min(38, (arr_17 [i_1] [i_2] [i_5 + 2] [i_6])))) ? 60 : (arr_13 [i_1] [i_2] [i_5] [i_6]))) | ((min((arr_21 [i_5 + 2] [i_1] [i_6] [i_1] [i_6] [i_0]), -32757)))));
                        }
                        var_21 = ((((((1271623523 & (arr_1 [7]))) >= (1 > 204))) ? (((max(0, (arr_13 [i_0] [i_0] [i_2] [i_5]))) ^ (arr_10 [i_5 + 2] [i_5 + 2] [i_5 - 2] [i_5]))) : (((((min(1, (arr_17 [i_0] [6] [i_2] [i_5])))) ? (arr_20 [i_5] [i_2] [i_1] [i_0]) : (((((arr_1 [i_0]) > 51)))))))));
                    }
                    arr_23 [i_0] [i_1] = ((250 ? 103 : (((arr_0 [i_1]) ? (arr_21 [i_2] [i_2] [8] [i_1] [i_0] [i_0]) : (250 > 1)))));
                }
            }
        }
    }
    var_22 = -var_8;
    var_23 = var_5;
    var_24 = 1;
    #pragma endscop
}

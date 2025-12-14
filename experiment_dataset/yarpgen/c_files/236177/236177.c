/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (1 < -64);
    var_15 = -26914;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = (min(var_16, ((min(1, (arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (min((min(((((arr_8 [i_0] [i_1] [i_1]) || (arr_8 [i_0] [i_1] [i_1])))), (arr_8 [i_0] [i_1] [i_1]))), (((((!(arr_5 [i_2] [i_1] [i_2])))) / (arr_1 [i_1] [i_1])))));
                    arr_9 [3] [i_1] [i_1] [i_1] = (min(-85, 3065070322692946221));
                    var_18 = (min((min(((-(arr_7 [i_0]))), ((max((arr_7 [i_0]), (arr_0 [i_0])))))), ((((arr_3 [i_0]) || ((max(45, -3065070322692946221))))))));
                }
            }
        }
        arr_10 [i_0] = (min((max((arr_6 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0]))), ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_19 = ((-(((arr_5 [8] [6] [i_3]) >> (((arr_5 [i_3] [0] [i_3]) - 1709982598))))));
        arr_13 [i_3] = ((((!(arr_8 [i_3] [0] [12])))));
        var_20 = (min(var_20, (((~(min(((min(54, 30084))), ((~(arr_3 [i_3]))))))))));
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        var_21 ^= ((min((arr_14 [8]), (((arr_15 [i_4]) >> (((arr_16 [i_4] [i_4]) - 1280976478684579951)))))));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_19 [i_4] [i_4 - 1] [i_4] = (((min((min((arr_17 [i_4] [i_5] [1]), (arr_14 [i_4]))), (arr_14 [i_4]))) < (arr_18 [i_4 - 1] [i_4] [i_5])));
            arr_20 [i_4] [i_4] [i_4] = (min((arr_16 [i_4 + 2] [i_5]), ((((((arr_18 [i_4] [i_4] [i_4]) - (arr_18 [i_4] [i_4] [i_4])))) + (((arr_18 [i_4] [i_4] [i_5]) + (arr_14 [i_4])))))));
            var_22 = (+(min((((arr_18 [i_4] [i_4] [7]) / (arr_16 [i_4 + 2] [i_5]))), (arr_15 [i_4 + 1]))));
            arr_21 [i_4] [i_4] = (arr_16 [i_4 - 1] [i_4 - 1]);
        }
        var_23 = ((min(64, 3065070322692946210)));
    }
    #pragma endscop
}

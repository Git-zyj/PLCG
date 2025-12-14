/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_13 *= ((42494 ? 23028 : 1530825412));
            var_14 = ((16075 | ((((((arr_2 [i_0 - 1] [i_1]) ? (arr_4 [i_1] [i_1] [i_1]) : (arr_1 [4])))) & var_8))));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_15 = (((-10172 / (arr_2 [i_2] [i_2]))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_13 [5] [i_2] [i_3] [i_4] = (10167 != 1530825412);
                        arr_14 [i_0] [i_0] [i_0] [i_0 + 2] = min(16075, -10172);
                        var_16 = ((~((((max(511, 37058))) ^ 49475))));
                    }
                }
            }
            arr_15 [10] = (arr_2 [i_0 + 2] [i_2]);
            var_17 ^= (max((arr_12 [7] [i_2] [1] [i_2] [i_0 + 1] [5]), var_11));
            arr_16 [i_0 - 1] [i_0 - 1] [i_2] |= var_8;
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_19 [1] [i_0] [i_5] = 8562915148935802390;
            arr_20 [i_5] = ((((var_7 || (((117440512 ? var_10 : var_2))))) || 10172));
            var_18 |= ((arr_9 [i_0]) + (max(var_9, var_7)));
            arr_21 [i_0] [i_0] [i_0] = (-13374 + 23041);
        }
        arr_22 [i_0] = ((((-1923760728 != (arr_2 [i_0 + 1] [0]))) ? (((-1923760723 ? (arr_2 [i_0 + 1] [0]) : var_3))) : (((arr_2 [i_0 + 3] [10]) ? var_5 : (arr_2 [i_0 + 2] [0])))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_19 ^= ((((10168 ? (max(var_3, (arr_26 [i_0]))) : ((var_8 >> (var_2 + 19310))))) >> ((min(-124, (arr_2 [10] [10]))))));
                    arr_30 [i_0] [i_6] [i_0] = (((((1612872768 / -1923760724) * var_1))) ? (((-(arr_17 [i_6] [i_0 + 4])))) : ((0 ? (min(27257, 14873979149384011390)) : (-1369342785 / var_0))));
                    arr_31 [1] [5] [i_7] = (max((42494 - 4095), (arr_18 [i_0 + 4] [i_0 - 1] [i_0 + 2])));
                    arr_32 [i_0 + 4] [i_0 + 4] [i_0] [i_0 + 4] = ((var_2 ^ (((((2764141884 ? -10186 : var_4))) ? ((min((arr_24 [i_6] [1]), 247))) : ((min((arr_28 [2] [2] [i_7]), 1)))))));
                }
            }
        }
        var_20 = (max(var_20, (((31 ? (max(0, 12919476459195820125)) : var_9)))));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
    {
        arr_35 [i_8] = ((1448228085 >> (38382 - 38379)));
        arr_36 [i_8] [i_8] = ((((2359736492280896300 ? 8 : 38382)) << ((((~(max(var_2, var_12)))) + 36698199035219420))));
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
    {
        var_21 = (min(var_21, var_10));
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    {
                        var_22 = (max(var_22, ((((((var_0 ^ (var_5 > 10235395107830506294)))) <= 1)))));
                        arr_48 [i_11] [i_11] [i_12] [i_11] = ((8058343665008783120 ? -124 : 1));
                    }
                }
            }
        }
    }
    var_23 = var_11;
    #pragma endscop
}

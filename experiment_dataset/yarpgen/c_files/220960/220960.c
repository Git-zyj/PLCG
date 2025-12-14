/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= 586802357;
    var_12 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = ((((((((arr_1 [i_0] [8]) < var_9)) ? var_7 : 3886280896609516542))) ? (min((arr_6 [i_1 - 2]), (~26809))) : ((max((arr_6 [9]), ((max((arr_2 [i_0]), var_2))))))));
                                var_14 *= ((((((arr_9 [i_1 - 3] [i_1 - 1]) ? (arr_4 [i_0] [i_2] [i_2] [i_3]) : (arr_11 [i_2] [i_1] [10] [i_3] [i_1])))) ? (((arr_4 [i_0] [i_4] [i_3] [i_4]) ? var_4 : var_7)) : ((min((arr_9 [i_2] [i_0]), 1)))));
                                var_15 = (max(((0 ? 3886280896609516528 : -3886280896609516531)), ((min(1, -1706734025)))));
                            }
                        }
                    }
                    arr_12 [15] [i_0] [i_0] = (((((((var_5 > (arr_6 [i_0])))))) ? ((max(-1, 22740))) : (((var_8 != var_0) ? (max(var_5, var_3)) : var_0))));
                    var_16 = var_2;

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_17 = ((((var_3 ? (arr_9 [i_1 - 2] [i_1 - 2]) : var_9)) > (((-(arr_9 [i_1 - 2] [i_1 + 1]))))));
                        var_18 ^= (min(((((((~(arr_15 [i_0] [i_1])))) == (((arr_10 [i_0] [i_0] [i_1] [i_2] [i_2] [i_1]) ? var_4 : var_3))))), var_1));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {

                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            var_19 = (41859 >= -3886280896609516560);
                            var_20 -= ((((-((min(var_5, (arr_9 [i_0] [i_0])))))) > var_5));
                            var_21 = var_0;
                            var_22 = (max(var_22, 907517687));
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] = ((((max(((var_6 ? var_7 : var_9)), (var_2 > 26809)))) ? ((var_5 ? (arr_16 [i_0]) : (arr_16 [i_0]))) : (((((max(-7, var_5))) < -31233)))));
                            var_23 *= ((~((((min(var_2, 1))) ? var_8 : ((min(var_4, var_1)))))));
                        }
                        var_24 += ((((max((max(var_3, var_7)), var_7))) ? var_9 : var_0));
                    }
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_25 = (min(((((((arr_24 [i_9]) ? var_2 : var_7))) ? var_4 : var_9)), (((((arr_25 [i_9]) > var_1)) ? ((var_6 ? var_9 : var_7)) : 50))));
        var_26 += var_10;
        var_27 = ((((max(1, (min(1, 5893136930637304568))))) ? (min(((min(174341590, 2345417982))), 14308811595467208439)) : ((((arr_24 [i_9]) ? (~var_8) : var_7)))));
        var_28 = (max(((((min(var_9, var_10)) > var_1))), (arr_24 [i_9])));
        var_29 = var_9;
    }
    var_30 = var_10;
    #pragma endscop
}

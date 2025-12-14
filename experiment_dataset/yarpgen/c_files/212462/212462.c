/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((~((((var_11 != 11658255909593649241) || var_11)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((127 ? 11658255909593649242 : 248));
        var_18 = ((!((!(arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_19 = (((arr_1 [i_3] [i_2 - 1]) * ((((var_6 / 11658255909593649250) < -20)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((((var_15 ? ((min(var_8, (arr_10 [i_1] [12] [i_4])))) : (arr_7 [i_4]))) == (arr_6 [i_2] [i_2 - 4] [i_2 + 1]))))));
                                arr_19 [i_3] [i_2] [i_3] [i_3] [i_5] [i_3] = (((((0 ? (arr_8 [i_2]) : -1720085681998351460))) != ((max((arr_18 [1] [i_1] [i_2 - 2]), (arr_18 [11] [i_1] [i_2 - 3]))))));
                                arr_20 [i_3] [i_4] = var_7;
                            }
                        }
                    }
                }
            }
        }
        var_21 = (max(var_21, ((((((var_16 ? (((var_12 >= (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [1])))) : ((((arr_12 [i_1] [i_1] [i_1] [i_1]) >= 3)))))) ? ((((!((max(6788488164115902375, 1))))))) : (((19 ? -7596027817296561834 : 6063394615062091204))))))));
        var_22 ^= (((~(arr_16 [i_1] [10] [i_1] [12] [i_1] [i_1] [i_1]))));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            {
                arr_27 [i_6] [i_7] [i_6] = ((var_10 ? ((-((~(arr_26 [i_6] [1] [i_7]))))) : -31));
                var_23 = ((131 <= 111) >= (((arr_22 [i_6]) ? 11658255909593649241 : 99)));
            }
        }
    }
    #pragma endscop
}

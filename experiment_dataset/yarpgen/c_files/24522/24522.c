/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 7;
        arr_5 [i_0] = (~-124);
        var_18 *= -4515923814268843480;
        arr_6 [15] = (8066026408779763308 && 2147483647);
        var_19 += (((((arr_0 [i_0] [8]) ? (arr_2 [i_0] [i_0]) : 238)) >= (!var_17)));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_20 = (min(var_20, ((((arr_0 [i_1] [i_1]) >= (((arr_0 [i_1] [i_1]) ? 18 : (arr_0 [i_1] [i_1]))))))));
        var_21 |= var_15;
        var_22 += 238;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_13 [i_2] = 232;
        arr_14 [i_2] = (arr_2 [i_2] [4]);
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_23 = (min(((var_11 ? (arr_7 [i_3]) : (arr_7 [i_3]))), ((((min(40, (arr_11 [0] [i_3])))) << ((((var_0 ? (arr_7 [10]) : var_13)) - 77))))));
        arr_17 [1] = (arr_3 [i_3] [i_3]);
        var_24 = var_1;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_27 [i_6] [i_6] [i_3] [i_3] [i_3] [i_6] = (var_7 ? ((~(arr_12 [i_4] [1]))) : (max(18446744073709551615, ((min((arr_16 [i_7] [0]), var_8))))));
                            var_25 = (((((!-583310954) >> (238 + 19))) / (((((arr_12 [i_3] [i_3]) >= 2109881685765533576))))));
                            var_26 += (min(((((((arr_22 [10]) ? 120 : 31))) ? ((var_1 ? (arr_20 [i_5] [i_3] [i_3]) : (arr_0 [i_5] [5]))) : (((((arr_16 [i_5] [i_4]) < var_13)))))), (((2147483647 ? 216 : (arr_1 [i_6]))))));
                            var_27 = (max(var_27, var_15));
                        }
                        var_28 *= (((min((arr_25 [1] [i_5] [i_3] [i_3] [i_3]), ((14 ? 18 : 146)))) != ((min((arr_24 [i_4] [i_4]), 61260)))));
                        var_29 = ((~(arr_8 [i_3])));
                        var_30 = 3;
                    }
                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        arr_30 [i_8 - 1] [7] [7] [3] [i_3] &= ((58612 ? ((-6504 ? 1296778346 : var_16)) : ((min((min(var_2, 648420742)), (!3294618691278897690))))));
                        arr_31 [i_8 - 2] [9] [i_3] [i_4] [i_3] = (min(((((arr_22 [1]) | (arr_9 [i_8 - 1] [i_8 - 1])))), ((min(var_9, (arr_9 [i_4] [i_4]))))));
                    }
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        arr_34 [i_9] [i_5] [i_4] = var_4;
                        var_31 = (max(var_31, (((~(min((arr_23 [i_9] [i_5] [i_4] [i_3] [i_3] [i_3]), ((max(238, 221471543))))))))));
                    }
                    arr_35 [i_3] [i_3] [10] [i_3] = (min((arr_10 [i_5]), (arr_10 [4])));
                    var_32 = (max(var_32, (((!((!(arr_23 [8] [1] [9] [i_3] [i_3] [i_3]))))))));
                }
            }
        }
    }
    var_33 = (((((((min(var_11, var_0))) ? 109 : -1135152642))) ? (((var_16 | 114) % var_14)) : var_2));
    #pragma endscop
}

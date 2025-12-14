/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((!(((var_0 ? 132 : var_4))))))) * (((min(var_7, 16383)) - (((-49 ? var_6 : 23)))))));
    var_16 = (((1 < (((5627984721667061691 ? 3557220566 : 136))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = arr_1 [i_2] [i_1];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = ((!((!(((237 ? (arr_10 [i_3] [i_1] [9] [i_1]) : (arr_3 [i_3] [i_3]))))))));
                                var_19 = (max(var_19, ((((((arr_10 [i_2] [i_2] [i_2] [i_2]) ? (arr_10 [i_2] [4] [i_2] [i_0]) : (arr_10 [i_2] [i_2] [i_3] [i_4]))) <= (16290626255121829554 >= 48))))));
                                arr_13 [i_1] [i_1] [9] [i_3] [7] [i_1] = ((!((((arr_4 [7]) ? (((!(arr_2 [i_2])))) : 536870904)))));
                                var_20 = (min(var_20, ((((min((arr_8 [i_0] [i_1] [i_2] [i_3] [i_2]), ((1 ? 586641467 : 78)))) / 3708325820)))));
                            }
                        }
                    }
                    var_21 += (!3708325829);
                    var_22 += (min(3708325836, ((((3758096391 ? 17581679035803791507 : 8188982341168912333)) - 3708325836))));
                    var_23 += (!586641466);
                }
            }
        }
    }
    var_24 = (var_14 ? var_10 : var_9);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (((!(arr_3 [i_0] [i_1 + 1]))) ? 15378 : (((arr_4 [i_0]) / ((var_3 ? (arr_0 [i_0] [8]) : (arr_4 [i_0]))))));
                var_13 += (min((((((var_7 && (arr_4 [12]))) ? (!var_10) : (arr_1 [i_0])))), (arr_4 [10])));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_7 [i_2] = (((((~50157) ? (~9023075639471103702) : (arr_1 [i_2]))) % ((~((1416254574 ? (arr_4 [i_0]) : (arr_0 [i_0] [i_0])))))));
                    var_14 += (((arr_4 [i_0]) ? ((((arr_2 [i_1 + 1]) ? (arr_1 [i_1 + 3]) : (((!(arr_6 [i_0] [i_0] [i_0] [i_0]))))))) : ((min(48574, (arr_4 [i_0]))))));
                    arr_8 [i_1] [i_1] [i_2] [i_2] = ((((((arr_2 [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_5 [i_0] [i_1] [i_2])))) && ((((arr_5 [i_0] [i_1] [i_2]) ? (arr_4 [i_0]) : (arr_3 [i_0] [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_11 [i_0] [i_1] [i_3] = (((((896196498 ? (arr_3 [i_1 + 4] [i_1]) : var_5))) ? (min((((!(arr_4 [11])))), ((0 ? (arr_2 [1]) : (arr_1 [i_0]))))) : ((~(((arr_9 [i_0] [7] [i_3]) & 0))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_15 = ((145691814408113649 >> (255 - 194)));
                                var_16 = (((((-(arr_5 [i_5 - 2] [i_1] [i_1 + 3])))) ? (arr_6 [i_0] [i_1] [i_3] [i_5]) : (arr_2 [i_5 - 2])));
                                var_17 = (max(var_17, (((-(((arr_15 [i_5 + 2]) ? (arr_15 [i_5 + 2]) : (arr_15 [i_5 - 1]))))))));
                                var_18 = (-9000647723862135279 / 15360);
                                arr_17 [i_0] [i_1] [i_1] = (((((-127 - 1) ? var_9 : 40774))));
                            }
                        }
                    }
                    var_19 = (min((((-(arr_6 [9] [4] [7] [i_3])))), ((7701558512766108498 ? 1 : (arr_13 [i_0] [10] [i_0] [i_0] [i_0] [10])))));
                    var_20 = (max(var_20, ((max((((-(arr_5 [i_1 - 1] [i_1] [i_1])))), (((arr_14 [i_0] [i_1]) * ((var_6 * (arr_9 [i_0] [i_0] [i_3]))))))))));
                    arr_18 [i_0] [i_1] [i_3] &= ((((((arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 3]) ? var_0 : (arr_6 [i_1 + 2] [i_1 + 1] [i_1 + 3] [i_1 + 1])))) ^ (min((arr_6 [16] [i_1 + 1] [i_1] [i_1 + 1]), (~392707742)))));
                }
            }
        }
    }
    var_21 &= var_9;
    var_22 = 3449839373;
    #pragma endscop
}

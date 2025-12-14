/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = ((-(((!(arr_7 [i_0] [1] [i_0] [i_0] [i_4] [i_4]))))));
                                var_19 = var_13;
                                var_20 = (-1666832981 >= 1666833005);
                                arr_11 [i_0] [1] [i_0] [4] [i_2] = ((~((~(min(-1666833012, var_0))))));
                                var_21 = (min(var_21, 0));
                            }
                        }
                    }
                    var_22 = (max(var_22, (((~((~(arr_6 [i_1] [i_1] [i_1]))))))));
                    var_23 = (((-2147483647 - 1) - 182041758804073938));
                    var_24 ^= var_11;
                    var_25 = (((!var_6) << ((((~(min(var_9, var_14)))) - 18446744072628479572))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_26 &= ((98 ? (-2147483647 - 1) : -104));
                var_27 = (((((arr_0 [1] [i_6]) ? (arr_2 [i_5] [11] [i_5]) : (min(var_12, 18264702314905477677)))) / (((((((arr_7 [i_5] [i_6] [i_6] [i_5] [i_6] [i_5]) ? (arr_14 [i_5] [i_6]) : 18446744073709551611))) ? var_11 : (arr_1 [i_5]))))));
            }
        }
    }
    var_28 = -var_3;
    var_29 += ((((~(var_17 & var_12))) << (var_4 - 108)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_1 / -var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [8] [i_1] &= (max(((17269864349262520724 ? 110 : (arr_3 [0] [i_1 - 1]))), ((7 ? (arr_3 [6] [i_0]) : (arr_3 [10] [10])))));
                arr_5 [i_0] [i_0] = (((!1487561775) ? (!79) : (((((1487561775 ? 0 : 79))) ? (arr_2 [i_0]) : ((63 ? 61 : 2827622184))))));
                var_16 &= (((arr_3 [0] [i_1 - 1]) + 2));
                arr_6 [10] [i_0] [1] = (((arr_3 [i_0] [i_1 + 2]) ? (arr_3 [i_0] [i_1 + 1]) : (arr_3 [i_0] [i_1 - 1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_19 [i_2] = ((((((min(0, 3))) ? (((arr_11 [i_4]) + (arr_9 [i_2]))) : (arr_9 [i_3]))) & (arr_11 [i_5])));

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 16;i_6 += 1)
                            {
                                arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] = ((((255 ? 5947257354192609647 : (arr_13 [i_2] [i_2] [i_4]))) == (~1601727552)));
                                arr_25 [i_2] [i_3] [i_4] [i_2] [15] &= -67076096;
                            }
                            var_17 = (min(var_17, (((~((2147483647 ? 17269864349262520724 : 156)))))));
                            var_18 = (max(var_18, (((255 ? (12499486719516941968 / 1637597095) : (((~(arr_12 [i_2] [i_5] [i_4])))))))));
                        }
                    }
                }
                arr_26 [i_3] [i_3] [i_3] = ((((max(255, 1447303185))) % (min(18446744073709551615, (arr_10 [i_2])))));
                arr_27 [i_2] [9] &= (((1 && 100) ? (min(5947257354192609647, 1540800521)) : 4294967295));
            }
        }
    }
    #pragma endscop
}

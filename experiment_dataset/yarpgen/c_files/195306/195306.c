/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((4043524697 ? ((var_13 ? var_7 : ((var_0 ? var_1 : 64248)))) : (max(var_9, ((1 ? 13204273179631466115 : 2905398592))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = (max(var_18, ((18446744073709551615 ? (((arr_1 [i_0]) ? 13205581978719580401 : (arr_0 [i_0]))) : (arr_1 [i_0])))));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_19 = 1664716905560416162;
            var_20 *= (((arr_0 [i_0]) ? 16782027168149135453 : ((((arr_2 [i_0]) ? (arr_3 [i_1 - 1]) : 40904)))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_21 = (((arr_1 [i_0]) ? 16782027168149135453 : (arr_1 [i_2])));
            var_22 = ((1664716905560416156 ? (arr_2 [i_0]) : 16782027168149135456));
        }
        arr_6 [i_0] = ((((((arr_3 [10]) ? (arr_0 [i_0]) : (arr_5 [i_0] [i_0])))) ? (arr_1 [i_0]) : (arr_2 [9])));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_11 [i_0] = (((arr_0 [i_0]) ? (((arr_7 [i_0]) ? (arr_9 [i_0] [i_0]) : (arr_2 [i_3]))) : 16782027168149135447));
            var_23 ^= 39637;
        }
        var_24 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = (arr_12 [i_4]);
        arr_15 [i_4] [i_4] = (((((16782027168149135459 ? (arr_13 [i_4]) : 1664716905560416162))) ? ((16782027168149135453 ? 65535 : (arr_13 [i_4]))) : (arr_12 [i_4])));
        arr_16 [i_4] [i_4] = ((16782027168149135454 ? (arr_12 [i_4]) : (arr_13 [i_4])));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    {
                        arr_26 [i_4] = (arr_21 [i_4]);
                        arr_27 [i_4] [i_5] [i_6] = ((65513 ? 2147483647 : 16782027168149135459));
                        var_25 = (arr_25 [i_7 + 2] [i_4] [i_5] [i_4]);
                    }
                }
            }
        }
        var_26 = -23014;
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_27 = (max(var_27, (max(144, 60022))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    {
                        var_28 = ((min(5340342938875489050, ((1664716905560416162 ? 12170074028822700761 : 16782027168149135459)))));
                        var_29 = 7324727477814264044;
                    }
                }
            }
        }
        var_30 = ((max(4240361267013929764, ((((arr_32 [i_8]) ? 2080 : -6515327558651737815))))));
    }
    #pragma endscop
}

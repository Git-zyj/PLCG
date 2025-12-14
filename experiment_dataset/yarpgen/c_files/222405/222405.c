/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_13 = (max((min((((arr_3 [i_0] [i_1]) * 27354)), (7936 && 8191))), ((((min(var_0, (arr_0 [i_0 - 1])))) ? ((((arr_2 [i_0 + 2] [13] [i_1]) && (arr_3 [i_0] [i_0 - 1])))) : (((arr_2 [i_0 - 2] [i_0] [0]) * (arr_2 [i_0] [i_1] [i_1])))))));
            var_14 = ((((min(9223372036854775807, 180398895))) ? 0 : ((((!((max(16348, 7520)))))))));
            var_15 = (max(var_15, var_12));
            var_16 = (min(var_16, (arr_1 [i_0 - 1])));
        }
        arr_4 [i_0] = (~var_1);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_17 *= (max((max(((var_8 % (arr_3 [i_0 - 2] [i_0]))), (arr_6 [8]))), (arr_1 [i_0 + 2])));
                    arr_9 [i_3] [i_2] [i_2] [i_0] = arr_7 [i_2] [i_3];
                    var_18 &= ((((((arr_2 [i_0 - 2] [i_0 + 1] [i_2 - 1]) ? (arr_2 [i_0 - 2] [i_0 + 2] [i_2 - 2]) : (arr_2 [i_0 - 2] [i_0 - 1] [i_2 - 1])))) / (arr_2 [i_0 + 2] [i_0 + 1] [i_2 - 1])));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_12 [4] |= (max((min(0, (0 == var_11))), (max(var_4, (arr_10 [i_4])))));
        var_19 = ((var_9 <= ((((arr_10 [i_4]) ? (arr_10 [i_4]) : var_10)))));
        var_20 -= (((var_11 <= ((min((arr_11 [16]), 16348))))));
    }
    for (int i_5 = 2; i_5 < 8;i_5 += 1)
    {
        var_21 = (((((((arr_8 [i_5]) <= 64)))) >= (arr_8 [i_5])));
        var_22 &= (min((arr_7 [0] [i_5 - 2]), (min((((arr_14 [6] [6]) ? 2146435072 : (arr_13 [i_5]))), ((min((arr_3 [i_5] [0]), 65535)))))));
    }
    var_23 = ((var_3 >= ((((((-9223372036854775807 - 1) ? 65535 : 1))) ? 1 : (!136)))));
    #pragma endscop
}

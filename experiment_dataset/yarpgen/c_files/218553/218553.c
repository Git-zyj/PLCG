/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_1 ? (var_9 > -1873592689) : 1319037967118241187);
    var_11 = ((((var_2 ? var_3 : 122))) <= (max((var_0 & var_9), var_6)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = ((((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) != (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 7))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [7] = ((((min((arr_4 [i_1 - 2] [i_1 - 2] [i_2 + 1] [i_2 + 1]), (arr_5 [i_1 - 2] [i_1 - 2] [i_2 + 1] [i_2 + 1])))) ? ((-1 ? (arr_5 [i_1 - 2] [i_1 - 2] [i_2 + 1] [i_2 + 1]) : (arr_4 [i_1 - 2] [i_1 - 2] [i_2 + 1] [i_2 + 1]))) : (((arr_5 [i_1 - 2] [i_1 - 2] [i_2 + 1] [i_2 + 1]) ? -26114 : -31904))));
                    arr_8 [i_0] [i_0] [i_0] = (arr_2 [i_2]);
                    arr_9 [i_2] [i_0] [i_0] [i_0] = (min((arr_2 [i_0]), ((~(arr_2 [i_2])))));
                }
            }
        }
        var_13 = ((((((-127 - 1) ? 57955 : 18035))) ? var_3 : var_7));
        var_14 = (min(var_14, (min((max((arr_1 [18] [i_0]), (arr_1 [0] [6]))), (max((arr_1 [12] [i_0]), (arr_1 [22] [i_0])))))));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_12 [i_3] = (max(((var_5 < (arr_2 [i_3]))), (max((arr_2 [i_3]), (arr_2 [1])))));
        var_15 ^= (min((arr_2 [i_3]), (max(-33385076, 1))));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_16 &= (max((((~((1 ? (arr_6 [i_4] [i_4]) : 1839611915))))), (((((var_1 ? var_8 : 1))) ? 1005438453 : (min((arr_4 [1] [13] [i_4] [i_4]), var_0))))));
        var_17 |= ((~((-(arr_3 [i_4] [12] [i_4])))));
    }
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        var_18 -= ((((((1 || -8745) ? 1296403039 : (arr_14 [i_5] [i_5 - 1])))) ? ((((max(241, -882411289)) - (((arr_16 [i_5]) ? (arr_11 [i_5 - 2]) : (arr_6 [i_5 + 2] [2])))))) : (arr_14 [i_5 + 1] [i_5 - 1])));
        var_19 = ((min((min(2147483630, var_2), (~16)))));
    }
    #pragma endscop
}

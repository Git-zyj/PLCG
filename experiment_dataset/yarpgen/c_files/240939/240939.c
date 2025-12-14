/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_10 = (min(var_10, (var_9 < var_3)));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = (max((((((arr_2 [i_0]) ? (arr_0 [i_1] [i_0]) : var_8)) + 86)), (arr_1 [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_11 = ((((max((((arr_3 [i_3] [i_1]) ? 1 : (arr_1 [7]))), (((arr_6 [i_0] [i_2] [i_3] [i_3]) >> (((arr_10 [i_0] [i_1]) + 515213897))))))) ? ((-((1 ? 1410247210 : (arr_8 [i_0] [i_0]))))) : ((~((84 ? (arr_4 [i_0] [i_1] [i_1]) : (-2147483647 - 1)))))));
                        arr_13 [i_2] [i_2] [i_2] [i_2] = (((max(((!(arr_11 [i_0]))), (((arr_12 [i_0] [i_0] [16] [i_2] [i_3]) <= (arr_0 [i_1] [11]))))) ? (((((((-9223372036854775807 - 1) <= 42130))) ^ ((min(1, 59)))))) : (((arr_6 [i_1] [0] [i_2] [i_2 - 2]) ? ((min(var_0, var_9))) : (arr_9 [i_2] [i_2 - 1] [i_2 + 1] [i_2 + 1])))));
                        arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] = ((-1 ? ((~(65476 > 24))) : (((var_3 & -86) + (224 > 1)))));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_18 [4] [i_4] = (var_8 >= 36156);
            var_12 = (max((arr_9 [i_4] [i_4] [i_4] [i_0]), ((max(((32767 ^ (arr_7 [i_4]))), ((170 ? (arr_6 [i_0] [i_4] [i_4] [i_4]) : 176)))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    {
                        var_13 = (max(var_13, 1));
                        var_14 = (max(var_14, ((((min((-9223372036854775807 - 1), 1))) ? ((~((~(-9223372036854775807 - 1))))) : (((((arr_2 [i_0]) <= ((42 ? (arr_1 [i_0]) : 189))))))))));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_15 = (min(var_15, (arr_4 [i_0] [i_7] [i_7])));
            var_16 = ((!(((((42700 ? 1 : var_2)) + (!1700756562))))));
        }
    }
    var_17 = (max(var_17, (((((((((65535 ? 652165177 : var_4)) > ((max(var_7, var_8))))))) >= (((!var_2) ? (((12667 ? var_1 : -1623130204))) : -642571814714760426)))))));
    var_18 = ((-(min((!1730089464), (var_5 + 0)))));
    var_19 = 165;
    var_20 = ((~(((26489 != 22849) ? (~var_0) : var_7))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((min(var_1, (~var_4))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_18 ^= (((((((((arr_1 [i_0] [i_0 + 1]) ? (arr_3 [i_0] [i_0 - 1] [i_0]) : (arr_3 [i_1] [i_1] [i_1])))) ? (arr_0 [i_0 - 2] [14]) : (arr_0 [2] [2])))) ? 2 : ((((!(((1442821266 << (((-2941474282807614977 + 2941474282807614984) - 7)))))))))));
            arr_5 [i_0] [i_1] [i_0 + 1] = ((!((max((arr_3 [i_0] [i_0] [i_0 - 1]), (arr_3 [i_0] [i_0] [i_0 + 1]))))));
            arr_6 [i_0] [i_0] = ((-(max((arr_0 [i_0 - 2] [i_0]), (arr_0 [i_0] [i_0])))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_19 = (arr_7 [i_0]);
            var_20 = -1440136401;
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_21 -= ((-(((!(arr_15 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]))))));
                            arr_18 [i_0] = ((((arr_2 [i_0]) ? (((4210310436 > (arr_13 [i_0] [i_4] [i_5] [i_0])))) : (((arr_16 [i_6] [i_5] [i_4] [3] [3]) ? 0 : (-2147483647 - 1))))));
                        }
                    }
                }
            }
            var_22 = (-((((((arr_11 [i_0] [i_0] [i_3]) ? 3707063980 : -1442821262))) | (((arr_8 [i_0] [i_0]) ? 1025606891368476174 : (arr_3 [i_0] [i_3] [i_0]))))));
            var_23 = arr_9 [i_0] [9] [9];
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_24 ^= (((((-1014862896 ? (arr_12 [i_0 + 1] [i_7] [i_0 - 2]) : (arr_12 [i_0 - 2] [i_7] [i_0 + 1])))) ? (arr_12 [i_0 - 2] [i_7] [i_0 + 1]) : ((-(arr_12 [i_0 + 1] [i_7] [i_0 - 1])))));
            var_25 ^= ((arr_13 [i_7] [i_7] [i_7] [i_7]) ? (arr_3 [i_0] [i_0 - 2] [i_0 - 2]) : (((arr_20 [i_7] [i_7]) ? (((arr_14 [i_0] [i_7]) ? 65520 : (arr_7 [i_7]))) : ((4186377461 ? (arr_1 [i_0 - 2] [9]) : 2147483647)))));
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                {
                    var_26 ^= arr_11 [i_0 - 2] [i_8] [i_8];
                    var_27 += arr_0 [i_8] [i_8];
                }
            }
        }
        var_28 = (max(var_28, (((((((((arr_23 [0] [0] [i_0]) + 1))) ? (max(1569301870, 4140911715)) : (arr_21 [2]))) - 4294967295)))));
    }
    #pragma endscop
}

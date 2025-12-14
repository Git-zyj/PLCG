/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = 0;
                arr_6 [i_0] = (min(((((((var_10 ? 4294967292 : 79))) ? ((max((arr_4 [7] [i_1]), (arr_5 [7])))) : var_13))), (min((min((arr_0 [i_0 + 2]), 0)), (arr_0 [4])))));
            }
        }
    }
    var_17 = var_1;
    var_18 = var_12;

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_19 = ((var_13 > ((-(max(var_4, (arr_8 [i_2] [i_2])))))));
        var_20 *= ((((+(max((arr_8 [4] [4]), 7))))) && (arr_7 [i_2] [i_2]));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_21 = ((~(arr_9 [i_3])));
        arr_12 [i_3] = (arr_9 [i_3]);

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_22 = (min((max(var_4, (arr_13 [i_3] [1] [i_3]))), ((~(max(136339441844224, -1922078672))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    {
                        var_23 = (max(8733345551016353346, ((min((arr_16 [i_3]), (arr_16 [i_3]))))));

                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            var_24 = (((arr_11 [i_7]) ? ((0 ? ((((8733345551016353346 && (arr_17 [i_3] [i_3] [i_3]))))) : ((var_11 ? var_14 : 9713398522693198269)))) : (((~((var_10 + (arr_11 [i_6]))))))));
                            var_25 &= ((!(144115188075855872 >= 17129)));
                            var_26 = 2047;
                            var_27 = 0;
                        }
                        var_28 = 47935;
                        var_29 |= ((((min(9713398522693198269, ((~(arr_24 [13] [i_5] [3] [i_4] [i_3])))))) ? ((((59470 || 8675683259074873978) ? var_10 : (arr_10 [i_6 + 2] [i_4])))) : (((((max((arr_11 [i_6]), var_3)))) / (min(839562211180380158, (arr_15 [9] [16])))))));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            arr_28 [i_8] = ((-(arr_10 [3] [i_8])));
            var_30 -= ((-((var_11 ? (arr_9 [i_8]) : (arr_9 [i_3])))));
            var_31 += (min((((((~(arr_21 [16] [i_3] [15] [i_3])))) ? (((353 ? -5124 : 47797))) : 12537545039679811632)), ((min((min((arr_23 [i_3] [i_8]), var_10)), ((9713398522693198270 ? (arr_9 [5]) : var_4)))))));
        }
    }
    var_32 *= (((((-((var_1 ? var_14 : var_4))))) >= ((var_2 ? (6 - var_8) : 4294967295))));
    #pragma endscop
}

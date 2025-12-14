/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 0;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((~(var_4 ^ var_8))) + 2147483647)) >> (61 - 33)));
        arr_4 [i_0] [i_0] = (((((~(min(-1179877889, var_3))))) ? var_12 : (min((arr_0 [i_0 + 1]), (~8950915630404620921)))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_14 = (max(var_14, (((37523 ? 10295352657477951755 : (max((max((-32767 - 1), 8475866424641062033)), (((var_0 ? var_8 : var_8))))))))));
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_15 ^= -var_11;
                            var_16 = (min(var_16, ((((arr_15 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5]) - (arr_20 [6] [4]))))));
                            var_17 ^= (~-62);
                            var_18 ^= ((((max((arr_10 [i_3 + 1]), (arr_9 [0] [i_5 - 1])))) ? (((arr_8 [i_4] [i_3] [i_2]) ? (((-2147483647 - 1) ? 17838264589723797465 : var_10)) : 27996)) : ((~(((arr_1 [14]) ? var_11 : (-2147483647 - 1)))))));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_19 = ((var_4 ? ((((var_1 ? -2695194778876272835 : var_8)) - var_2)) : var_2));
                var_20 = var_10;
                var_21 = (min(var_1, (-9223372036854775807 - 1)));
            }
            arr_26 [i_1] [i_1] [2] |= (((var_9 ^ var_3) ? ((((min(0, var_10))))) : (min(90, ((var_10 ? var_5 : 1))))));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        var_22 = 27996;
                        var_23 &= ((((~(~61))) << (((min(((min(var_6, 61971))), var_5)) - 61954))));
                    }
                }
            }
            var_24 -= ((11 | (((var_4 << (((arr_29 [i_1] [i_1]) + 296567581332428829)))))));
        }
        var_25 ^= (((((65524 ? (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [8]) : ((max(var_1, var_8)))))) ? (((max((min(var_7, 26)), 8)))) : (((246 - var_12) ? (arr_12 [4] [i_1] [16] [0]) : -var_3))));
        var_26 = (((arr_6 [i_1] [1]) ? (((((((var_3 ? var_2 : 24753)) + 9223372036854775807)) << ((((1 ? (arr_6 [i_1] [i_1]) : (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) - 7892382907476570928))))) : (min((((2003685734007416960 ? var_8 : var_7))), var_9))));
    }
    #pragma endscop
}

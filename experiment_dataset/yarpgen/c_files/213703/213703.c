/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_21 = var_17;
                    var_22 = ((((!(((-(arr_3 [5])))))) && ((((((-(arr_4 [i_0] [i_1 + 4] [i_0])))) ? (min((arr_0 [i_2]), (arr_2 [i_0] [i_2]))) : -43)))));
                    var_23 = (((((arr_2 [i_1 - 1] [i_1 - 1]) ? (((arr_5 [i_1]) ? (-32767 - 1) : 600955334550275740)) : (arr_3 [i_1 - 2])))) || var_11);
                    var_24 = (min(var_24, -600955334550275740));
                    arr_8 [i_0] [i_1] = -600955334550275731;
                }
            }
        }
        arr_9 [i_0] = ((((((arr_1 [i_0]) ? (34652 - var_2) : (32 - -600955334550275731)))) ? 31795 : (((arr_1 [i_0]) + (((arr_6 [i_0] [i_0] [i_0] [i_0]) + var_3))))));

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                var_25 = (4288570718 + 4218567207);
                var_26 = ((0 ^ (((((16 ? (arr_3 [23]) : 0))) ? var_4 : (((0 ? var_8 : (arr_4 [i_0] [9] [i_0]))))))));
            }
            var_27 = ((((((arr_10 [i_3]) ? (arr_12 [i_0] [i_0] [i_3] [i_3]) : (arr_12 [i_3] [i_0] [i_0] [i_0])))) ? (max(((-15120 ? var_15 : (arr_12 [i_0] [i_3] [14] [i_0]))), (arr_6 [i_0] [i_0] [i_0] [i_0]))) : ((((arr_7 [i_3] [2]) ? (arr_7 [i_0] [i_3]) : (arr_7 [i_3] [i_3]))))));
            var_28 ^= ((+((var_3 ? ((var_14 ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (arr_3 [i_0]))) : (((arr_12 [i_0] [i_0] [i_3] [i_3]) % (arr_1 [i_0])))))));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_29 = ((((+(((arr_12 [i_0] [i_0] [i_0] [i_0]) * 65535))))) & (min(21379, ((var_16 ? var_1 : (arr_1 [i_0]))))));
            arr_16 [i_0] = ((~(((((-1 ? 42362 : 18446744073709551615))) ? ((var_8 ? var_14 : var_6)) : 600955334550275745))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        arr_22 [i_0] [i_7] [i_7] = (((arr_13 [i_6] [i_6]) ? 1792317124 : (max((((arr_12 [i_6] [i_6] [i_6] [5]) ? (arr_15 [i_0] [i_0] [i_0]) : (arr_20 [i_7]))), (arr_11 [i_5] [i_7])))));
                        var_30 *= (arr_7 [i_0] [i_5]);
                        var_31 = ((~(arr_5 [i_7])));
                    }
                }
            }
        }
    }
    #pragma endscop
}

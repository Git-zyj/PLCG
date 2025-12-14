/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (var_12 ? ((255 ? 0 : 30911)) : var_4);
    var_21 = 15;
    var_22 = var_10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_23 = ((((-((32758 ? (arr_0 [i_0]) : var_16)))) & 2985555727));
        arr_3 [i_0] = max(var_17, ((((((min(0, 42393)))) != (min(-970912921180860466, 65521))))));
        arr_4 [i_0] [1] = ((~(max(var_1, 1869583890))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_24 = 28403;
        var_25 = ((1 > (((arr_7 [i_1]) ? (!255) : -16664))));
        var_26 = ((((-(max(1, 1523753714722425730)))) > (((((!(arr_8 [i_1] [i_1]))) ? ((var_4 ? (arr_5 [i_1]) : (arr_8 [i_1] [i_1]))) : ((((arr_8 [i_1] [i_1]) ? var_7 : 1))))))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        var_27 += ((arr_8 [1] [i_2]) ? 34048 : ((((arr_6 [i_2] [i_2 - 3]) == 6507059152691193918))));
        arr_12 [i_2] = 42393;

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_16 [i_3] [8] [8] |= 839069497492370513;
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_28 = (i_2 % 2 == 0) ? ((((arr_9 [i_4]) << ((((119 ? (arr_20 [i_2]) : (arr_17 [5] [9] [1]))) - 3546655430895633050))))) : ((((arr_9 [i_4]) << ((((((119 ? (arr_20 [i_2]) : (arr_17 [5] [9] [1]))) + 3546655430895633050)) + 4143760515479721139)))));
                        arr_22 [i_2] [i_2] [12] [i_2] = ((12 - (((((arr_5 [9]) + 2147483647)) >> (((arr_17 [i_2] [4] [i_4]) - 4071))))));
                    }
                }
            }
            arr_23 [i_2] [i_2] [11] = 3317730735;
            arr_24 [i_2] [i_2] = (((arr_13 [i_2 - 1]) <= 852614781));
        }
    }
    #pragma endscop
}

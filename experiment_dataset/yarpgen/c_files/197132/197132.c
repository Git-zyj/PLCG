/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-((var_0 ? var_3 : ((var_10 ? 268427264 : var_5))))));
    var_12 &= max((((!4251300363) ? (!var_10) : 14344101623652771333)), 2147483647);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = 4974;
        var_14 -= var_9;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_15 = ((504403158265495552 ? var_2 : (((var_10 || var_2) ? (max((arr_1 [2]), var_4)) : (arr_0 [i_1])))));
        var_16 ^= var_5;
        var_17 ^= -var_4;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_18 = -62615;

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_19 = ((!(arr_6 [i_2])));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_20 = (min(var_3, (((13764963044527423850 ? 2147483643 : var_5)))));
                            var_21 = (max(var_21, var_4));
                        }
                    }
                }
            }
        }
        for (int i_7 = 2; i_7 < 17;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 17;i_9 += 1)
                {
                    {
                        var_22 ^= (min((((-9223372036854775799 ? ((min(var_9, (arr_21 [4] [i_7] [i_7])))) : (!var_5)))), ((-(arr_14 [i_7 - 2] [i_7 - 2])))));
                        var_23 = (min(9223372036854775784, ((min(var_5, (arr_25 [i_8 - 2] [i_7] [i_8] [i_9]))))));
                        var_24 = (((var_0 % var_6) ? ((var_2 ? (arr_20 [i_2]) : var_6)) : (arr_13 [i_2] [i_2])));
                        arr_27 [i_2] [i_7] [i_9] [i_2] = (arr_17 [i_2] [i_7] [i_8] [i_8] [i_9]);
                        var_25 ^= ((!((!(((var_1 ? (arr_6 [14]) : 32768)))))));
                    }
                }
            }
            var_26 = (!var_5);
        }
        var_27 -= ((!(((18446744073709551615 ? 4681781029182127766 : 1)))));
        var_28 = ((((((min(2147483631, 2020761285))) ? (((~(arr_19 [i_2])))) : (arr_23 [i_2] [i_2] [i_2] [i_2])))) ? var_7 : ((((min((arr_16 [i_2] [1] [i_2]), (arr_6 [i_2])))) ? (((-(arr_24 [i_2] [i_2] [i_2] [i_2] [i_2])))) : (arr_7 [i_2]))));
    }
    #pragma endscop
}

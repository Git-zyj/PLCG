/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(min(((((var_4 + 9223372036854775807) << (var_10 - 151)))), var_3))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (max((((((var_0 ? var_3 : var_10))) ? (var_7 | var_9) : (var_3 == var_8))), ((((var_6 || var_11) <= (~var_7))))));
        var_13 = (((((((((var_2 ? var_7 : var_10))) == (min(var_1, var_5)))))) | (max(-8798832795857020750, (~var_4)))));
        var_14 = (min(var_14, ((((((!(var_8 + var_6)))) >> ((-var_7 * (var_1 + var_9))))))));
        var_15 -= ((((((var_8 / var_9) / -var_6))) || ((((var_5 <= var_10) - var_10)))));
    }

    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        var_16 = (((~-13387) ? (max((var_6 / var_11), (var_0 <= var_5))) : var_8));
        arr_8 [i_1] [i_1 - 2] = min(((((var_5 ? var_5 : var_10)) < (!var_7))), (((var_10 >= var_11) > var_3)));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                {
                    var_17 = (max(var_17, ((max(var_9, (var_6 + -var_1))))));
                    var_18 |= var_10;
                    arr_19 [i_2] [i_2] [i_2] [i_2] = ((-(((~var_3) ? var_3 : var_5))));
                }
            }
        }
        var_19 -= (((((var_6 / var_10) * (var_3 / var_1))) ^ -var_5));
        arr_20 [i_2] [i_2] = (max((((((var_1 ? var_5 : var_1)) >= (var_6 <= var_11)))), (((var_3 + var_4) ? (((var_5 ? var_7 : var_8))) : var_4))));
    }
    var_20 = (-2287510933445403809 / -1706172953343200402);
    var_21 = ((((((~var_0) | (var_6 / var_4)))) ? ((~(-13387 / -4709570751955952781))) : ((((var_9 > (var_8 <= var_9)))))));
    #pragma endscop
}

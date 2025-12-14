/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(((46942 ? (arr_1 [i_0]) : 57)), ((min(199, 7962)))));
        arr_3 [i_0] [i_0] = (31172 >= 57);
        var_13 = (min(var_13, ((min((31163 && 21), 21)))));
        arr_4 [i_0] [i_0] = (max((((arr_0 [i_0]) ? var_7 : var_7)), var_5));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {
                        var_14 = (((251 / var_7) ? (((185 < ((var_8 ? (arr_8 [i_0] [i_0] [i_0] [i_1]) : var_12))))) : (((((32767 & (arr_7 [i_0] [i_1] [i_1] [3]))) >= (~1937881206))))));
                        arr_13 [i_1] [i_0] [i_0] [i_1] [5] [i_3 + 2] = ((~((min(743, -89)))));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4 - 1] [i_4] = -1937881228;
        var_15 = (((((var_3 ? ((var_12 ? var_11 : 3762291013)) : -15871))) >= (max((((var_2 ? (arr_14 [i_4]) : var_10))), (var_3 ^ var_7)))));
        var_16 |= (((arr_15 [i_4 + 1] [i_4 - 1]) ? ((((var_10 ? var_7 : -69)))) : ((31163 ? 51 : (max(1937881228, 15890))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_17 |= 34344;
        var_18 &= 18328875180171091941;
        arr_19 [i_5] [12] = (((((66 ? var_5 : (arr_14 [i_5])))) ? var_0 : var_5));
        var_19 -= ((var_5 ? (var_4 < 31192) : var_4));
        var_20 ^= (((~var_5) != 125));
    }
    for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
    {
        var_21 = ((((1 | var_3) && var_8)));
        var_22 = (min(-7829565704158147451, -1));
        arr_22 [i_6] = (((5518476086117472193 ? (var_11 || var_10) : 2523496064)));
        var_23 = 77;
    }
    var_24 = (min(((((var_11 ? var_3 : var_1)) * var_6)), var_9));
    var_25 &= var_0;
    #pragma endscop
}

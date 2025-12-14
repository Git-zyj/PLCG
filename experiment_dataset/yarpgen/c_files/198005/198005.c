/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-31 - var_10);
    var_12 = (min(var_6, 18446744073709551615));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (min(-1294035750951379834, (arr_2 [i_0] [i_0])));
        arr_4 [8] |= (((-18 | (arr_1 [i_0] [i_0]))));
        arr_5 [i_0] = ((var_10 - (((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
        arr_6 [i_0] = (((((-(arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_13 |= (max((arr_1 [i_1] [i_1]), (arr_1 [i_1] [i_1])));
        var_14 = 28993;
        var_15 = ((((max((~var_10), ((-29005 ? var_1 : var_4))))) ? (((max((arr_9 [i_1]), var_6)))) : ((var_8 ^ (arr_2 [i_1] [i_1])))));
        arr_11 [i_1] [i_1] = 57679;
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_14 [i_2] [i_2] = var_4;
        var_16 = (max(var_16, 4017055597961396280));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_17 = var_4;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    var_18 = (((((var_6 ? (min(var_1, 3469204919656588157)) : (arr_16 [i_5])))) ? ((-(arr_13 [i_3]))) : ((((!(arr_13 [i_3])))))));
                    var_19 = var_10;
                    var_20 &= (min((((((max(-27, var_3))) != (!29004)))), ((-(arr_19 [i_5] [i_5] [i_5])))));
                    var_21 = (((((arr_19 [i_5] [i_4] [i_3]) ? var_6 : (arr_19 [i_5] [i_4] [i_3]))) * (((((((9223372036854775807 ? -28993 : 66))) || (57668 * 0)))))));
                    var_22 |= (min(27, -29011));
                }
            }
        }
        var_23 &= (((((max(var_7, 51350)))) ? (((((((arr_20 [i_3] [i_3] [i_3]) ? (arr_16 [i_3]) : 12138170709434069611))) ? ((((!(arr_19 [i_3] [i_3] [i_3]))))) : (arr_21 [i_3])))) : (max(99, ((-28993 ? 3469204919656588148 : (arr_20 [i_3] [i_3] [i_3])))))));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((1 * 20944) * (((((((var_1 + 9223372036854775807) >> (var_16 - 15752)))) || var_14)))));
    var_19 = (~2143);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (max(var_20, ((((((var_6 < var_10) < ((var_14 & (arr_0 [i_0]))))) ? ((((var_9 & var_5) % ((var_11 * (arr_2 [i_0])))))) : (((arr_1 [i_0]) ? var_11 : (arr_0 [13]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_1] [i_2] [i_2] [i_2] [i_1] [i_1] = (((43189808 ? -32090 : 127)));
                        arr_12 [12] [i_1] [i_1] [i_2] [i_2] [i_3] = ((20944 ? ((((var_17 | -6799741916784342644) ? 0 : -12386))) : -3365827705860774862));
                    }
                    for (int i_4 = 4; i_4 < 21;i_4 += 1)
                    {
                        var_21 = (min(var_21, (((((((arr_4 [i_0] [i_0]) & var_3))) ? ((((~var_16) == -var_7))) : var_9)))));
                        var_22 += 268295319;
                        arr_17 [i_0] [i_1] [i_2] [i_4] [i_4] = ((((min(-2372373924, (((-(arr_7 [11]))))))) ? ((((-4215 ? 1921853869 : var_10)))) : 29944));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((var_6 * var_13) == 1));
                        var_23 += ((var_12 * (7705310271215216417 % 1)));
                    }
                    var_24 -= (arr_16 [i_0] [i_1] [i_0]);
                }
            }
        }
        var_25 = (min((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((((arr_9 [i_0] [i_0] [i_0] [i_0]) == var_5)))) : (min(1048576, 0)))), (arr_1 [i_0])));
    }
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {
        var_26 = ((((((arr_19 [i_6 - 1] [i_6 + 1]) + (arr_13 [i_6 + 1] [18] [i_6] [i_6 + 2] [18])))) && var_13));
        arr_24 [i_6] = (((-(arr_5 [i_6] [i_6 - 1] [i_6 - 1]))));
        var_27 &= ((+(((var_12 | var_3) * (arr_6 [i_6] [i_6 + 1] [i_6 + 1])))));
    }
    var_28 += -var_17;
    #pragma endscop
}

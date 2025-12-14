/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((min((min(var_18, 32758)), var_15)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_21 = (((arr_1 [i_0]) ? 122 : (arr_1 [i_0])));
                        arr_10 [i_3] [i_3] [i_3] [i_3] = 9195664067362140375;
                        var_22 += (((5966762701264689723 - (arr_7 [i_0] [i_0] [i_0] [i_0]))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_23 = (min(var_23, (arr_7 [i_2] [i_2] [i_2] [i_2])));

                        for (int i_5 = 3; i_5 < 15;i_5 += 1)
                        {
                            var_24 = (max(var_24, var_7));
                            var_25 = var_7;
                            var_26 *= (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_27 = ((var_0 ? var_6 : 30879));
                        }
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_28 -= ((+((((((arr_3 [i_0] [i_0]) ? 0 : 133))) ? var_8 : (arr_1 [i_1])))));
                        var_29 = (((max(-1428968196, (max(var_8, 1919120720453613912)))) + (((min((arr_5 [i_0 - 1] [i_2 + 3] [5] [i_0 - 1]), var_8))))));
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_30 -= var_7;
                        var_31 = (max(1919120720453613908, (~2089563792)));
                        var_32 = (max(var_32, var_7));
                    }
                    var_33 = ((((min(11272459240950077301, var_0))) ? var_0 : (min(((4 + (arr_15 [2] [i_1] [i_1] [i_0]))), ((max(-119, 34887)))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 11;i_12 += 1)
                        {
                            {
                                var_34 = (max(var_34, 10581148700166302460));
                                arr_34 [i_10] [i_10] [i_10] = (+(((arr_23 [i_8] [i_9]) << (16527623353255937703 - 16527623353255937703))));
                                var_35 = (max(var_35, var_13));
                                var_36 = (min(var_36, ((((min(var_14, ((((arr_27 [i_9] [i_10] [i_9]) ? (arr_14 [i_8] [i_8]) : var_18))))) >> ((((-1428968196 ? (arr_15 [i_8] [i_12 - 1] [i_11] [i_11]) : (((var_10 | (arr_24 [i_10])))))) - 18433821883141157189)))))));
                            }
                        }
                    }
                    var_37 = -32761;
                }
            }
        }
    }
    #pragma endscop
}

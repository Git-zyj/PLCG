/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (max(var_7, (((((262142 ? var_8 : var_9))) ? var_3 : var_2))));
    var_11 = max(var_8, (max(1, (~var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = 262142;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_13 ^= ((arr_1 [i_0]) > 262142);
                    var_14 &= var_1;
                    arr_6 [i_1] [i_1] [i_2] [18] = ((~var_6) - 274877906928);
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_15 &= ((((-((var_7 ? var_5 : (arr_0 [i_0])))))) ? -16706055806118545746 : ((((arr_1 [i_0]) * (var_0 / -1292873654)))));
                    var_16 &= ((-(arr_8 [i_1] [i_1] [i_1])));

                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        var_17 &= var_7;

                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            var_18 ^= ((~(((var_3 && (arr_8 [i_5 + 4] [i_5 + 3] [i_3]))))));
                            var_19 &= (min((arr_5 [9] [i_4 + 4] [i_4] [i_4]), 16706055806118545746));
                            arr_16 [13] [i_1] [i_3] [i_4] [2] [i_1] [i_1] = (arr_2 [i_1]);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_20 = ((1 ? 16706055806118545746 : 4294967295));
                            var_21 -= ((((1740688267591005870 ? 17193932226572274262 : 350192827))) ? (((arr_8 [i_0] [i_1] [i_1]) / (arr_13 [i_0] [i_1] [20] [i_4] [i_4 + 2] [16]))) : (arr_17 [0] [14] [4] [i_4 + 3] [10]));
                        }
                        arr_21 [i_1] = ((((min((arr_17 [i_0] [i_1] [i_1] [i_4 + 1] [4]), 16706055806118545746)) * var_9)));
                    }
                }
                for (int i_7 = 4; i_7 < 21;i_7 += 1)
                {
                    var_22 = var_8;
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_23 = (((-86 + 2147483647) << ((((((max(102, 65))) % -262143)) - 102))));
                                var_24 = (1339897834 > 4142353429);
                            }
                        }
                    }
                }
                arr_29 [2] [i_1] [i_1] = (arr_20 [i_1] [i_0] [i_1]);
            }
        }
    }
    var_25 = (max(-816299676, 7));
    var_26 = 152613867;
    #pragma endscop
}

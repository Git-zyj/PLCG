/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_0, (var_10 - 8493305069359249058)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = -5915907327110555308;
                arr_6 [i_1] [i_1] [i_0] = 3424486609;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {

                for (int i_4 = 2; i_4 < 7;i_4 += 1)
                {
                    arr_14 [i_2] [i_2] [i_2] [i_2] = (((((-9390 ? 21 : -4408813236005751543))) ? 21 : (min(3061726984, -22))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] [i_5] [i_4 - 2] [i_3] [3] = ((((max((((~(arr_13 [i_5] [i_4 + 4] [i_3] [i_2])))), ((3061726996 ? (-9223372036854775807 - 1) : 2147481600))))) ? -34 : (arr_4 [i_4 + 2] [i_3] [i_3])));
                                arr_22 [i_6] [i_5] [i_5] [i_2] [i_2] [i_2] = max((2147485696 > 32767), 14);
                                var_12 = ((~((((min(var_0, -11415)) != var_8)))));
                            }
                        }
                    }
                    var_13 = ((2171 ? 7359 : (((max((arr_4 [i_2] [i_2] [i_2]), 1233240311))))));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 7;i_8 += 1)
                        {
                            {
                                arr_27 [i_8 + 1] [i_7] [i_7] [2] [i_2] [i_2] = ((33 ? var_1 : (arr_26 [i_7] [i_7] [i_7 + 1] [i_7] [i_7] [i_7] [i_4])));
                                arr_28 [8] = (max(((~((288230371856744448 ? var_8 : (arr_10 [i_8]))))), ((((4095 % -21) < 3061726984)))));
                            }
                        }
                    }
                }
                arr_29 [i_3] [2] = var_3;
                arr_30 [i_3] = (((~var_3) ? 34709 : (arr_4 [17] [i_3] [19])));
                var_14 = 177;
            }
        }
    }
    #pragma endscop
}

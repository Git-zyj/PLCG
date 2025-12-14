/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = ((((((((min(var_11, (arr_5 [2] [i_0])))) && ((min((arr_5 [i_0] [i_0]), 0))))))) | (((((1 ? 4294967291 : 4294967291))) ? (((max((arr_3 [i_0 + 2]), var_6)))) : (arr_1 [i_0] [i_0])))));
                var_15 = ((((!(arr_5 [i_0 + 1] [i_0]))) ? 4294967291 : (arr_1 [i_0] [i_1 - 2])));

                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [i_3] [i_2 + 1] [2] [2] [12] [12] |= (max((max(-10, (max(4294967291, 1073741760)))), (((!((!(arr_8 [i_1] [1]))))))));
                        arr_12 [10] [i_0] = (min((~1), (arr_8 [i_2] [i_2])));
                    }
                    var_16 = (((-620361624337591654 && 4294967280) ? (!1) : var_2));
                    var_17 = (((arr_3 [i_1 - 2]) ? ((((1 >= (min(-2, 4294967253)))))) : (max(5824042405433856715, (!84)))));
                }
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    var_18 = max((arr_3 [i_4 - 1]), (min((arr_3 [i_4 - 1]), (arr_3 [i_4 + 1]))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_19 *= (arr_2 [i_5] [i_0]);
                                arr_22 [i_0] = (((((arr_13 [i_0] [i_5 + 3] [i_6] [i_4 + 1]) < 4003427322)) ? 1 : (((arr_4 [i_1]) % (max(var_12, (arr_1 [i_1 + 1] [i_1 + 1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(var_20, var_6));
    var_21 &= (~-var_8);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_13 = 9;
                            var_14 &= (max(18446744073709551615, (((max(6996417479650875922, 702445072310382779))))));
                            var_15 &= ((((1 ? 1 : 47))));
                        }
                    }
                }
                var_16 = (max(var_16, ((min((((-15386913141851843278 && ((max(7, 131071)))))), ((((((arr_9 [i_1] [i_1] [12] [i_1] [i_1] [i_1]) != (arr_2 [i_0])))) % var_9)))))));
                var_17 = (max(var_17, 18446744073709551609));

                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    arr_15 [i_0] [i_0] [11] [i_4 + 2] = ((((min((arr_4 [i_0] [0] [21]), -458793261)) & ((0 ? -60 : (arr_5 [i_4] [i_1 + 1] [i_1 + 2] [i_0]))))) == ((((7 == -1) <= (~-397427901)))));
                    var_18 |= -1;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((((((((arr_5 [i_0] [i_0] [9] [1]) < 0)) && (arr_11 [i_4 + 1] [i_4 + 1] [i_4])))) > (((18446744073709551615 || ((min((arr_11 [i_1] [i_4] [i_5]), 15386913141851843261)))))))))));
                                var_20 = (((0 < (-2099303028 >= var_1))));
                                var_21 |= (-20940 ^ 457);
                            }
                        }
                    }
                }
                for (int i_7 = 3; i_7 < 23;i_7 += 1)
                {
                    arr_23 [14] [14] |= ((((((arr_21 [20] [i_0] [i_1] [i_7]) - 0))) ? ((60 ? 15582 : var_8)) : (arr_2 [i_0])));
                    var_22 = (max(var_22, var_3));
                    arr_24 [i_0] [i_1] [i_0] [i_0] = ((9598639403966778965 > (min((arr_8 [i_0]), 20940))));
                }
            }
        }
    }
    var_23 = (max(var_23, var_6));
    #pragma endscop
}

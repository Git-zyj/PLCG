/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_16 ? var_3 : 31226)))) ? (((((var_3 ? var_13 : -623242729915057104))) ? 126 : -var_0)) : ((~(min(65535, 225161064))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((((min(65535, (arr_1 [i_0])))) ? ((-(arr_1 [i_0]))) : ((~(arr_1 [i_0])))))));
        var_21 = (((((min(72, 190)))) ^ (arr_0 [i_0])));
        var_22 = arr_1 [i_0];
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                {
                    var_23 = 225;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_24 += (12519 ? ((((30 <= 46) == 0))) : -1813305881);
                                var_25 += (max((arr_6 [i_5] [i_4] [i_1]), (((4089788130 ? (arr_0 [i_5]) : 65535)))));
                                var_26 = (((min(var_1, (arr_6 [i_3] [i_3] [i_5])))) - (((!(-92 + 30)))));
                            }
                        }
                    }
                }
            }
        }
        var_27 = 101;
        var_28 = ((-((((var_8 > (arr_2 [i_1] [i_1]))) ? -2 : ((min(var_0, 12519)))))));
        var_29 = (max((((-((var_11 ? 65528 : (arr_12 [3] [i_1] [i_1] [i_1] [i_1])))))), ((~(min((arr_8 [i_1] [i_1] [i_1]), (arr_3 [i_1] [i_1])))))));
        var_30 = var_4;
    }
    #pragma endscop
}

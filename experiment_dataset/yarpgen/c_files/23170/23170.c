/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~((((max(var_15, var_0))) ? var_8 : 14633))));
    var_19 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((~(-32767 - 1)));
        var_20 = var_15;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_21 *= (((arr_10 [i_3] [i_0]) ? (((-38 >= ((var_0 ? (arr_9 [i_0] [i_1] [i_2] [i_3 - 1]) : 32767))))) : (-32767 - 1)));
                        arr_15 [i_0] [i_1] [i_2] [i_3 - 1] = ((((((-18446744073709551615 < (arr_14 [i_0] [i_1] [i_2] [i_3 - 1]))))) < (324669575 | var_10)));
                        var_22 = (min(var_22, ((max((arr_8 [i_0] [i_1] [6] [i_3]), var_9)))));
                        var_23 = (18446744073709551615 < -98);
                    }
                }
            }
        }
        var_24 &= -0;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_25 = (max(13, 65535));
        var_26 = ((-((((((arr_3 [i_4] [i_4]) ? (arr_8 [i_4] [14] [4] [i_4]) : (arr_6 [i_4] [0])))) ? var_2 : var_1))));
        var_27 = 27;
    }
    var_28 = (((((!var_10) ? var_9 : 324669567)) != ((min((!var_7), (var_9 >= var_15))))));
    #pragma endscop
}

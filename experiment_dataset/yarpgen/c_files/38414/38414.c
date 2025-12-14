/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    var_18 = (4287846257 >= 1);
    var_19 = (((((0 ? (1 * -1) : 942845803))) ? 112 : (-32767 - 1)));
    var_20 = (max(var_20, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [4] [i_1 + 1] = -45;

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] = ((1 ? (((16 ? 17 : var_6))) : (((((((arr_3 [i_0] [i_2]) & 1)) > ((-1 ? 2 : (arr_1 [i_0])))))))));
                    var_21 = (max(var_21, (~var_10)));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((arr_3 [i_0] [i_2]) ? var_3 : (-1927195110 & -112));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_13 [17] [16] [i_3] = (max((((-((var_0 ? var_0 : -7243095257665558784))))), (((var_12 - var_15) ? ((16919112544386496560 & (arr_5 [i_0] [i_0] [i_0]))) : 50992))));
                        var_22 = (min(var_22, var_14));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((~((~(((arr_1 [14]) & 1))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        arr_19 [i_0] [i_1] [i_1 - 1] [i_1 + 1] [i_2] [i_4] = ((63 ? 158 : var_7));
                        arr_20 [i_0] [i_1] [i_1] [2] [i_2] [i_4] = (arr_10 [i_4] [i_2] [i_1] [i_0]);
                        var_23 = (min(var_23, ((((((437560833 ? (arr_18 [1] [1] [1] [i_0] [i_0] [i_0]) : -1779183188))) ? -131468075 : ((134217727 ? 1 : (arr_12 [10] [10] [i_4 + 1] [6] [16] [i_0]))))))));
                        var_24 = (min(var_24, (!1)));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        arr_25 [i_2] [i_5] [i_0] = (-(arr_3 [11] [i_2]));
                        var_25 = (min(var_25, (((-((((arr_3 [i_1] [i_5]) != var_10))))))));
                        var_26 *= (arr_22 [i_0] [i_0]);
                        arr_26 [1] [i_2] [i_5] = ((((7121038 ? (arr_3 [i_0] [4]) : 0)) > ((3 ? 8482 : -15))));
                        arr_27 [i_0] [i_1] [i_5] [i_2] [17] = 1;
                    }
                }
            }
        }
    }
    #pragma endscop
}

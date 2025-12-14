/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [6] &= (min(((((var_15 << (arr_2 [i_0] [i_0]))) << ((((var_7 ? 127 : 1)) - 108)))), (((((29172 >= (-9223372036854775807 - 1))) || (((-64 ? 29172 : 1))))))));
        var_18 = var_13;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_19 = (min(var_19, ((((((var_9 ? 3434542027870026274 : (arr_7 [i_1] [i_1])))) ? (43638 & 5244594729344975834) : (arr_2 [i_1] [19]))))));
        var_20 = (((arr_6 [i_1]) ^ (arr_6 [i_1])));
        arr_8 [4] [4] = ((((0 << (144115188075855871 - 144115188075855871)))) ? var_9 : -var_10);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_21 = ((((((-5244594729344975835 + 14328327757708048104) > var_7))) << (((max(3434542027870026283, var_1)) - 3434542027870026260))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_22 = (((!var_10) ? ((((arr_7 [i_3 - 1] [i_3 - 1]) != 1))) : (arr_7 [i_3 - 1] [i_3 - 1])));
                    var_23 = (max(var_2, (((var_9 ? var_16 : (min(-3923481004393830980, 12698)))))));
                }
            }
        }
        arr_16 [i_2] = ((1158238464 | (min(4273995628, (-335966674 % 335966696)))));
        arr_17 [i_2] [i_2] = ((((((((12690 ? 3731875721 : (arr_15 [i_2] [i_2] [i_2])))) ? ((var_14 ? var_5 : var_15)) : (29340 || -12694)))) ? (-12694 <= 3752016136) : 2847));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        var_24 += (((((var_17 ? 1 : (arr_11 [i_5])))) > (arr_5 [i_5 - 1] [i_5 - 1])));
        arr_21 [i_5] [i_5 - 1] = (((110 * var_14) ? (arr_7 [i_5 - 1] [i_5]) : (arr_5 [10] [i_5 + 1])));
    }
    var_25 = (min(var_25, (~11)));
    #pragma endscop
}

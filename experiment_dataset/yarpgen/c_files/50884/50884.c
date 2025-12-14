/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((2406735637 ? 18446744073709551615 : 1591657211187981031));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_15 *= (-((((39430 < (arr_0 [14]))) ? 50035 : ((26106 ? 3352550132 : 2312872237952801271)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_10 [i_2] = ((!(!32)));
                        var_16 = (((((var_1 ? var_13 : 14843))) ? (min(var_8, (arr_7 [i_2 + 2] [i_0 - 2]))) : (((32 ? var_0 : var_2)))));
                    }
                }
            }
        }
        var_17 = ((((var_7 == (arr_9 [i_0 + 1] [i_0] [i_0 - 2] [2] [i_0 - 2]))) ? (max(var_6, (arr_5 [i_0] [i_0 - 2]))) : (((arr_5 [i_0] [i_0 - 2]) ? (arr_5 [i_0] [i_0 - 3]) : (arr_6 [i_0] [6] [i_0 - 2])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        var_18 = ((!(((39453 ? var_0 : var_11)))));
        var_19 = (arr_5 [i_4] [i_4]);
        var_20 = (min(var_20, (((31 ? var_1 : (!var_9))))));
        arr_13 [i_4] = (-(~var_6));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_21 = ((((((arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]) & 1591657211187981055))) ? var_7 : 18446744073709551607));
        var_22 = var_4;
        arr_17 [6] [i_5] = ((1 ? 1067333841 : 0));
        var_23 = ((6 ? (!var_8) : (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5])));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    var_24 = ((var_5 ? var_12 : 131071));
                    var_25 = 5845317489787397749;
                    var_26 = (max(var_26, (((-(arr_0 [i_6]))))));
                    var_27 = ((var_12 ? var_3 : var_13));
                    var_28 &= (((~28672) ? (3352550123 <= var_13) : (!7914)));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        arr_25 [i_8] [i_8] = (((((arr_1 [i_8] [i_8]) ? var_9 : 18446744073709551579)) | 1308703592090041072));
        var_29 = ((((max(15512, 0))) >> (32640 - 32623)));
    }
    var_30 += (!var_3);
    var_31 = var_7;
    #pragma endscop
}

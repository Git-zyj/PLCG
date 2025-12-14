/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(((min(var_6, var_8))), (min(65535, 8170311841655812975))))) ? (((((min(var_4, var_17))) ? var_6 : var_12))) : var_15));
    var_19 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (19 | -7199975784447057379);
        var_20 = (3674055203 ? 8170311841655812973 : -7199975784447057363);
        arr_4 [i_0] [i_0] = (~var_16);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_21 = 17137230728106385697;
        var_22 = (((arr_1 [i_1]) ? (((var_6 && ((((arr_5 [i_1] [i_1]) ? 3072 : (arr_5 [i_1] [i_1]))))))) : 1));
        var_23 = ((max((max(4294967295, 8441110133091441121), (arr_0 [i_1])))));
        var_24 -= (((((-93 && 743931785) * ((max(var_13, 124))))) / 1));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    {
                        var_25 *= ((((0 ? (0 <= var_16) : (arr_2 [i_2]))) > (((((arr_11 [i_1] [i_1] [i_3]) ? (arr_10 [i_1] [i_1] [i_3]) : var_16))))));
                        var_26 ^= (max(((var_7 ? ((3183594049 ? 32502 : var_8)) : (((((arr_8 [12] [i_2] [i_2]) > 1111373242)))))), (arr_7 [i_2] [i_4])));
                        var_27 = (arr_0 [i_4 + 2]);
                        var_28 = (min(((((min(3101012140, (arr_7 [i_1] [i_2])))) % (((arr_7 [i_2] [i_2]) ? var_2 : 268435455)))), (~0)));
                        arr_15 [i_1] [19] [i_2] [i_3] [i_1] = (((arr_8 [i_1] [i_2] [i_2]) != (((((31935 > 1) <= (arr_11 [i_1] [i_2] [i_3])))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        var_29 &= (((((arr_18 [i_5]) * var_13)) + (arr_13 [i_5] [i_5] [i_5] [i_5] [i_5])));
        arr_19 [i_5] [i_5] = ((+(((arr_16 [3]) << (17394 - 17340)))));
    }
    var_30 = (-106 * -115);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max((max(27485, 15298575239234097518)), 15728640);
    var_13 = -15728640;
    var_14 = (min(var_14, -1450));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 ^= 3148168834475454102;
                    var_16 = (!8942385012459884852);

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_17 &= ((((158 - (arr_10 [i_0 + 1] [i_1] [i_0 + 1] [i_2] [i_3 - 1]))) + (((min(15728646, var_6))))));
                        var_18 ^= (max((2261429905529609972 - -49), 1));
                        var_19 += var_2;
                        arr_11 [i_0] [i_1] [i_0] [i_3 + 1] = -1079904921;
                        var_20 += var_8;
                    }
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        var_21 = (min(var_21, var_6));
                        var_22 = (max(var_22, var_7));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_18 [i_0 - 1] [i_1] [i_1] [i_5] [i_1] [i_5] = (arr_1 [i_0 + 1]);
                            arr_19 [i_1] [i_1] [i_5] [i_1] [i_1] = (((((var_1 ? (arr_13 [i_2]) : (arr_7 [i_4] [i_1] [i_2])))) ? var_8 : (arr_5 [i_2] [i_1] [i_2])));
                        }
                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            var_23 = -862163209;
                            arr_22 [i_0 - 2] [i_1] [i_1] [i_0 - 2] [i_6] [i_1] = (((arr_21 [i_6 - 2] [i_0] [i_2] [i_1] [i_0] [i_0] [i_0]) ? (~var_7) : 255));
                        }
                        arr_23 [i_0] [i_0] [i_0] [i_0] = 15153778130086110923;
                    }
                }
            }
        }
    }
    var_24 = ((var_0 ? ((max(var_6, (min(var_2, var_8))))) : var_7));
    #pragma endscop
}

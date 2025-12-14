/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (max((~1563659335062541382), var_9));
    var_14 = ((1563659335062541397 ? ((min(-19502, (!4249607741)))) : ((min(var_4, (max(var_0, 19510)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] &= 3471518496;
                    var_15 = (max(var_15, (((~(max(63402, 4249607741)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((((12909 >= (16883084738647010233 % var_9))) ? ((((!((((arr_4 [i_0]) ? (arr_4 [i_0]) : var_7))))))) : (((((var_0 ^ (arr_7 [i_4] [i_3] [i_2])))) ? ((16883084738647010244 << (var_5 + 21108))) : 64)))))));
                                arr_17 [i_0] &= (-97 + -17);
                                arr_18 [i_0] [3] [i_2] [i_3] [i_3] [i_1] = (min(var_8, var_11));
                                var_17 = (min(var_17, ((min((min(1242, (max(var_9, (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))))), var_9)))));
                                var_18 = (max(var_18, (((-(((!var_8) % (var_10 + -1108550241957238560))))))));
                            }
                        }
                    }
                    arr_19 [i_0] [i_1] [i_0] = (((((var_1 ? 1 : 1))) * (970282217 + 27862)));

                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        var_19 = ((~((var_0 ? ((((arr_10 [i_5] [i_5 + 1] [i_5] [i_5] [i_5]) / var_11))) : (((arr_15 [i_0] [i_0] [i_0] [15] [15]) >> (arr_3 [i_0])))))));
                        var_20 = (min(var_20, (((var_0 <= ((((~var_10) > ((var_4 ? (arr_11 [14] [14]) : -19502))))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

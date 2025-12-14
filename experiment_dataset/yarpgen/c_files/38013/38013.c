/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (12469522315637932104 ? (((!var_5) ? ((-18 ? 255215547 : 46656)) : 42299)) : 4187064524);

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_16 = (max(var_16, ((((((arr_7 [i_1] [i_0 - 1] [i_0]) ? ((max(var_9, (arr_7 [i_1] [i_1 - 1] [i_2 + 1])))) : (min((arr_4 [i_0] [i_1] [i_0]), (arr_4 [i_0] [i_1] [i_0]))))) & (((249 ? ((4039751748 ? var_6 : var_9)) : ((~(arr_0 [i_1])))))))))));
                    var_17 &= ((var_2 ? var_8 : (((max((arr_1 [i_1]), var_2)) >> ((((var_14 % (arr_4 [i_0 - 2] [i_1] [i_2]))) - 1371042569))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 |= (((1 >= -103) * ((min((arr_9 [i_0] [i_1 - 2] [i_4]), (arr_9 [i_0 - 1] [i_1 - 1] [i_1 - 1]))))));
                                arr_12 [i_0] [i_0] [i_2 - 1] [i_3] [i_0] = (((((arr_9 [i_0 + 1] [i_3] [i_4]) >= var_10)) ? (min((~var_1), (~-36))) : ((-15146849 ? 4039751748 : 2892123718))));
                            }
                        }
                    }
                    var_19 = (max(var_19, ((max(((((arr_8 [i_0] [i_0 - 2] [i_0 - 1]) == 4039751748))), (min((((arr_11 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]) ? var_5 : var_5)), ((min(var_6, (arr_10 [i_0] [i_0] [i_1])))))))))));
                }
            }
        }
    }
    var_20 = (-(-88 + 1));
    var_21 &= (((-88 & (~var_14))));
    var_22 = ((var_5 >= (~0)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((var_0 ? var_6 : (arr_0 [i_0]))));
        arr_4 [i_0] [i_0] = 1;
        var_11 = 1;
    }
    var_12 = (min(var_12, (((~(~-2147483641))))));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_13 = ((((var_9 ? 1073741823 : 258988597871502181)) << ((((258988597871502188 ? -8192 : var_2)) + 8238))));
                    var_14 += 1;
                    arr_12 [i_1] [i_2] [1] = 1;
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    arr_15 [i_1 - 1] [i_1 - 1] [i_4] [i_2] = (arr_6 [i_4]);

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_18 [1] [i_2] [3] [1] [i_2] [3] = (!2147483645);
                        var_15 = (max(var_15, ((((~var_2) ? ((1 ? 252 : 4611123068473966592)) : (arr_6 [i_1]))))));

                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            var_16 *= (!-3);
                            var_17 = ((-1 ? (46963 % 18187755475838049451) : var_1));
                        }
                    }
                    var_18 ^= 18588;
                    var_19 = ((arr_11 [i_2] [i_2]) == -var_1);
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_20 = (~1);
                                arr_27 [i_1] [i_1] [i_2] [i_8] [i_9] = (arr_10 [i_1] [4] [i_1 + 2] [i_1]);
                            }
                        }
                    }
                }
                var_21 = ((~((536870911 ? 6 : 124))));
                arr_28 [i_2] [i_2] [i_2] = (max((arr_11 [i_2] [i_2 + 1]), (max((max(24942, 6961978615470777996)), ((max((arr_8 [i_1] [i_1] [i_2]), (arr_20 [i_1] [i_2] [i_2] [i_2] [i_2]))))))));
            }
        }
    }
    #pragma endscop
}

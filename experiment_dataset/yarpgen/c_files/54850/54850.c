/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] [0] = arr_1 [i_0 - 1];
        arr_5 [i_0] = (((arr_2 [i_0]) << (((((arr_1 [i_0 - 1]) + 1396256646)) - 20))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_3] [i_2] [18] = ((var_9 ? ((((arr_3 [i_1] [i_3]) ? var_8 : var_6))) : ((var_10 ? var_5 : var_3))));
                        var_13 = ((-(arr_1 [i_0 - 1])));
                    }
                }
            }
        }
    }
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 13;i_5 += 1)
        {
            {
                var_15 = (123 & -12765);
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            arr_24 [i_4] = (max(8905178710908562788, 1));

                            for (int i_8 = 0; i_8 < 15;i_8 += 1)
                            {
                                var_16 = var_9;
                                var_17 = (max(-28978, 127));
                            }
                            for (int i_9 = 1; i_9 < 12;i_9 += 1)
                            {
                                var_18 = ((-8487619036688421093 ? (((8487619036688421093 ? -2687747980717387755 : 8487619036688421093))) : var_6));
                                var_19 = ((((min(var_0, ((8905178710908562788 ? 7872569767480947147 : var_7))))) ? (min(-45, (min(761711715496904096, var_8)))) : var_6));
                            }
                            arr_29 [i_7] = (min((~-20), var_3));
                            arr_30 [i_4] [4] [i_5 + 2] [4] [i_4] [i_7] = (((((((14 - 2254879715) + 9223372036854775807)) << (var_11 - 12206))) << ((((var_3 ? -13 : (arr_23 [i_7] [i_6 + 1] [i_5 - 1] [i_4] [i_4]))) / 4595))));
                            var_20 = 8487619036688421090;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

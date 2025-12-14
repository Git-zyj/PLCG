/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (max(3739068791, (!555898511)));
        var_21 = (max(var_21, (((min(-2, (min(555898504, 1083))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 &= (min((min((min(64463, 888325594308203632)), 29098)), (max(7, (max(555898504, 1536993323658282110))))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_23 = (max(var_23, 248));
                        var_24 = (min((max((max(3398217686, 248)), (min(2852531222, 2852531215)))), ((min(18530, (min(29100, 61010)))))));
                        var_25 = (max((((max(9913278564160663813, 11266)))), 10));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_10 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1] = (max((((min(31710, 31710)))), (max(896749602, (~11257)))));
                        arr_11 [i_0] [i_1] [i_2] [i_1] = (max(8, (!1)));
                        var_26 = (min(var_26, ((min(1, 903235915499562272)))));
                        arr_12 [i_0] [i_1] [i_2] [i_2] = (!-11249);
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_27 = (min(var_27, 7));
                        var_28 = (max(var_28, (!-31732)));
                    }
                    var_29 = (min(var_29, (max((!896749610), 11266))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_30 = (max(3398217685, -3398217686));
                                arr_20 [i_7] [i_1] [i_0] [i_6] [i_7] [i_0] [i_0] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 = (max(var_31, ((min((!4294967295), ((max(3398217686, 22940))))))));
    #pragma endscop
}

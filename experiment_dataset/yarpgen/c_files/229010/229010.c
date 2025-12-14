/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = min(4294967295, (((!(~90)))));
        var_18 = (((((max(var_14, (arr_1 [0]))) == (!103))) || 86));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_5 [i_0] = min(3352728907, 69);
            arr_6 [i_0] = 363827954;
            var_19 = (((arr_4 [i_1] [i_1]) >> (((arr_4 [i_1] [i_0]) - 1758024500))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_10 [i_0] = (arr_8 [i_0] [15] [i_2]);
            var_20 = ((((max((((arr_3 [10]) << (arr_2 [i_0]))), (~3)))) ? (arr_9 [i_0]) : 3088597966));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_13 [i_0] [i_3] = 16744448;
            arr_14 [i_3] = ((!(!var_14)));
            var_21 = ((((-52 == (arr_7 [i_0] [i_0])))));
            var_22 = ((-80 / (min(-4, (arr_4 [i_0] [i_3])))));

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                arr_17 [i_3] [i_0] [i_3] [i_4] = (114 & -100);
                var_23 = (!-34);
            }
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                arr_20 [i_0] [i_3] [i_5] = (((arr_15 [i_3]) >> (56 - 35)));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            var_24 = (!69);
                            arr_26 [i_0] [i_3] [i_5] [i_6] [i_7] = (min((arr_4 [i_0] [i_3]), -0));
                            var_25 = (((-(arr_9 [i_0]))));
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 23;i_10 += 1)
                {
                    {
                        arr_33 [i_0] [i_8] [23] [i_8] = (((max((max(25, (arr_32 [24] [23]))), ((3931139342 / (-127 - 1))))) > (arr_16 [i_0] [i_8 + 2] [i_9] [i_10 - 1])));
                        arr_34 [i_0] [i_8] [i_9] [i_8] = ((((!(!3931139351))) && (arr_27 [i_0] [i_8] [17])));
                        var_26 = ((min((13 & 91), (((arr_7 [12] [i_10 - 3]) ? 112 : 2178013644)))));
                        var_27 = 120;
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        var_28 = 1206369309;
        arr_37 [i_11] = (((((((max((arr_25 [i_11] [i_11] [i_11] [i_11] [i_11]), (arr_9 [i_11]))) >= -75)))) | 4294967295));
    }
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        var_29 = max(var_12, 85);
        arr_41 [i_12] = (min(((~(arr_3 [i_12]))), 4014148069));
        var_30 = (max((3352728907 && -92), (~var_10)));
    }
    var_31 = 42;
    #pragma endscop
}

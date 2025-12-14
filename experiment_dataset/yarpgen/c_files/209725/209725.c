/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (var_8 & -707345415);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_12 = (707345415 % -707345404);

                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    arr_11 [i_0] [i_0] [i_1 - 3] [i_2] [i_2] [i_3] = -707345415;

                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] = arr_7 [i_0] [i_1 + 1] [14] [i_3];
                        arr_15 [i_1 - 3] = (((((707345399 ? -707345396 : -707345415))) == 0));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_13 = (min(var_13, (arr_3 [i_1 + 1])));
                        var_14 = -707345399;
                        var_15 = (-1 ? 46992 : 0);
                        var_16 = (~707345399);
                    }
                    arr_19 [i_3 + 1] [i_1] [11] [i_1] [11] = (((arr_8 [i_0 - 2] [i_3 + 1]) ? (arr_16 [i_0 - 2]) : (arr_18 [i_0 - 2])));

                    for (int i_6 = 4; i_6 < 19;i_6 += 1)
                    {
                        var_17 += (arr_8 [i_0] [i_1]);
                        arr_22 [i_0] [i_0] [i_1] [i_1] [8] [18] [i_6] = (((arr_8 [i_1 + 1] [i_2]) == 707345415));
                    }
                }
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    arr_27 [i_0] [i_1] [i_0] = ((~(arr_3 [i_0 + 2])));
                    var_18 ^= (arr_7 [i_0 + 3] [i_2] [i_7] [i_7 + 2]);
                    arr_28 [i_1] [i_2] [i_2] = 707345415;
                }
            }
            arr_29 [i_0 + 3] = (((arr_5 [i_0 + 3]) && (arr_5 [i_0 + 3])));
        }
        arr_30 [i_0] = (arr_4 [i_0 - 2] [7] [i_0 + 3]);
        arr_31 [i_0] = ((-(((arr_0 [7] [7]) ? -7217204192330090948 : -5082585458510792368))));
    }
    #pragma endscop
}

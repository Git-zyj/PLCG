/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [1] = ((min(((max((arr_0 [i_0] [i_0]), (arr_2 [i_0])))), ((8775447018058728056 ? 0 : var_10)))));
        var_21 += (min((5084583698756718567 || 367554803224607978), var_5));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] = -0;
        var_22 = (((arr_0 [i_1] [i_1]) ? (arr_5 [i_1]) : (arr_2 [i_1])));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_23 = (max(var_23, (((58 ? (arr_1 [i_1]) : 17513)))));
                arr_13 [i_1] [12] [i_1] [i_3] = ((-((-59 ? 17496 : 1663431617897664766))));
            }

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                arr_16 [i_1] [i_2] [i_4] = ((-((var_13 ? var_11 : -17528))));

                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_24 += (!32761);
                    arr_19 [i_2] [i_5] [i_1] [i_1] [i_2] [i_1] = ((arr_7 [i_5]) - (arr_7 [i_1]));
                }
                arr_20 [i_1] [7] [7] [i_1] = (arr_11 [i_1]);
            }
        }
        arr_21 [i_1] [i_1] = var_15;
    }
    #pragma endscop
}

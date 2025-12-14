/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (~-38)));
    var_11 = var_4;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_12 = (min(var_12, ((((arr_4 [9]) * ((((!((min((arr_4 [i_0]), var_6))))))))))));

            for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
            {
                arr_10 [i_0] [i_1] [i_1] = -47590;
                var_13 = var_8;
                arr_11 [i_0] [i_0] [i_0] = (arr_4 [i_0 + 1]);
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
            {
                var_14 = (((max(((~(arr_8 [2] [2]))), ((-(arr_13 [8]))))) >= (((!(arr_0 [i_0 + 1] [i_0 - 2]))))));
                var_15 = (min(var_15, (2047 > 1610612736)));
            }
        }
        var_16 = (((((min((arr_5 [i_0 - 3] [i_0 + 1] [i_0 - 3]), (arr_8 [i_0 - 1] [i_0 - 3]))) + 2147483647)) >> (((~var_4) - 1702554354))));
        arr_14 [i_0] = ((((((3952288133 * 2147483647) * (arr_13 [i_0 + 2])))) ? 47590 : 576451956210401280));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_18 = (min(var_18, (arr_0 [i_0 - 1] [i_0 - 1])));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_19 = ((~(max(4128768, 57571))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    var_20 = (arr_3 [i_0] [i_0 + 1]);
                    var_21 = ((~(~var_16)));
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                {
                    var_22 = (((((30555 ? 31 : 1))) ? 1 : (arr_3 [i_0] [i_4])));
                    arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] = (((arr_4 [i_4]) ? 94 : var_11));
                }
                var_23 = (~1);
            }
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_24 = (min(0, 24340));
            arr_16 [i_5] [i_0] [i_0] = (min((-9223372036854775807 - 1), 1066145472212594209));
        }
        arr_17 [i_0 + 1] = -0;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_25 = (((arr_1 [i_6]) ? (arr_9 [i_6] [i_6]) : (((-(arr_3 [i_6] [i_6]))))));
        var_26 = arr_6 [i_6] [i_6] [i_6] [i_6];
        var_27 = 47232;
        var_28 = (~31864);
    }
    #pragma endscop
}

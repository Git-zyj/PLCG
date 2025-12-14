/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = ((~(arr_0 [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_15 = ((57 ? ((9644836018505312336 ? 108 : 8801908055204239280)) : (var_7 % 1)));

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_16 = (~(((8801908055204239280 > (arr_3 [i_0] [i_0])))));
                var_17 = (arr_4 [i_1]);
                var_18 = (max(var_18, ((((arr_5 [i_2] [i_1] [i_0]) || var_1)))));
                arr_8 [i_2] [i_1] [i_0] [i_0] = -var_12;
                var_19 = (min(var_19, (~0)));
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_12 [i_3] = ((!((((arr_11 [i_0] [i_1] [6] [i_3]) ? 0 : 18559)))));
                var_20 = (!(arr_7 [i_1] [i_1] [i_1]));
            }
            var_21 = arr_7 [i_0] [i_1] [i_0];
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            var_22 = 60841;
            var_23 = (arr_3 [i_0] [i_0]);
        }
        var_24 = (min((((16376 && (!-1411287723)))), (arr_14 [i_0])));
    }
    var_25 = (min(-1411287723, var_9));
    #pragma endscop
}

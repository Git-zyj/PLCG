/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 *= ((~(((!(((var_1 ? var_7 : var_9))))))));
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_13 *= (43979 >= 135);
                var_14 = (min(var_14, var_0));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_15 = (min(var_15, ((((arr_4 [i_1 - 3] [i_1 + 1]) >= ((max(-var_6, ((63067 ? (arr_2 [i_2]) : (arr_6 [i_0 + 1])))))))))));
                    arr_8 [i_1] [i_2] = 991215990;
                    var_16 = ((((((arr_4 [i_1 - 3] [i_1]) + 2147483647)) >> (3303751289 - 3303751272))));
                    var_17 = ((-54 ? 2475 : -51));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    arr_11 [i_1] [i_1 - 3] [i_1] = (arr_4 [i_0] [i_0]);
                    var_18 ^= (-((min((arr_3 [i_1 - 3] [i_1 - 1] [i_3]), (arr_3 [i_1 - 1] [i_1 + 1] [i_3])))));
                }
                var_19 += ((min((2525928703 % 32765), (~var_2))));
                arr_12 [i_1] = ((-1955764184 ? 392241869 : 7));
            }
        }
    }
    #pragma endscop
}

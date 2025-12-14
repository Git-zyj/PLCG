/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_1 ? var_7 : var_12));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(((((((arr_1 [i_0] [i_0]) / var_8))) ^ -5527627546997857512)), ((((arr_0 [i_0]) <= (-251753845389662048 % -2377137728669883695))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] = ((((((max(127, -2377137728669883695)) <= (min((arr_1 [0] [5]), 239)))))) & ((((max(var_13, (arr_11 [i_0] [i_0] [i_3 - 4])))) ? (arr_9 [i_0] [7] [i_0] [i_0]) : -var_10)));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_16 [i_0] = var_7;
                            var_16 = ((arr_14 [i_1] [i_2] [i_2] [i_3 - 4] [i_2] [7] [i_1]) % (arr_14 [i_3 - 4] [i_3] [i_3] [i_3 - 3] [i_3 - 4] [i_4] [i_4]));
                        }
                        var_17 = (min((((arr_14 [i_0] [i_0] [i_0] [0] [i_0] [i_0] [i_0]) ? -248002198751152384 : 2377137728669883695)), var_7));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_18 ^= max((arr_10 [i_0] [i_0]), (max((min((arr_18 [i_5]), var_6)), (arr_7 [i_0] [i_0] [i_5]))));
            var_19 = (max(((0 ? (7 % var_12) : (max((-9223372036854775807 - 1), 12279463501326080572)))), ((((arr_11 [i_0] [i_0] [i_0]) % (-3427637310512349002 + 238))))));
            arr_19 [i_0] = max((max(((max(2377137728669883694, 9223372036854775807))), (max(var_14, 16495951916201913379)))), ((((arr_1 [i_0] [i_5]) && (arr_17 [i_5] [i_5] [i_5])))));
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                {
                    var_20 += (min(((min(128, 172))), 600873856650066295));
                    arr_26 [i_0] [10] |= ((128 ? 48 : 2377137728669883686));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 4611686018427387900;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((~(~9162)));
        var_12 = ((min(((((arr_1 [i_0]) ? 288089638663356416 : var_5))), 28351)) < (((612279258 ? ((max(-10844, 1))) : (-10844 + -10844)))));
        var_13 = (min(var_13, ((((((min(1, 32869)))) ? (min(823703408, 41514)) : (((((((arr_1 [12]) >> (24021 - 23999)))) && 0))))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_14 = 11560;
        arr_5 [i_1] = (max((arr_0 [1]), (!24021)));

        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        var_15 ^= ((-8652184415551589393 + (((max((arr_6 [i_3 - 1] [10] [i_2 + 1]), (arr_6 [i_3 - 1] [i_4] [i_2 + 1])))))));
                        arr_13 [i_1] = (arr_7 [1]);
                        var_16 = (min(var_16, ((((6524718927151658873 / (arr_3 [1] [i_3 + 1])))))));
                    }
                }
            }
            var_17 = ((((((max(12730, (arr_12 [6] [i_2])))) ^ (arr_3 [i_1] [i_2 + 1]))) << ((((((min(24021, (arr_10 [i_1] [i_1] [2] [i_2])))) & 18446744073709551615)) - 24013))));
            var_18 -= (!var_7);
        }
        var_19 -= -1;
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 = (min((min((~9880144029386998866), 0)), (((0 ? ((927176548408952164 ? 6825313580037492412 : 927176548408952164)) : (((min(0, 31067)))))))));
    var_16 = ((-((~(0 - 2147483647)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_2] [i_1] [i_0] = ((1 ? 964015603007044367 : (-964015603007044367 / -10216)));
                                var_17 = (((18446744073709551615 ^ -10216) ? ((-6958462006997135062 ? 144 : 1)) : -29580));
                            }
                        }
                    }
                    arr_14 [i_1] = ((-2795981631868368938 ? (2155094888182888814 | 255) : (-127 - 1)));
                }
            }
        }
        arr_15 [10] = ((0 ? ((-2795981631868368938 ? (arr_9 [i_0] [i_0]) : 0)) : (arr_11 [i_0] [i_0] [i_0] [i_0] [10])));
        arr_16 [i_0] [i_0] = ((14878995219107719049 ? (arr_9 [i_0] [i_0]) : 51624));
        var_18 = ((0 / 16291649185526662801) ? ((((arr_3 [i_0] [i_0] [i_0]) % -29580))) : 3567748854601832566);
    }
    var_19 = (max(((((898488528 ? 205 : var_8)))), ((((max(-5680391000007288488, 2199023255551))) ? var_10 : (41 || var_5)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-1317068903176130333 ? 833025970 : 18446744073709551615));

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (~9);
        var_18 *= (arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_19 = (min(var_19, -1668201230));
        var_20 = (((~26) ? ((((arr_1 [i_1 - 1]) / (arr_2 [i_1 - 1])))) : (max((arr_2 [i_1 - 1]), (arr_0 [i_1 - 1] [i_1 - 1])))));
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_21 ^= ((arr_16 [i_2 - 1]) ? (arr_18 [i_3]) : (arr_2 [i_4 + 1]));
                        var_22 = ((104 ? -1 : (arr_5 [i_4 + 1] [i_2 + 1])));
                        arr_19 [i_4] [i_3] [i_3] = (((arr_16 [i_2 + 3]) ? ((65535 ? 104 : 113)) : 1));
                        var_23 = 3400256808;
                    }
                    var_24 = ((~(arr_10 [1])));
                    arr_20 [i_2] [i_4] = 2;
                }
            }
        }
    }
    #pragma endscop
}

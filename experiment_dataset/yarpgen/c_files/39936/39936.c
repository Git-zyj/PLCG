/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_16 *= (((-(arr_3 [i_0 + 2]))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0 + 2] [i_1] [i_2] [i_3 + 4] = 1569821237;
                        var_17 = (2129113764628560483 == var_6);
                    }
                }
            }
        }
        arr_13 [i_0] &= ((!((!((min(-385630473, 1)))))));
        var_18 = (min(var_18, (((-(63 | 8048))))));
    }
    var_19 = min(79, (min((-8051 - -27836), 8050)));

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_20 = (arr_15 [i_4]);
        var_21 = ((8191 ? (arr_14 [i_4] [i_4]) : (min(18446744073709551615, -8058))));
    }
    #pragma endscop
}

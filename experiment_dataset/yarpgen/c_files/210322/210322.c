/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 = (677857466 ^ 0);
                    var_14 *= ((((max(58543, 124))) ? ((1 >> (3617109830 - 3617109819))) : (min((-2147483647 - 1), 610))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_15 = (min(var_15, ((((-2147483647 - 1) - (min(3617109837, ((65535 ? 1769694368 : 31)))))))));
                        var_16 *= ((((max(33479943, 167))) ? (max(2697008111522147805, ((32 ? 2697008111522147805 : 17)))) : 3617109830));
                    }
                    for (int i_4 = 3; i_4 < 24;i_4 += 1)
                    {
                        var_17 |= ((((((max(744, 0)) || ((max(37856, 677857485))))))));
                        arr_16 [i_0] [i_1] [i_1] [i_4] = (min(18446744073709551601, 20));
                    }
                }
            }
        }
    }
    var_18 ^= (min((-32767 - 1), ((min(-4096, var_11)))));
    var_19 = 46;
    var_20 = 8559782330105794313;
    #pragma endscop
}

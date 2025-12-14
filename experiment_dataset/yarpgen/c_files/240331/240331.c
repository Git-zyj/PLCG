/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((min((max(-6354355303585200182, 215)), (!110))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = ((6354355303585200183 << (6354355303585200201 - 6354355303585200201)));

        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            var_12 += (-1464841424 | 2095104);
            var_13 = (min(var_13, (~9223372036854775791)));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_11 [i_2] [15] = 244;
                        arr_12 [i_0] [i_1] [i_2] [15] = ((3872012111 ? 4 : 255));
                        var_14 = (((255 > 0) & 1));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_15 = 12;
        var_16 += (((((max(126, 12668))) && 213)));
        var_17 = (((!393865429) + (((((3684 + (-2147483647 - 1)))) ? (min(0, -35)) : (2 == 30758)))));
    }
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        var_18 += 219483574;
        var_19 = -20;
        var_20 = (max(var_20, ((((max(2601694756637989718, 18446744073709551603)) * ((244 ? 4294967291 : 18446744073709551599)))))));
    }
    var_21 = var_6;
    #pragma endscop
}

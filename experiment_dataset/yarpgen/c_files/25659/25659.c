/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (max((~var_9), ((((((188 ? var_7 : 177))) ? var_6 : (var_10 != var_2))))));
    var_12 = (+((var_4 ? (1 * var_9) : var_0)));
    var_13 = (min(var_13, ((max((((var_6 - var_7) ? ((var_9 ? var_2 : var_0)) : (~var_8))), (max(var_6, (~var_7))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, var_10));

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        var_15 = (min(var_15, (((var_3 ? ((var_3 ^ ((35511 ? 8722151695193265708 : 167)))) : (((4429054316785637335 ? (((arr_8 [i_1] [i_0] [i_1] [i_0]) % var_0)) : ((var_1 ? 0 : var_8))))))))));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_16 = (max(((max(var_0, (var_5 != 188)))), (arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                            var_17 = (min(var_17, ((min(0, ((68 ? (291696825511655567 / -2890258527145052966) : 8078539619067139458)))))));
                            arr_14 [i_2] [1] [i_2] = (((max((~var_6), (var_2 / 32730))) & ((((((-1585109632777541550 ? 68 : 2664367244))) == var_1)))));
                            arr_15 [i_0] [i_1] [i_1] [i_2 - 1] [i_1] [i_4] [i_4] = var_8;
                        }
                        arr_16 [i_2] [i_2] = (min((arr_11 [i_0] [i_1] [i_2] [i_1] [i_2] [i_1] [i_2]), -var_2));
                    }
                }
            }
        }
    }
    var_18 = (((((max(1, 756238879455611922)) != (!var_6))) ? ((var_6 ? (max(17529304295472882414, var_1)) : var_1)) : (((((min(49, -1732155533))) ? -var_6 : 79)))));
    #pragma endscop
}

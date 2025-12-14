/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = (max(var_15, (((-(min(1, -23740)))))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_16 &= ((~((16 & (((min(16, 18))))))));
            var_17 = ((~(~1)));
            var_18 -= (((((20168 ? 1 : 38038))) ? (((-11 ? 28891 : ((min(1, 43243)))))) : (6314577311172913392 - -235)));
        }

        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            var_19 = (min(var_19, (18446744073709551611 >= 6186006925039592333)));
            var_20 = ((-(min((min(1, -1406763068)), (!1)))));
            var_21 = ((((min(15670896826190973238, 1))) ? (((-32767 ? ((min(25242, 511))) : (~250)))) : -9223372036854775807));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_22 &= (min((224 && 2775847247518578382), (min(1758461434, 2388923705))));
                            var_23 += (min(((min(25256, 23752))), (~246)));
                            var_24 = (min((((11 ? -5 : 240))), (min((1 + 1), (!254)))));
                        }
                        var_25 = (min((min((~1), ((min(30186, 80))))), ((-((min(-7, 20)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

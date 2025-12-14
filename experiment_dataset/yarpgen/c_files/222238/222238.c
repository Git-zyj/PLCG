/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_16 = ((((((min(var_2, var_10))) * (0 == var_8))) | ((3261853621886866029 ? 1 : 62101))));
                            var_17 = var_11;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_18 |= (((max((var_14 != var_15), 15184890451822685587))) && (((179 ? var_7 : var_9))));
                            var_19 = ((((0 >> ((((max(-30548, var_7))) - 93)))) >> ((((((4953845403177928712 >> (65 - 40))) ^ (((3435 << (2136671859943579585 - 2136671859943579578)))))) - 147636004693))));
                            var_20 |= ((var_15 <= (((var_1 > 5227410590938863709) ^ 3261853621886866029))));
                            var_21 = (var_6 < 0);
                        }
                    }
                }
                var_22 = (((6452223755753970328 > var_13) > (max(var_11, 5028394056465588558))));
            }
        }
    }
    var_23 = (var_0 + 67);
    var_24 = var_12;
    #pragma endscop
}

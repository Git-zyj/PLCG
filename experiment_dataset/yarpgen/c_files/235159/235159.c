/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_10);
    var_21 = ((-32191 ? var_13 : (max(var_2, (~1)))));
    var_22 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_23 = (min(var_23, var_15));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_24 = (max(var_24, (((((arr_7 [i_3] [i_3 - 2] [i_3 - 3] [i_0]) && (arr_7 [i_3] [i_3 + 1] [i_3 + 1] [i_0]))) && (((~((max(10, -19413))))))))));
                            arr_11 [i_3] [i_3 - 1] [i_2] [i_2] [i_1] [i_0] = 1460191531;
                            var_25 ^= min((min((((0 ? (arr_1 [i_0]) : -7199044354792982566))), var_8)), ((((arr_5 [i_2] [i_1] [i_2]) + (var_3 >= var_8)))));
                            var_26 *= ((((((max(2016590484, (arr_0 [i_3 - 2]))) * 4294967286))) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : -4296512353373845500));
                        }
                    }
                }
                var_27 = (!((max(237, (max(0, 15277492232895114321))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_28 |= (max(var_11, (max(248, (((var_10 >> (((arr_3 [i_0] [i_5]) + 1111286688)))))))));
                            var_29 |= (max((((((min(-7758911211359938428, -71)) + 9223372036854775807)) >> 0)), -1891439544));
                            arr_18 [i_0] = arr_10 [i_0] [i_0] [i_4] [i_5];
                        }
                    }
                }
            }
        }
    }
    var_30 = ((-7 ? (!4241839318248762856) : (((((4294967292 ? 0 : var_1))) ? (max(-11, (-2147483647 - 1))) : ((max(var_10, var_13)))))));
    #pragma endscop
}

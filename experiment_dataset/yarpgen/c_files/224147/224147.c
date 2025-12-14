/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (!var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [18] [15] [i_0] = ((!((min((max(16842172692231441731, 1604571381478109884)), 1604571381478109895)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_18 = 9059574335656749529;
                            arr_14 [i_0] = (((min(9059574335656749529, 59169))));
                        }
                    }
                }
                var_19 = (max((min(21624, 0)), 9059574335656749529));
            }
        }
    }
    var_20 = (116 - 14058110872892167342);
    var_21 += ((-(9387169738052802085 + 1604571381478109884)));
    var_22 = -0;
    #pragma endscop
}

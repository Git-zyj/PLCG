/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [2] [i_1] = (((((~(max(-32, 2195976270))))) ? (((max((arr_1 [i_1] [i_0]), var_3)) << (((max(var_14, (arr_3 [i_0] [i_0] [i_1]))) - 2866646877)))) : (((~((var_14 ? (arr_1 [i_0] [i_1]) : 21)))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, 1));
                            var_21 = (min(var_21, ((37 ? -16 : 954188028))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [3] [17] [i_1] = (((((+(((arr_0 [i_0]) + 4))))) || (((var_7 ^ (~var_10))))));
                var_13 = ((((((max(-83, (arr_0 [i_0 - 1]))))) ^ (arr_3 [i_0 + 2] [i_0 - 1] [i_0 + 2]))));

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    arr_9 [i_0 - 2] = ((var_5 ? ((-9102649207214355713 ? -var_11 : 83)) : 103972800));
                    var_14 = ((~((max((arr_6 [i_0 + 2]), (arr_5 [i_0] [1]))))));
                }
            }
        }
    }
    #pragma endscop
}

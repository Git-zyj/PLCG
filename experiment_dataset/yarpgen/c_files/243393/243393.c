/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (max(var_20, ((1 ? (min((1 || 1), 15421404602330824562)) : 32221))));
                var_21 = (min(((min((arr_2 [12]), (arr_2 [i_1])))), (min((arr_0 [i_1] [1]), (arr_0 [i_0] [i_0])))));
                arr_5 [i_0] [i_1] = (max(var_7, (max(1, (arr_1 [i_0])))));
            }
        }
    }
    var_22 = (-4787416154585399478 ? 100 : 4194303);
    var_23 |= (max(var_18, var_2));
    var_24 = 4787416154585399478;
    #pragma endscop
}

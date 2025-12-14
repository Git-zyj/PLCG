/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_13 -= ((0 ? -1 : 0));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] = 16141622415638996983;
                    arr_9 [i_0] [i_0] [i_1 - 1] [7] = (((min(var_5, (arr_3 [i_0 + 1]))) ^ (((~((min(28, var_2))))))));
                    var_14 = ((((((min(461980332195151759, (arr_7 [i_0] [i_0] [i_0])))) ? (((((arr_2 [i_2]) < (arr_7 [i_0 - 1] [i_1] [i_2]))))) : var_0)) + (((((((var_8 | (-9223372036854775807 - 1))) + 9223372036854775807)) << (((-28675 + 28734) - 44)))))));
                }
            }
        }
    }
    var_15 = var_4;
    #pragma endscop
}

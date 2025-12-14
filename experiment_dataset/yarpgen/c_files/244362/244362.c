/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_0 << ((((var_0 && var_4) >= ((min(var_12, var_13))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((((min(var_2, (((arr_1 [i_0 - 3]) <= (arr_1 [i_0 - 1]))))))) >= (((arr_0 [i_0 - 2]) >> (((arr_0 [i_0 - 3]) - 16391994057513058902))))));
                var_15 += (max((+-0), (arr_1 [i_0 - 2])));
                arr_6 [i_0] [i_0] [4] = ((-(max((arr_0 [i_0 - 3]), (min(1, (arr_0 [i_1])))))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -204;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = (((((var_14 - (((((arr_4 [i_0] [i_0]) <= (arr_4 [i_1] [i_2])))))))) ? (204 <= 824633720832) : (((arr_5 [i_0 - 2] [i_0 - 1] [i_0 - 3] [i_0 - 2]) ? 1 : (arr_5 [i_0 + 1] [i_0 - 4] [i_0 - 4] [i_0 - 4])))));
                    var_21 = (min(0, ((~(min(254, 1152921496016912384))))));
                    arr_8 [i_0] [i_1] [1] = (max((((arr_0 [i_0 - 4]) * (arr_0 [i_0 - 2]))), (arr_5 [i_0 + 1] [i_0 - 2] [i_0 - 3] [i_0 - 1])));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [4] [i_1] |= (min((arr_4 [i_0]), (((arr_3 [i_0] [i_1] [i_1]) ? (min(29987079, (arr_2 [5]))) : (4264980216 || var_2)))));
                var_14 = (max(var_8, ((min(29987079, 4264980212)))));
                arr_7 [i_1] [i_1] [i_1] = ((!(arr_0 [i_0])));
                arr_8 [i_1] = 29987067;
            }
        }
    }
    var_15 = var_10;
    var_16 = -29987063;
    #pragma endscop
}

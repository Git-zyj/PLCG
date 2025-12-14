/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (arr_3 [i_1])));
                var_12 -= (1 > 888625611);
                arr_4 [i_0] [i_0] [i_0] = (max(888625618, (1 && 248314825)));
                var_13 = (-0 ? (((var_2 ? var_2 : 10127296751998231599))) : ((-(min((arr_0 [6]), (arr_1 [11]))))));
            }
        }
    }
    #pragma endscop
}

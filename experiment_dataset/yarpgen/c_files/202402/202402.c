/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_10;
    var_12 = (((((var_5 ? var_3 : var_7))) ? var_9 : (((-(~var_1))))));
    var_13 = (max(var_13, 21469));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = ((((((arr_3 [i_0] [i_0] [i_1]) * (max(var_7, (arr_3 [i_0] [i_0] [i_1])))))) && -609492040));
                var_15 = 1027469469;
            }
        }
    }
    #pragma endscop
}

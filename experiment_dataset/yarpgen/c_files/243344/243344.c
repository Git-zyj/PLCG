/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_5;
    var_11 = (min(-866252853, var_0));
    var_12 = ((~(((!((min(var_5, var_7))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = (arr_1 [0]);
                arr_6 [i_1 + 4] = (((!-1824952309055404326) ? var_4 : (((((arr_2 [i_1 + 2]) >= (arr_2 [i_1 + 3])))))));
            }
        }
    }
    #pragma endscop
}

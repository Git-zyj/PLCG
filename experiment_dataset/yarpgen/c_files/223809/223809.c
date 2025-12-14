/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((240 ? 1044480 : -7657)) ? -4294967295 : var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] = var_5;
                var_12 = (0 * 220);
                arr_8 [i_0] [i_1] = ((var_8 ? ((36 ? -1265765000 : 4294967295)) : (((1 ? 4280795313 : 1)))));
            }
        }
    }
    var_13 = ((((((-2147483647 - 1) ? (~15) : var_6))) ? (~-1044480) : var_10));
    #pragma endscop
}

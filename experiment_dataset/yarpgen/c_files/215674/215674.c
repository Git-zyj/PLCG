/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_10 = (arr_4 [i_1]);
                var_11 |= ((((max(1, var_3))) / (((var_5 / 1) ? (1 * 4294967295) : (((arr_0 [i_0]) / var_1))))));
            }
        }
    }
    var_12 = (var_9 - 480154053);
    var_13 = ((((((((2331527690 ? 1398828777 : -1720853643))) ? ((-48925832 ? -1885024456 : -373528391)) : var_9))) ? (var_7 < var_3) : var_7));
    var_14 = var_4;
    #pragma endscop
}

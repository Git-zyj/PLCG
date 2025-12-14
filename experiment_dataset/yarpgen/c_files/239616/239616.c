/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (2949410294 >> (var_4 + 9111520926972906404));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min((12 / 5162869331539275029), ((min(var_13, -91)))));
                var_17 = 4960918859006413163;
                var_18 = var_6;
            }
        }
    }
    var_19 = 5125343984741355675;
    #pragma endscop
}

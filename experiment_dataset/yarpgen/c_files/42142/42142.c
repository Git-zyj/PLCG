/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((-25945 ? 12518842162667450701 : 12518842162667450709));
    var_18 = 12518842162667450701;
    var_19 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 |= max((max(var_15, var_6)), (((((var_3 ? var_2 : (arr_0 [5] [i_1])))) & ((244 ? (-2147483647 - 1) : 5927901911042100901)))));
                    var_21 = (min(var_21, ((min(var_12, ((min(((((arr_3 [i_2]) > 6074300608119725842))), var_7))))))));
                }
            }
        }
    }
    #pragma endscop
}

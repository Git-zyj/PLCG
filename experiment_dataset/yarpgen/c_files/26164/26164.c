/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(var_12, (28413 ^ 1));
    var_18 = (max(var_18, var_9));
    var_19 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 -= 41411;
                arr_6 [i_1] = (((max((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_1]))) ? (~41395) : ((min(45011, (arr_1 [0] [i_1]))))));
                var_21 *= (((((((arr_4 [i_0] [i_1]) ? 56850 : 4398046511103)) != 48718)) ? (arr_1 [i_0] [i_1]) : ((((min(1, (arr_5 [i_0]))) >= (min((arr_3 [i_0] [i_0]), 65532)))))));
            }
        }
    }
    #pragma endscop
}

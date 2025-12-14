/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~(((65533 ? 24 : 34463))));
    var_11 = (min(-25, ((var_1 ? (31069 ^ 1123399040) : (min(var_7, 6348))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (((((-2999133539929784639 ? 1954878617 : 34467))) ? var_4 : var_7));
                    var_13 = (((min((min(245, var_6)), 2147483647)) >= ((((min(4294967287, 30903))) ? -37 : -5789233559366744051))));
                }
            }
        }
    }
    var_14 = (min(((((max(var_3, 1954878611))) && (((2147483647 ? 1954878617 : 37075))))), (!var_0)));
    #pragma endscop
}

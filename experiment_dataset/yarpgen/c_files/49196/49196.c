/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (!-993138932400200149);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_16 ^= var_7;
                            var_17 = var_0;
                            var_18 = ((!((max(var_1, (max(13905852073487329708, var_8)))))));
                        }
                    }
                }
                arr_10 [i_0] [i_1] [i_0] = var_4;
            }
        }
    }
    var_19 = var_7;
    var_20 &= var_10;
    #pragma endscop
}

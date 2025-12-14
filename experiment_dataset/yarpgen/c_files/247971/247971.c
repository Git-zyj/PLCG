/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [i_0 + 2] [i_0] [i_0] [i_0] [i_0] = ((-(((arr_0 [i_0 + 1]) >> (arr_0 [i_0 - 2])))));
                            var_11 += (~var_4);
                        }
                    }
                }
                var_12 = (max(var_12, ((((min((~var_1), var_6)) & (((~var_8) ? var_5 : (~0))))))));
            }
        }
    }
    var_13 |= var_9;
    var_14 = (-2147483647 - 1);
    #pragma endscop
}

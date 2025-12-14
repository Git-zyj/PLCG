/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 111;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 = (--14249);
                    var_22 = (!3129141156814861003);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_23 |= 1676419211;
                            var_24 = 63;
                        }
                    }
                }
                var_25 = -9223372036854775803;
            }
        }
    }
    #pragma endscop
}

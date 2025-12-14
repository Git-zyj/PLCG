/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    var_18 = (min(var_18, (((max(var_10, -9223372036854775801))))));
                    var_19 *= (~var_15);
                    var_20 ^= var_2;
                    var_21 = (min(var_21, (((!((((!var_10) ? var_3 : ((~(arr_3 [i_0] [i_1])))))))))));
                }
                var_22 &= 127;
            }
        }
    }
    var_23 = (min(var_23, (~var_9)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] = ((~((((~96) > -24)))));
                    var_11 = -30;
                }
            }
        }
    }
    var_12 = ((-32 * (((!((min(1, 1950815163))))))));
    var_13 += (((((min(var_1, var_10)))) & 9));
    var_14 *= (~22419);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 -= max((((((min((arr_5 [i_0 + 1]), (arr_1 [i_1 + 1])))) < var_17))), (arr_6 [i_0]));
                    var_21 = 7;
                    var_22 = (max((!60), (!var_4)));
                }
            }
        }
    }
    var_23 = var_19;
    var_24 ^= -66;
    #pragma endscop
}

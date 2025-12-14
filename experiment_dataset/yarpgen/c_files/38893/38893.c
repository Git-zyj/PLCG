/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [6] [i_1] [i_2] = ((max(var_7, var_1)));
                    arr_11 [i_0] [i_0] = ((((((3703909450488374504 ? var_11 : -12)))) ? 6 : (((-33 ? var_9 : ((min(1, 22768))))))));
                    arr_12 [i_0] [i_1] [i_2] [i_1] = ((~(14878997358150845524 ^ var_0)));
                }
            }
        }
    }
    var_13 = var_6;
    #pragma endscop
}

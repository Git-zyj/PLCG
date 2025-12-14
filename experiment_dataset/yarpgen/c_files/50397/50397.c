/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 5508;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (min(var_18, ((((-4913330422969478695 ? var_13 : (3774567697 > var_8)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 *= (10555599892408781744 * 7121371956649588205);
                    arr_8 [i_0] [i_1] [i_1] = var_15;
                }
            }
        }
    }
    var_20 = 11325372117059963411;
    #pragma endscop
}

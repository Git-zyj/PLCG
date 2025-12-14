/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= 4267447843;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = (!var_4);
                    var_14 = (arr_6 [i_0] [i_1] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}

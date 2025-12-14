/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (max((((-4371358282193212310 != 28702) ? 105553116266496 : var_12)), ((max(39662, 211)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 = (arr_3 [i_1]);
                    var_19 = (arr_4 [i_1] [i_1]);
                }
            }
        }
    }
    var_20 = (max(var_20, -105553116266479));
    #pragma endscop
}

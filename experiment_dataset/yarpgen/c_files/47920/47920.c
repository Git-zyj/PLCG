/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] [i_2] = -5585308286691205472;
                    var_18 = (min(var_18, var_9));
                    var_19 = (((((var_3 + (arr_4 [4] [4])))) ? 2796370122840263923 : ((var_4 / (arr_4 [i_0] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_2;
    var_11 = (min(var_11, (~154)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, 157));
                    arr_7 [i_0] = ((max(154, 0)));
                    var_13 += (max(65535, (min(((~(arr_5 [i_0 - 3] [i_0 + 1] [i_0]))), (arr_5 [i_0 + 1] [i_0 - 2] [i_0 + 1])))));
                    var_14 = (min(var_14, (((min(((-20480 ? 16 : 102), ((var_9 ? -64 : 96)))))))));
                    arr_8 [i_0] [i_0] [i_0] = 154;
                }
            }
        }
    }
    #pragma endscop
}

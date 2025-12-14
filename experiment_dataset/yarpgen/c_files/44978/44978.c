/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= 4294967294;
    var_14 = (max(var_14, (((((min(4294967280, ((var_3 ? var_8 : 14))))) && ((min(var_3, var_9))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 += 0;
                    arr_9 [i_0] [18] [i_2] [i_2] = ((((min(2147221504, 9699716762238416058))) ? -2147221526 : -11037));
                }
            }
        }
    }
    var_16 = (max(var_16, ((min(var_7, var_6)))));
    var_17 = (max(var_17, ((min(var_0, (min(((min(51132, 3))), var_1)))))));
    #pragma endscop
}

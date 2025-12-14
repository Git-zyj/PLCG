/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_13 + (((var_6 ? 255 : var_3)))));
    var_19 = (-127 - 1);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = (((((7589 ? -127 : 21))) ? (-127 - 1) : ((((0 ? (-2147483647 - 1) : 67108863)) - (((46 ? -1291541954 : 21)))))));
                    arr_7 [17] [17] = ((16 - 122) + (2964252938 + -67108864));
                }
            }
        }
    }
    #pragma endscop
}

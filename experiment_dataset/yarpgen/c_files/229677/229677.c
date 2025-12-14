/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_2] [i_2] = (((var_5 / -78) ? ((-9271 ? 9267 : 4294967288)) : var_9));
                    var_14 += (((-14 < 8) ? ((((17514 <= (6 <= 0))))) : (~0)));
                }
            }
        }
    }
    var_15 = (min(var_15, (((((max(646937074, 15580753237237378109)) <= (var_11 >= 0))) ? (-31288 < 3906770221) : (!var_5)))));
    var_16 = (min(var_16, (((var_11 ? ((((var_4 <= ((40165 ? var_2 : 8)))))) : (((((-79 ? -1 : 18446744073709551610))) ? 0 : 1)))))));
    #pragma endscop
}

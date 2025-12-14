/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((var_10 || (((3626626870 ? 125444905 : 1447988062284699821)))));
    var_17 = (min(var_17, (((((((103 >> (16998756011424851796 - 16998756011424851794)))) || (-79 >= var_14)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = ((3416133210 || 107) >> (((var_10 + var_3) - 171)));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = 0;
                }
            }
        }
    }
    #pragma endscop
}

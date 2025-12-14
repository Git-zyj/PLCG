/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 64;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 = (max(((max(var_15, 24576))), -1515801316157702806));
                    arr_7 [i_0] [i_1] [i_1] = (max(((((max(var_8, 34834))) ? var_0 : (((var_17 ? 4294967295 : -45))))), var_8));
                    arr_8 [i_1] [19] [i_1] [i_2] = (max((((((var_19 ? 7 : 1))) ? (((max(65535, 65520)))) : (max(9299, var_0)))), -64));
                }
            }
        }
    }
    #pragma endscop
}

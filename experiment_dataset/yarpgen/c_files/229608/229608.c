/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    {
                        var_11 = (!5233076551383058060);
                        var_12 ^= var_3;
                    }
                }
            }
        }
        var_13 = 1268270718;
    }

    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_15 [i_4] = ((-(arr_0 [i_4])));
        var_14 ^= (!var_5);
    }
    #pragma endscop
}

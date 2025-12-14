/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((246446128280958850 << (((((var_3 ? 2775912881 : var_5))) ? var_2 : var_2))));
    var_16 |= var_12;
    var_17 = (max(var_17, ((min(var_8, (min(var_14, var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_9 [i_1] [i_2] [8] [i_1] = 21307;
                    var_18 = (max(var_18, (~-21307)));
                    var_19 = 28668;
                }
                arr_10 [i_1] = 30076;
            }
        }
    }
    #pragma endscop
}

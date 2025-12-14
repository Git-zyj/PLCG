/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = ((8796093022200 || -8796093022208) ? (arr_1 [i_0]) : (8879091348752644704 + 0));
                arr_6 [i_0] = (((((-(8988958152935511222 == 104)))) <= var_6));
                arr_7 [i_0] [i_0] [i_0] = 8796093022208;
            }
        }
    }
    var_20 = var_1;
    #pragma endscop
}

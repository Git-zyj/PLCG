/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = (min(var_15, (255 - -2310253724274578474)));
    var_16 = (max(var_16, var_12));
    var_17 = -var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 += var_10;
                arr_5 [i_0] = ((!((((~var_12) ^ (arr_2 [i_0]))))));
                var_19 = ((((-(arr_1 [i_0] [i_1]))) < (arr_0 [i_1] [i_1])));
                arr_6 [i_1] [i_1] = (max(((0 & ((-(arr_4 [i_0] [12]))))), (((arr_2 [i_0]) ? 54324 : 19119))));
                var_20 += (-19121 & 141);
            }
        }
    }
    #pragma endscop
}

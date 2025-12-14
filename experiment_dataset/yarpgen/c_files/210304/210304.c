/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((max(var_11, (min(var_10, -9035855029664266320)))) * ((((!(arr_2 [i_0] [i_0])))))));
                var_16 = (max(-var_1, ((((arr_0 [i_0 - 1] [i_1 + 2]) || ((min((arr_4 [i_1 - 1] [i_0]), var_1))))))));
                arr_7 [i_0] [i_1] [i_1] = 1;
                var_17 ^= ((!(arr_2 [i_1] [i_1 + 2])));
                arr_8 [i_0] = (~var_14);
            }
        }
    }
    var_18 = ((((8925460349782708639 | ((93 ? 7696581394432 : -6746)))) ^ (((((max(var_9, -6752))) ? (var_6 ^ 24522) : var_1)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1 - 2] = (((((((min(9223372034707292160, 230))) ? ((max((arr_0 [i_0]), (arr_2 [i_1])))) : (min(137371844608, (arr_3 [i_0] [i_0])))))) ? -11 : 1));
                arr_7 [i_1] [i_1 - 1] = (min((arr_5 [i_1]), (((arr_4 [i_0]) ? 72057044282114048 : (arr_3 [i_0] [5])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 7;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                arr_14 [i_2 + 2] = 1;
                arr_15 [i_2] [i_2] [i_2 + 2] = (((arr_2 [i_3]) * ((var_5 ? (arr_1 [0] [0]) : 0))));
            }
        }
    }
    #pragma endscop
}

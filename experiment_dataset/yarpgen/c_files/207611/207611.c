/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = ((((max(1118020109, 1118020109))) ? (((arr_4 [i_1 + 1] [i_1] [i_1 + 1]) ? (arr_2 [i_1 + 1] [i_1 - 1] [i_0]) : -108)) : ((-(arr_0 [i_0] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_9 [17] [i_1] [i_0] [i_1 - 1] [i_1] = (((-7232262802543928919 ? 7232262802543928919 : -7232262802543928919)));
                            arr_10 [i_0] [i_1 + 1] [i_1] [i_0] [i_0] [i_0] = var_7;
                        }
                    }
                }
            }
        }
    }
    var_15 |= (min(var_2, (((((min(41767, var_5))) || -108)))));
    #pragma endscop
}

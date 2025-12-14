/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-65 ? var_3 : (min(((max(var_9, 6351890808719465434))), ((6351890808719465434 ? 12196052523137953713 : 6351890808719465434))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((((((((arr_2 [i_0 + 2] [i_0 + 2]) + 2147483647)) << (((-6351890808719465434 + 6351890808719465447) - 13))))) ? (arr_2 [i_2 + 2] [i_0 + 1]) : (min(1569445854349658850, ((((arr_1 [i_2]) != 1)))))));
                    arr_9 [i_1] = 0;
                }
                var_14 = (((min(0, (arr_6 [i_0] [i_1])))));
                var_15 = ((~((((max(-223821600355079042, (arr_6 [i_0] [i_1]))) <= (arr_2 [i_0 + 2] [i_0]))))));
            }
        }
    }
    #pragma endscop
}

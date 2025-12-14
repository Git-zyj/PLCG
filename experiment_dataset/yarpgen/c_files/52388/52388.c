/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_5, var_7));
    var_11 = ((var_3 >> (var_9 - 26648)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_6 [i_1 + 1] = (arr_1 [i_0]);
                    arr_7 [i_2] [i_1] [i_0] = (min(((((arr_4 [i_1 - 2] [i_1 - 1] [i_1 + 1]) ? (arr_0 [i_1 - 2] [i_1 + 1]) : (arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 1])))), 3250819873));
                }
                arr_8 [i_0] [i_0] = (((arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1]) ^ (max(575174809, (arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 1])))));
            }
        }
    }
    #pragma endscop
}

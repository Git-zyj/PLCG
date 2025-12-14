/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (max((min(var_4, (arr_5 [i_0] [i_2 + 1] [i_2]))), (((~(arr_5 [i_0] [i_2] [i_2 + 1]))))));
                    arr_6 [i_0] [i_1] [i_2] [i_2 + 2] |= max((max((max(0, (arr_4 [i_0] [i_1] [i_2 + 2]))), var_3)), ((var_9 ? (~-1719806012) : (arr_4 [i_2 + 2] [7] [i_2 - 2]))));
                    var_16 |= (arr_2 [i_0] [i_1] [i_2 + 2]);
                }
            }
        }
    }
    var_17 = (max(var_17, (((+(min((~6723262763813579023), var_7)))))));
    var_18 = (~var_13);
    #pragma endscop
}

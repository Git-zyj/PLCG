/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(var_0 - var_3)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (((((arr_1 [i_1 - 2] [i_1 - 2]) && (arr_1 [i_1 + 2] [i_1 + 1]))) ? var_0 : -17392078390952186934));
                    arr_8 [i_1] [i_1] = (-9 >= 1054665682757364685);
                    arr_9 [i_1] [i_1] = (max((~47172), (((((788402033 - (arr_7 [i_0] [i_1] [i_2] [i_0])))) ? (arr_5 [i_1] [i_2]) : ((-13 ? var_8 : (arr_3 [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}

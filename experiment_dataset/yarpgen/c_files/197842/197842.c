/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((-16234 % (max(53, 1035310625)))));
                arr_5 [i_0] [i_1] = ((!((!(arr_3 [i_1])))));
                arr_6 [i_0] [i_0] [i_1] = 18000236048329788900;
            }
        }
    }
    #pragma endscop
}

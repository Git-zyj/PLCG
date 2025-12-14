/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1335639444;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [9] [i_2 - 4] [9] [i_1] = 536870912;
                    var_13 = (min(8117299334867877027, 15362077197479807636));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 7;i_4 += 1)
        {
            {
                var_14 = (arr_6 [i_3] [i_3]);
                var_15 = (min((((((15426072197019590955 ? 3456113216 : 536870912))) ? (arr_11 [i_3]) : (((min((arr_0 [i_4]), 53)))))), (min((max(-908241378, (arr_14 [i_3] [i_3] [i_4]))), (arr_14 [i_4 + 1] [i_4 - 1] [i_3])))));
            }
        }
    }
    var_16 = var_7;
    #pragma endscop
}

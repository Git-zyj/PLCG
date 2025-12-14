/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((min(((max(0, 0))), var_3))), 241590859));
    var_19 = (max(((max(1928643734, 1928643734))), var_8));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = (min(3775878139589266482, (min((max(918209432850972449, (-32767 - 1))), 3122916573171508300))));
                    arr_6 [i_0 + 1] [i_1] [i_1] = (max((-127 - 1), (min(2147483637, 241590855))));
                }
            }
        }
    }
    var_21 = ((max((max(6023644069056580575, 103)), 3562572108813991)));
    #pragma endscop
}

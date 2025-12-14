/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = 1917232435;
                arr_7 [i_1] = (!8068669578664946185);
                arr_8 [i_0] = (max(9223372036854775792, (((!(~4294967274))))));
            }
        }
    }
    var_13 -= -1422450069;
    #pragma endscop
}

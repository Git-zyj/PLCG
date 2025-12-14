/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_10;
    var_18 = ((var_11 ? -1 : (2270084571584449262 & 16176659502125102349)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (((((((16176659502125102354 ? (arr_3 [i_0 + 2] [i_0] [i_1]) : -18))) ? (((arr_1 [i_0 + 1]) ? 16176659502125102345 : var_4)) : (((2421823665288742822 - (arr_3 [i_1] [i_1] [i_0])))))) - 7841731749162548144));
                arr_6 [i_0] [6] = (arr_4 [i_1]);
                var_19 = ((+((((((arr_0 [i_0]) - var_6))) ? (16176659502125102367 && var_1) : (~var_9)))));
                var_20 = (min(var_20, (arr_3 [i_0] [i_0] [8])));
                arr_7 [i_0] [i_0] [i_0] = ((!((((((2800456207 ? var_6 : 1630380820))) ? 16176659502125102321 : (!16176659502125102348))))));
            }
        }
    }
    var_21 &= ((var_7 >> (2270084571584449262 - 2270084571584449218)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = (((max(0, (((arr_7 [i_0] [i_1] [i_2]) ? (arr_5 [i_0] [i_1]) : 2099123046239003447))))) ? ((~(max(16347621027470548178, 2409138536101545978)))) : (((-var_10 ? var_1 : -11127))));
                    arr_8 [i_0] [i_1] = (((min((max(-799135422, 16347621027470548162)), (max(175080326, (arr_2 [i_0])))))) ? (((min(1159572092, 4505948371174503210)) ^ 212327090)) : ((((((var_10 + (arr_1 [1] [i_1])))) ? var_10 : (arr_3 [i_0] [i_1])))));
                    var_20 = ((~(arr_2 [i_0])));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = 1;
                }
            }
        }
    }
    #pragma endscop
}

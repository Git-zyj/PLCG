/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = ((((~3638243859093585520) ? 1 : 15018)));
                    var_20 = ((((max(27, 0))) ? (min(2367140641, -27)) : (((~(arr_3 [0]))))));
                    var_21 = (min(var_21, ((min(((max((arr_7 [i_0]), -27))), ((852990384 ? (!-3638243859093585520) : (arr_6 [8] [i_0] [i_2]))))))));
                    var_22 -= ((((max(-3638243859093585521, 3441976916))) ? (arr_6 [i_0] [i_2] [i_2]) : ((min(1927826673, 1)))));
                }
            }
        }
    }
    var_23 = var_18;
    #pragma endscop
}

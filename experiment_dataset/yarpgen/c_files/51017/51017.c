/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 &= (~var_7);
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((!((min((arr_5 [i_0]), (arr_5 [i_0]))))));
                    var_17 = 23;
                    var_18 = 31;
                }
            }
        }
    }
    var_19 = (max(var_19, (((((!23) >= 52503))))));

    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_20 = ((((23 ? (min(11314, 446432269924580373)) : (((max(121, -14)))))) >> 23));
        arr_12 [i_3] = (min((((239783889249628976 ? 23 : 16))), (max(-23, (arr_11 [i_3])))));
        var_21 = (min(var_21, (arr_11 [i_3])));
    }
    var_22 = var_14;
    #pragma endscop
}

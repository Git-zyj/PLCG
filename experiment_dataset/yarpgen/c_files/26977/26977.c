/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((3775001620554765386 ? (~-3775001620554765377) : (!2865199506))), var_4));
    var_19 = (((max(1, -var_7)) >= var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (((-8841730840491208176 + 1496551293) / (max(3775001620554765386, (~1)))));
                    arr_6 [i_0] [i_0] [i_2] = (max((min((arr_5 [i_0] [i_2 - 1]), var_13)), (((~(arr_5 [i_0] [i_0]))))));
                    arr_7 [i_2 - 3] [i_0] [i_0] [i_0] = ((~(~15794851714161136346)));
                    arr_8 [i_0] [i_0] [i_2] = ((1 ? 3775001620554765390 : 3775001620554765386));
                }
            }
        }
    }
    var_21 = -3059419080858529404;
    #pragma endscop
}

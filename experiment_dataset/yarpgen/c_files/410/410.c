/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((27921 + (var_12 * 0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] = (max((3081329905428466115 && -1568649921), ((0 % ((7180419467409752183 ? 10498 : 146587061))))));
                    arr_8 [i_0] [i_1 - 3] [i_0] = (min((min((arr_3 [i_2] [i_2] [i_1 + 2]), (arr_5 [i_1 - 3]))), (((arr_5 [i_1 - 1]) % (arr_5 [i_1 - 3])))));
                }
                arr_9 [i_0] = ((((arr_2 [i_0] [i_0]) ? (~var_12) : 21728)));
                arr_10 [i_0] [i_0] [i_0] = var_14;
            }
        }
    }
    var_17 = (((-972116272907790436 % var_12) ? ((max((var_1 || 5306492760944751967), (!159)))) : (!-var_12)));
    #pragma endscop
}

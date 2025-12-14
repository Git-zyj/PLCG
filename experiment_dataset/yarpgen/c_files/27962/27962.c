/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_2 [i_0] [i_1]);
                var_18 |= (min((min((~6941768358867569965), -11504975714841981651)), (arr_3 [4])));
            }
        }
    }
    var_19 = (max((--18737), var_3));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_20 |= (((min((-64 > var_9), -var_2))) ? ((~((var_7 ? 268435328 : -268435328)))) : ((-(arr_10 [i_3 + 1]))));
                    arr_14 [i_3] [i_3] [i_3] [i_3] = (arr_11 [i_2] [i_2] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}

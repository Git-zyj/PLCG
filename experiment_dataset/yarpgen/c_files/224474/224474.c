/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-4074658269924544484 == -119);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = ((~(-32767 - 1)));
                    var_16 += ((((!(4052441412763291157 ^ 1266536361))) ? -var_5 : ((((arr_6 [i_0] [5]) / (arr_6 [i_1] [i_1]))))));
                    var_17 = (min(var_17, ((min((min(226, ((min(0, (-127 - 1)))))), ((((arr_3 [i_2 - 2] [i_2 + 1]) ^ var_8))))))));
                    arr_7 [1] [1] [13] = 231;
                }
            }
        }
    }
    var_18 = (max(var_18, var_11));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_4;
    var_13 = (((((((min(var_10, var_5))) ? (((var_2 ? var_5 : 1))) : (~281474974613504)))) ? (((var_8 & (((1848007144 ? 5128 : 2046)))))) : (((min(var_3, var_1)) | var_4))));
    var_14 = ((min(((min(16384, var_4))), 864691128455135232)));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [17] = (arr_7 [i_0 + 2]);
                    var_15 = (min(var_15, ((min((arr_6 [i_1 + 1] [i_2]), (((arr_6 [i_1 + 1] [i_1]) | (arr_6 [i_1 + 1] [i_1 + 2]))))))));
                }
            }
        }
    }
    var_16 = var_3;
    #pragma endscop
}

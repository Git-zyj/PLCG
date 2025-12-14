/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (!var_2);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_4 [i_0 - 3] = (max(var_1, (7 | 2147467264)));
                var_11 ^= ((var_1 ? (arr_2 [i_0] [i_1 + 1] [i_0]) : var_7));
                arr_5 [2] [1] = ((+((min((arr_3 [i_0 - 3]), (arr_3 [i_0 - 3]))))));
                var_12 = (max(4241859838254778842, 6784));
                arr_6 [i_0] &= 1;
            }
        }
    }
    var_13 ^= (((min((max(288229826395897856, var_3)), var_0)) | -var_4));
    #pragma endscop
}

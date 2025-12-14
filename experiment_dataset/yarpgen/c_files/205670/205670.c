/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += -var_12;
    var_20 += (min((var_18 >= 1), -1545777765));
    var_21 = ((((((1073741824 ? var_8 : 21)) | -118))) ? (((var_8 ^ var_10) ? var_9 : (3852625791 ^ var_16))) : -var_13);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [1] [i_1] = (((((min(5109, var_17))) ? (((arr_0 [i_0] [1]) ? 21 : var_5)) : var_12)));
                    arr_7 [i_2] &= (18446744073709551595 ? ((var_7 ? 116 : (max(var_18, (arr_5 [i_0] [i_0] [11]))))) : (arr_3 [i_0]));
                    var_22 = (arr_4 [i_0] [1] [i_1] [1]);
                    arr_8 [i_0] [i_1] = (+(((arr_4 [i_0] [i_0] [i_1] [i_1 + 1]) ^ (arr_4 [i_1] [7] [i_1] [i_1 - 2]))));
                }
            }
        }
    }
    #pragma endscop
}

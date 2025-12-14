/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= 225;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        var_20 = (min(((-266213874357791883 ? ((266213874357791882 - (arr_8 [i_0] [i_1] [i_2] [i_2]))) : (arr_10 [i_2 + 2] [i_1] [i_3 - 1] [i_3]))), (((~((3524676785533218146 ? var_16 : 2237132287)))))));
                        arr_11 [i_0] [8] [1] [6] &= ((((var_6 || (arr_5 [i_2 + 2] [i_2 + 2]))) ? var_4 : (((min((arr_1 [i_0] [i_1]), var_13)) | 266213874357791893))));
                        arr_12 [i_0] [i_0] [i_0] [i_2] [i_1] = ((((max((min(var_8, 17911678617705871111)), ((max(2237132294, 9179574140456856559)))))) ? (((((arr_3 [i_1]) <= ((2237132283 ? 266213874357791895 : 2237132276)))))) : ((~(arr_6 [i_0] [i_1])))));
                        arr_13 [i_0] [i_1] = (max(((var_8 ? (arr_2 [i_3 + 1]) : ((var_12 ? 266213874357791895 : -266213874357791895)))), (((arr_4 [i_1] [3]) ? (max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), 18052)) : (arr_8 [i_2 - 2] [i_2 + 1] [i_3 + 1] [i_3 - 1])))));
                    }
                    var_21 = (max((max(187, (arr_7 [i_2 + 1]))), (max((arr_7 [i_2 - 3]), (arr_7 [i_2 - 3])))));
                    arr_14 [i_2 - 3] [i_1] [i_0] = var_16;
                }
            }
        }
    }
    #pragma endscop
}

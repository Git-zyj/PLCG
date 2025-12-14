/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((44164 ? 112026660646760014 : 243));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [6] = 70368744177664;
        arr_3 [6] = var_1;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                {
                    arr_11 [i_2] [i_2] [i_3] = (((((arr_9 [i_3] [i_3 + 1] [i_3]) ? 211106232532992 : (arr_9 [i_3] [i_3 - 1] [3])))) ? (max(17873599106557975572, 4196507168923420804)) : (arr_5 [i_1] [i_3]));
                    var_13 = ((~(((max((arr_6 [i_2] [i_3]), 18446744073709551603)) * (var_0 & 20)))));
                }
            }
        }
        arr_12 [i_1] = ((~((((!17170591935692108602) < (min(127, 4202158728)))))));
        arr_13 [i_1] = ((((min((!var_7), var_8))) ? (2147483647 % 1) : ((var_3 * ((-(arr_9 [i_1] [i_1] [i_1])))))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_14 = ((573144967151576043 ? 65535 : 36979));
        arr_18 [i_4] = ((((((279223176896970752 / (arr_16 [i_4]))))) ? (!-11320) : (arr_17 [i_4] [i_4])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {

        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            var_15 ^= (17171480576 | 3210);
            arr_24 [i_5] [i_5] [i_5] = 70368744177643;
            arr_25 [i_6 - 3] [i_5] = ((17873599106557975560 ? 3605177369 : 247));
        }
        arr_26 [i_5] [9] = var_6;
        arr_27 [7] = (0 != 1);
    }
    #pragma endscop
}

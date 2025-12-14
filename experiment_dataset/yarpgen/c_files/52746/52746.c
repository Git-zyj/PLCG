/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = 7;
                    var_15 ^= ((-((((var_3 ? (arr_5 [i_1]) : (arr_3 [i_0]))) * (0 * 110)))));
                    var_16 &= ((((max(-7, (arr_5 [i_0])))) ? (((((arr_6 [i_0 - 2] [i_0 + 1] [i_0] [i_0 + 1]) > var_2)))) : ((123 ? (arr_5 [i_1]) : (arr_6 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1])))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_17 = var_4;
                        var_18 -= ((((((((4294967295 ? 65535 : 2934376807)) <= ((~(arr_0 [i_0] [i_0]))))))) ^ (((max(1360590485, (arr_3 [i_2]))) + (-2147483647 - 1)))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_11 [i_0 - 2] [i_0] [i_1] [i_2] [i_4] [i_2] = (((arr_9 [i_2] [i_2] [i_2] [i_2] [i_2]) || var_3));
                        arr_12 [i_2] = (min(206726865, var_13));
                        var_19 = (24 + -1672285720);
                    }
                }
            }
        }
    }
    var_20 = (min(((3698029118 ? ((87 ? -168521459402766343 : (-2147483647 - 1))) : var_7)), (2934376807 == 2835304381)));
    #pragma endscop
}

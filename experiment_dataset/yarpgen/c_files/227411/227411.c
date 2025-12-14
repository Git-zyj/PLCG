/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (((arr_2 [i_0] [i_0 - 1] [i_1]) ? (max(-1861942303214408714, ((((arr_2 [i_0] [i_0] [i_1]) ? 80 : (arr_0 [i_1])))))) : (((arr_2 [i_1] [i_1] [i_0 + 1]) ? ((((!(arr_0 [i_0]))))) : ((25866 ? (arr_2 [i_0 + 2] [i_0 + 2] [i_0]) : var_2))))));
                arr_4 [i_1] [i_0 + 1] = (min(((((((arr_2 [i_0] [i_0] [i_1]) ? (arr_3 [i_0]) : -1861942303214408714))) ? (~var_12) : (max(1861942303214408714, (arr_3 [i_0 - 2]))))), (arr_3 [i_0])));

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    arr_7 [i_2] = (((max((arr_6 [i_2] [i_0 + 1] [i_2]), (max((arr_3 [i_0]), -1861942303214408696)))) != (((((~-80) != ((-80 ? (arr_6 [i_2] [i_1] [i_2 - 1]) : 64))))))));
                    var_15 *= ((((-(max(var_0, 7845261206150533771))))) ? (((arr_0 [i_1]) ? ((-78 ? -2 : (arr_5 [i_0]))) : var_3)) : ((((arr_3 [1]) / 1))));
                    arr_8 [i_2] [13] = (((arr_0 [i_0]) ? (min(((min((arr_3 [i_2]), -84))), ((80 << (7002241303672499826 - 7002241303672499824))))) : (((((-84 ? var_0 : (arr_5 [i_2]))) != (64 >> 0))))));
                    var_16 &= ((~(((((-9223372036854775807 - 1) || (-9223372036854775807 - 1))) ? -9223372036854775807 : (((var_12 ? (arr_6 [i_0] [i_1] [i_2]) : var_8)))))));
                    arr_9 [i_2] [i_2] = 47;
                }
                for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_3 + 1] [2] [i_0] [i_0] = -64;
                    arr_13 [i_0] = (max((min(-3833427415798207456, ((0 ? 9223372036854775807 : (arr_5 [i_0]))))), (74 * 0)));
                    arr_14 [i_0] [i_0 + 2] [i_1] [i_3 + 1] &= (max((~-75), (((arr_10 [i_3]) % (arr_10 [i_0 - 1])))));
                    arr_15 [i_0] [i_1] [i_3] = var_7;
                    arr_16 [i_0] [i_1] [i_1] [i_1] = max((max((arr_1 [i_3 - 1]), (max(7, 9223372036854775784)))), (((((((-127 - 1) / 9223372036854775807))) && (((-(-127 - 1))))))));
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_0] [i_4] = (arr_19 [i_0 - 1] [i_4]);
                    arr_22 [i_4] [i_4 + 1] = ((((((arr_1 [i_0]) ? (arr_20 [i_4] [i_4]) : (arr_1 [i_0])))) ? (((arr_0 [i_1]) ? (arr_17 [i_0] [i_1] [i_0] [i_4]) : (arr_5 [i_4]))) : (((var_5 ? (-127 - 1) : -75)))));
                }
            }
        }
    }
    var_17 = var_6;
    #pragma endscop
}

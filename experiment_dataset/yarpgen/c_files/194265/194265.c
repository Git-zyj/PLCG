/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (max(var_20, -144115188075855871));
                var_21 = (min((arr_3 [i_0]), ((((arr_3 [i_1]) < -2040985119)))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_22 = (max(var_22, (arr_3 [i_2])));
        var_23 = (min(var_23, 16383));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_24 = (((var_6 >= (arr_5 [i_3]))));
            arr_13 [i_3 - 1] [i_3] [i_3] = (arr_10 [i_4] [i_4]);
            var_25 = (min(var_25, (arr_1 [i_4])));
            var_26 = (((~(-127 - 1))));
        }
        var_27 = (max(var_27, 153));
        var_28 = (min(var_28, (arr_0 [i_3] [i_3])));
        var_29 = (min(var_29, 32327));
        var_30 = (min(var_30, -29430));
    }
    for (int i_5 = 2; i_5 < 6;i_5 += 1) /* same iter space */
    {
        var_31 = (max(var_31, ((32761 ? (((-(min(4294967294, 50))))) : ((((max((arr_6 [i_5]), var_5))) ? ((1829357211 ? (arr_9 [2] [i_5]) : (-32767 - 1))) : ((min(1, -3767817112165080574)))))))));
        var_32 = (min(65340, ((0 ? -32761 : 16807))));
        var_33 = (max(var_33, (2787567788 && 28)));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 6;i_6 += 1) /* same iter space */
    {
        var_34 = (min(var_34, ((((1760978380 ? -299471124 : 3903381186))))));
        var_35 = (arr_9 [i_6 - 2] [i_6 + 3]);
        arr_18 [i_6] = ((((((arr_9 [i_6] [i_6]) & -29))) ? (arr_11 [i_6] [i_6 - 1]) : var_6));
        var_36 = (min(var_36, 6687220463079576440));
    }
    #pragma endscop
}

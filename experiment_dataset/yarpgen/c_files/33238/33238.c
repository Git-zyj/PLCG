/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_0 ? -10 : ((min(var_9, (!var_13))))));
    var_18 = 25010;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_19 -= ((((max(((19653 ? -25011 : 25007)), var_6))) && -25008));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_20 *= (!var_16);
                            arr_13 [i_0] [i_0] [i_2] [i_0] [i_4] = 1;
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            arr_16 [i_0] [i_5] = var_8;
                            var_21 = (((var_2 ? (arr_15 [i_3 - 2] [i_3 + 1] [i_3 - 2] [i_3] [i_3 + 1] [13] [1]) : (arr_15 [i_3 - 2] [i_3 - 1] [i_3] [9] [i_3 + 1] [i_3] [i_3]))));
                            arr_17 [i_5] [i_1] [i_1] [i_0] [i_5] [i_0] = 25007;
                        }
                        arr_18 [i_0 - 1] [i_1] [i_3] [i_3] [i_0] [i_0] |= (((((arr_11 [i_2] [i_0 - 1] [12] [i_3] [i_2]) / (arr_12 [16])))) ? (max(13037363769931398738, var_5)) : (((var_7 ? (arr_12 [i_0]) : (arr_6 [i_3] [i_0 + 2])))));
                        arr_19 [i_0] [i_3] [i_2] [20] |= (min((-25011 == var_0), 11403));

                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            arr_24 [i_0 - 1] [i_0] [i_2] [i_0] [i_0] = max((((-var_1 ? (((arr_7 [i_0] [i_2] [i_0]) ? var_1 : 25007)) : ((min((arr_15 [i_0] [10] [10] [i_2] [i_3 - 1] [i_3] [i_6 - 1]), var_10)))))), ((((min(var_9, (arr_4 [i_1] [i_2] [i_1])))) ? ((min(var_13, (arr_1 [i_0])))) : var_7)));
                            var_22 ^= (min(-255, (((((9272 ? (-32767 - 1) : 9261))) ? (var_3 && var_7) : ((min(-25008, -1)))))));
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_23 *= (((((((max(var_2, var_9))) ? (((arr_11 [i_0] [i_1 + 3] [i_2] [i_3] [8]) ? var_16 : var_6)) : var_3))) ? ((((min(var_6, -1))) ? (4907905854189920995 * 8429) : var_13)) : (+-25008)));
                            var_24 |= 59;
                            arr_28 [i_0] = ((~(arr_12 [i_1 + 3])));
                            var_25 &= 7;
                            var_26 = (arr_1 [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_27 = ((((((((var_15 ? var_11 : 25007))) ? ((30837 ? var_9 : var_12)) : (((231 ? -25007 : 1)))))) ? var_4 : ((((min(var_4, var_1))) ? var_11 : -25015))));
    #pragma endscop
}

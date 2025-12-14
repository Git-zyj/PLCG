/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((!((((var_2 && var_16) ? ((var_10 ? var_12 : -2)) : -var_6))))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_20 -= ((((max((((arr_3 [i_1] [i_0]) & (arr_4 [i_1]))), (arr_0 [i_1])))) ? ((~(((arr_6 [i_0] [i_0] [i_1]) ? (arr_1 [i_0] [i_1]) : (arr_4 [i_0]))))) : (((var_3 ? (arr_6 [7] [i_0] [i_0]) : (arr_5 [i_0] [i_1] [i_1]))))));
            var_21 = var_4;
            var_22 = (arr_4 [8]);
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_10 [i_2] [i_2] [i_2] = (max((arr_1 [i_2] [i_0]), ((((((arr_8 [i_2] [i_2]) ^ (arr_7 [i_2] [i_2] [i_0])))) ? ((((arr_4 [i_0]) ? (arr_9 [i_2]) : (arr_8 [i_2] [i_2])))) : (min(1, 10390913582585456393))))));
            var_23 |= (((arr_5 [i_2] [i_0] [i_0]) ? (((arr_3 [0] [0]) ? var_9 : (min(var_15, (arr_8 [1] [1]))))) : (max((arr_0 [i_0]), (10390913582585456402 ^ -3311307724106773885)))));
            var_24 = ((-8942714188274197269 ? 8055830491124095217 : 8942714188274197268));
        }

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_13 [i_3] = ((((arr_0 [i_3]) < (arr_4 [i_3]))) ? (arr_11 [i_0] [i_0]) : (min((arr_11 [i_0] [i_0]), (arr_4 [i_3]))));
            var_25 *= (~1);
        }
        arr_14 [i_0] = ((65527 ? ((16958123494889848663 & (((arr_11 [i_0] [i_0]) * (arr_3 [22] [i_0]))))) : (max((arr_3 [i_0] [18]), (((8055830491124095236 ? 8942714188274197268 : 1)))))));
    }
    var_26 = (((~(min(var_11, 5641982415396759142)))));
    var_27 = var_17;
    #pragma endscop
}

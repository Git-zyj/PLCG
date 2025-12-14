/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);
        arr_2 [i_0] [0] = ((!((((arr_1 [12] [i_0]) ? 3350507750 : 9223372036854775807)))));
        var_20 = ((-(arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_21 = ((((-(arr_4 [i_1] [3]))) | 7903413377952516705));
        arr_6 [i_1] = 5397;
        var_22 = (max(var_22, ((((-18 + 2147483647) << (3754325956 - 3754325956))))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_2 - 2] [1] [i_4] = ((60 ? 18446744073709551613 : (arr_5 [i_2 + 2])));
                        var_23 = ((~(!255)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_24 += (((((~(arr_15 [i_5])))) ? 5392 : 5397));
        arr_17 [4] [i_5] &= (~-6175934406291405284);
        var_25 = 2070780856;
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_26 = (min(var_26, (arr_21 [1])));
        var_27 = ((1 ? ((3520235095 ? 3982830451674219549 : -125)) : ((min((arr_18 [i_6]), 1264814473)))));
        var_28 = (min(var_28, (arr_19 [i_6])));
    }
    var_29 = (min(var_5, ((((min((-32767 - 1), 32767))) ? (((4 ? 536869888 : 2095509665))) : ((-20734 ? 1 : 2251795518717952))))));
    #pragma endscop
}

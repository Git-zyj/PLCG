/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_12 / var_7);

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_20 = (min(((!((min(9, 1))))), ((!((min(9218868437227405312, (arr_0 [i_0 - 2]))))))));
        arr_3 [i_0 - 2] |= (((((min((min((arr_2 [i_0]), 60401)), 5135)))) - (((60412 ? var_15 : (arr_1 [i_0]))))));
        arr_4 [i_0] [i_0] = ((((((4294967295 * 3476424265) | 818543044))) ? ((max(5139, (arr_2 [i_0 - 2])))) : 47075));
        arr_5 [i_0 + 1] = ((~(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_21 = ((!(9223372036854775807 / var_12)));

        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                arr_14 [i_1] [i_2] |= var_0;
                arr_15 [i_1] [i_1] [i_2] [16] = (((((arr_8 [i_2 + 1] [i_3 - 3]) ? 1 : 1)) == (((arr_9 [i_1] [i_1]) ? (arr_9 [i_1] [i_1]) : (arr_8 [i_1] [i_3 - 1])))));
                arr_16 [i_1] [i_2 - 1] [i_3 - 1] [i_3 + 1] = ((28 ? (((min(10213, var_13)) - 49)) : (arr_12 [i_3] [i_3 - 2] [i_3] [i_2 + 1])));
                arr_17 [i_1] [i_2] [i_3 - 1] = (min((arr_8 [i_3] [i_2]), ((~(~4194288)))));
                arr_18 [i_1] = (arr_9 [i_2] [i_3]);
            }
            var_22 = (arr_8 [i_1] [i_1]);
            var_23 = ((~((min(1, (-127 - 1))))));
        }
    }
    #pragma endscop
}

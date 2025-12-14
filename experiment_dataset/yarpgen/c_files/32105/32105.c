/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (max((arr_4 [i_1]), (min(var_13, (arr_4 [i_1])))));
                arr_7 [i_1] [i_1] [i_1] = (!6545083592950559069);
                var_18 = ((((((min(36, var_8))))) ? (((!(!-5502937728608354291)))) : (((!(arr_1 [i_1]))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        var_19 = ((var_4 ? (arr_5 [6]) : (arr_5 [0])));
        arr_10 [i_2] [i_2 - 1] = (~(arr_2 [i_2 - 1]));
        var_20 = 1209997875;
    }
    var_21 = ((((var_13 ? 934742993 : var_15))) | ((var_1 ? var_9 : -var_12)));

    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = (((((-var_16 ? (arr_12 [i_3]) : (arr_12 [i_3])))) ? (min(var_11, -1733625375)) : var_13));
        var_22 = (arr_12 [i_3]);
    }
    #pragma endscop
}

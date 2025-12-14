/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -22241;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (~27711);
        var_13 ^= 48367;
    }

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_14 = ((max(3647378999, 47525)));
        var_15 = var_9;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_16 = max(((((17168 > 8746986220298849571) != (arr_5 [1])))), (0 + 12908));
        arr_11 [8] = (max((arr_6 [i_2]), ((((((arr_4 [i_2]) ? 194 : (arr_8 [i_2])))) ? ((max((arr_6 [i_2]), var_7))) : (((arr_1 [i_2]) + (arr_10 [i_2] [i_2])))))));
        var_17 = ((-(arr_9 [i_2])));
    }

    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 7;i_4 += 1)
        {
            arr_16 [i_3] = (~17168);
            var_18 = (arr_14 [i_4] [i_3 - 2] [i_3 - 2]);
        }
        var_19 ^= (min(((52609 - (((var_4 == (arr_12 [i_3 - 1])))))), ((~((min(31373, (arr_13 [i_3]))))))));
        arr_17 [i_3] [1] = (((arr_6 [i_3]) ? ((((arr_13 [i_3]) || (((arr_13 [i_3]) && 2040180798))))) : (arr_13 [i_3 + 2])));
    }
    #pragma endscop
}

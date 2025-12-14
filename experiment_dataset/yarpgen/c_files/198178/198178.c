/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_3 [10] [3] = ((~(arr_2 [i_0 + 2])));
        arr_4 [i_0 - 1] = ((~(arr_0 [i_0] [i_0 - 3])));
        arr_5 [1] [i_0] = ((~(!64066)));

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            arr_8 [i_0 - 3] [i_1] [3] = ((~(arr_6 [i_0 + 2] [i_1])));
            var_18 = (((arr_7 [i_1 + 3]) || (arr_7 [i_1 + 1])));
        }
        arr_9 [i_0] = (arr_6 [i_0] [i_0]);
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        var_19 ^= (max(((+(min((arr_11 [3]), (arr_10 [9] [i_2]))))), (((!(((arr_11 [i_2]) != (arr_10 [i_2] [i_2]))))))));
        var_20 = min((arr_10 [i_2 + 1] [1]), ((((((arr_11 [i_2]) ^ (arr_10 [i_2 - 1] [i_2])))) ? (~var_8) : (max((arr_10 [i_2 - 1] [i_2]), (arr_11 [5]))))));
    }
    var_21 ^= (((max(0, 2784000248942990751)) < (min((~3268361520842612142), (~var_10)))));
    #pragma endscop
}

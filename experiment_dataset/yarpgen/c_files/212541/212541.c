/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_1 [i_0 + 1] [i_0 - 1]);
        arr_4 [i_0] [i_0 + 1] = (~(((!(arr_0 [i_0 - 2] [i_0 + 1])))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_19 ^= ((6513357709212389666 >> (((arr_1 [i_1] [19]) - 1100836587717068137))));
        arr_8 [5] [i_1 + 1] |= 12705;

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_11 [i_2] [i_2] [i_1] = arr_9 [4];
            var_20 = arr_1 [i_1 + 1] [i_2];
            arr_12 [i_1 + 1] [i_2] = (arr_1 [i_1 - 1] [i_2]);
        }
        arr_13 [i_1] = (((arr_5 [i_1 - 2]) ? (arr_5 [i_1 - 1]) : (arr_5 [i_1 + 1])));
    }
    var_21 = (max(var_21, ((((((max(var_0, var_1))) ? (!9516) : ((var_2 ? 1943108304 : var_17)))) & 35770))));
    #pragma endscop
}

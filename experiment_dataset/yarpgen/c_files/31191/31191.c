/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= 236;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    var_19 ^= ((10 ? var_10 : ((((((arr_4 [i_2] [i_1]) ? var_7 : (arr_3 [1])))) ? ((7 ? -1132587264 : 221)) : var_7))));
                    arr_9 [i_0] [i_1 - 1] [i_2] = (((arr_4 [i_0 - 1] [i_1 - 1]) ? ((((!(arr_4 [i_0 - 1] [i_1 - 1]))))) : ((-(arr_4 [i_0 + 1] [i_1 + 1])))));
                }
                var_20 = (((((max((arr_2 [i_0 + 1] [1]), var_16))) < (arr_6 [i_0 - 1] [i_1 - 1] [i_1 + 1]))));
                var_21 &= 2147483647;
                var_22 = ((((var_15 ? var_3 : var_10))));
                var_23 = ((arr_6 [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? (((min(17, 3575109431496268312)))) : (((var_16 == ((-19079 ^ (arr_4 [i_0] [0])))))));
            }
        }
    }
    var_24 = var_2;
    #pragma endscop
}

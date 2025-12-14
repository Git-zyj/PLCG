/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 6054307678432106039;
    var_20 = (max(var_20, var_8));

    for (int i_0 = 4; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_21 ^= (min((((!(arr_2 [i_0 - 2])))), (((arr_1 [i_0] [i_0 - 4]) ? ((~(arr_1 [i_0] [i_0]))) : (min((arr_2 [5]), (arr_1 [i_0] [i_0])))))));
        var_22 += (arr_2 [i_0 - 4]);
        arr_3 [i_0] [i_0] = 3009032909654272807;
    }
    for (int i_1 = 4; i_1 < 8;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = var_6;
        arr_9 [i_1] = (~(((arr_4 [i_1 - 3]) ? (max((arr_1 [i_1 + 1] [i_1]), 1775839230)) : -1775839223)));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            {
                var_23 = ((-(arr_13 [i_3] [i_3 - 2])));
                var_24 ^= ((~((~(arr_13 [5] [i_3 - 2])))));
                var_25 = (max(var_25, (((((((arr_17 [12]) << (((arr_15 [i_3 - 1]) - 213))))) ? (arr_15 [i_2]) : ((((min(var_16, (arr_11 [4])))) ? var_18 : ((((arr_16 [i_2] [i_2]) || (arr_13 [i_3 - 3] [i_2])))))))))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_0 [i_0 + 3]) ? (((~(arr_0 [i_0 + 1])))) : (((arr_0 [i_0 + 2]) | 102490520954984927))));
        arr_4 [i_0] [i_0] = max(((((((arr_2 [i_0]) ? 9007199254478848 : -8814332272574247054))) / (max((arr_2 [9]), -102490520954984953)))), 4163556363);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        arr_7 [i_1] = ((-102490520954984927 < ((((var_11 < (-127 - 1)))))));
        arr_8 [i_1] = ((!((((arr_5 [i_1 - 1]) ? 35191 : 108)))));
    }
    var_18 = (((min(65517, (var_9 & var_1))) | -102490520954984928));
    var_19 = (~var_5);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_20 = (((~1612480703880522311) ? ((((((arr_10 [4]) != var_2))))) : -102490520954984927));
                arr_13 [i_2] [i_3] [15] = ((215 + ((((min(-102490520954984939, var_3))) ? ((max(var_6, (arr_10 [i_2])))) : 1))));
            }
        }
    }
    #pragma endscop
}

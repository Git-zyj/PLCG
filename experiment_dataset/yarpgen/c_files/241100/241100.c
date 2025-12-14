/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_9 [i_0] [4] [i_2] [i_3] = (((((-var_1 ? (!2147483647) : (((var_2 == (arr_8 [i_3] [i_1] [i_0]))))))) ? ((var_7 ? (-29839 && var_10) : (min(var_12, 2446436391)))) : (((((((var_19 ? var_6 : 6750))) && (((arr_8 [i_0] [i_1] [i_0]) > var_9))))))));
                        arr_10 [i_0] [1] [i_1] [i_2] [i_3] |= (((((var_19 ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 1])))) || ((max(1848530904, (arr_8 [i_0] [i_1 + 1] [i_2]))))));
                        arr_11 [i_1] [i_0] = (arr_2 [i_0] [i_0] [i_2]);
                        arr_12 [i_0] = (((((arr_8 [i_1 + 2] [i_1 + 3] [i_1 + 3]) ? (arr_0 [i_2]) : (arr_1 [i_1 + 3]))) > ((((arr_8 [i_0] [i_1] [i_2]) == (arr_7 [i_0]))))));
                    }
                    arr_13 [i_0] [2] &= arr_8 [i_1 - 2] [i_1 - 2] [i_0];
                }
            }
        }
    }
    var_20 = (((min(((var_4 ? var_17 : 4294967295)), ((1848530904 ? var_12 : 2446436399)))) + 2446436388));
    var_21 = (max((1812564127 == 2446436392), var_8));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_5 >> (var_13 - 85622643276368809)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((8191 | (min((arr_2 [i_0 + 1] [i_1]), (max(var_10, 3130434661339218409))))));
                var_15 = (274169239 ? var_8 : (min((arr_3 [i_0] [i_0 - 1]), (7 == -7))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_16 = (((arr_6 [i_2] [i_2]) ? (max((arr_0 [i_2] [i_2]), (arr_6 [i_2] [i_3]))) : (max((arr_6 [i_2] [i_3]), var_1))));
                var_17 = 15316309412370333207;
                arr_9 [i_2] [i_3] = (min((arr_1 [i_2]), ((((arr_0 [i_2] [i_3]) > (arr_0 [i_3] [i_2]))))));
                var_18 &= (!2192922109);
            }
        }
    }
    #pragma endscop
}

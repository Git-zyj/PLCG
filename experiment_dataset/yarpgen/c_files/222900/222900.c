/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [8] &= 5108082858240496744;
                    var_14 = (max(var_14, (((!(((var_9 ^ (arr_1 [i_2 + 3])))))))));
                    var_15 += ((((-82 ? (arr_1 [i_0 + 2]) : var_1))) ? ((((((0 >= (arr_4 [i_0] [i_0]))) && (((var_6 ? 1 : -24444))))))) : (((arr_6 [i_0] [i_1] [i_0]) - (arr_0 [i_0] [i_0]))));
                }
            }
        }
    }
    var_16 = var_12;
    var_17 = var_13;
    var_18 = var_6;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                var_19 += ((((arr_13 [i_3] [12] [12]) > (!var_1))));
                arr_15 [i_3] = ((21033 ? -13276 : 16384));
            }
        }
    }
    #pragma endscop
}

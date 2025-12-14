/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 + 1] [20] [i_1] = ((((((((arr_6 [i_1 + 1] [i_1] [i_2 - 3] [i_1]) || (arr_2 [9] [i_2]))) ? (arr_2 [i_0] [i_1]) : (((arr_1 [i_2]) + (arr_2 [i_0] [i_0])))))) ? (((((arr_7 [5] [i_1] [i_2] [i_2]) <= (((arr_4 [i_0] [i_1] [3]) ? var_8 : (arr_4 [i_0] [8] [i_2 - 4]))))))) : (((((-(arr_6 [i_2] [i_2 - 2] [20] [i_0])))) ? ((-73 ? 4488453498279682604 : 253)) : (((arr_2 [i_2 - 4] [20]) ^ 47))))));
                    arr_9 [i_2] [i_1 - 1] [i_2] &= (((((min(3917059859, 0)) <= (arr_1 [i_1 + 1]))) ? var_9 : ((((((arr_1 [i_2 - 2]) ? (arr_3 [i_0] [i_1 + 1] [i_2]) : var_3))) ? 1760701269410230569 : ((var_6 % (arr_0 [i_0])))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (((arr_3 [i_0] [17] [i_0]) ? ((-(max(106, -1520137776)))) : (((49652 ? 127 : 237)))));
                    arr_11 [i_0] = ((18137 && ((max(51457, -4488453498279682604)))));
                }
            }
        }
    }
    var_17 = (((((var_13 ? var_14 : var_7))) <= var_5));
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            {
                arr_18 [i_4] = (max(((((((arr_7 [i_3] [i_3] [5] [i_3]) == (arr_6 [14] [i_4 - 1] [i_3] [i_4 + 2]))) ? (((-706850438348550974 + 9223372036854775807) >> (((-127 - 1) + 185)))) : (arr_1 [i_4 - 2])))), ((((max((arr_1 [i_3]), (arr_12 [i_3])))) + (min(var_7, 127))))));
                var_18 = (arr_3 [i_4] [i_3] [i_4]);
            }
        }
    }
    #pragma endscop
}

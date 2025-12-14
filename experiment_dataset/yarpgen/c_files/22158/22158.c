/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 ^= (max(var_11, (((((0 ? 1 : var_7))) ? (((1 ? 3402519821 : (arr_4 [i_0] [i_0])))) : var_2))));
                var_15 = ((var_5 % ((((max(0, 61942))) ? 7079576468947854988 : -var_12))));
                arr_5 [i_0] [i_1] [i_1] = var_11;
                var_16 = ((var_11 <= (8 == -103)));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_17 = (max(((((((arr_0 [i_2] [1]) ? -109 : (arr_3 [2] [2])))) ? -5686794015201378479 : 1)), (arr_2 [i_2] [i_2] [i_2])));
        var_18 = (((((((1 ? 1 : 0))) ? (15 != 16352) : ((var_7 ? 0 : -13978))))) ? (max(var_1, 17612)) : ((min((var_5 <= 1), ((var_9 ? (arr_3 [i_2] [i_2]) : -1340354146))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = (((max(var_4, -16250))) ^ (((arr_9 [i_3]) ? var_7 : var_11)));
        arr_14 [4] &= ((((((7 % (arr_3 [i_3] [i_3]))) << (45 - 37))) * (arr_0 [i_3] [i_3])));
        var_19 = (((((var_7 - ((var_5 ? (arr_2 [9] [i_3] [i_3]) : 16))))) == (max((arr_7 [i_3]), (264211764 - 1726525226)))));
    }
    #pragma endscop
}

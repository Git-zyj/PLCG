/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = (((!(arr_2 [i_1] [i_1]))) ? ((((arr_2 [i_1] [i_1]) && (arr_1 [i_1 - 1] [i_0])))) : ((var_1 ? 2115860442 : (arr_1 [i_1 - 1] [3]))));
                    var_13 ^= max((((-2147483647 - 1) ? (arr_4 [i_1 - 2] [i_1 - 2] [i_1 - 3]) : (arr_4 [i_1 - 3] [i_1 - 3] [i_1 - 3]))), ((-990130031 ? 2065839282 : 2110079340)));
                    arr_7 [i_1] = max((((arr_3 [i_1 - 1]) ? (arr_2 [i_1 - 1] [i_1]) : var_9)), (((~var_7) ? 1051337052 : 15728640)));
                }
            }
        }
    }
    var_14 = max((((-1 || -1051815391) ? ((var_5 ? -15728652 : var_5)) : (!15728625))), (max(var_4, 356332573)));
    var_15 = max(((((-15728668 && var_2) < (~var_4)))), (max(var_2, var_2)));
    #pragma endscop
}

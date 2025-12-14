/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 ^= (((((((((arr_1 [i_1] [i_1]) || (arr_5 [i_1] [i_2])))) * -46))) ? 45 : -46));
                    var_19 = (arr_6 [i_2 + 1] [i_2] [i_2 - 1] [i_1]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_16 [i_4] = ((var_3 ? (((((-57 ? (arr_9 [i_3] [i_3]) : (arr_2 [i_3])))) ? (((arr_3 [i_3] [i_3]) ? (arr_2 [5]) : (arr_5 [i_3] [i_3]))) : (arr_14 [i_5] [i_4] [i_5]))) : 2346540073));
                    arr_17 [i_3] [i_3] [i_4] [i_5] = 25;
                    var_20 = ((-(((!((((arr_9 [i_4] [6]) ? (arr_13 [i_5] [i_3] [i_4] [i_3]) : (arr_3 [i_4] [i_5])))))))));
                }
            }
        }
    }
    #pragma endscop
}

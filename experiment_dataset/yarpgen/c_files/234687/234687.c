/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = ((-(max(2080374784, var_12))));
                    var_16 -= 15947557073195964796;
                    arr_8 [i_2] [i_0] [i_0] |= (2080374785 + (0 % var_12));
                    arr_9 [i_0] [i_1] [i_1] = ((!(((0 ? 9 : 2080374784)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            {
                var_17 = (max((((((min(var_10, 1))) ? (((arr_10 [i_3]) ^ 59)) : (arr_11 [i_3 - 1])))), 3529568648));
                var_18 = (max(var_18, ((((((var_6 | 2499187000513586820) - (((max(194, 3130)))))) != (((~96945925) ? 4575657221408423936 : -1187504395597237243)))))));
            }
        }
    }
    #pragma endscop
}

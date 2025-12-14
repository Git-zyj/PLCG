/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    arr_11 [i_1 + 2] [i_2] [i_0 + 2] = ((-(((-var_11 + 2147483647) >> (((((-97 + 2147483647) << (18446744073709551615 - 18446744073709551615))) - 2147483519))))));
                    var_14 = ((var_6 ? (((1 ? 97 : (min(63, 1))))) : ((var_4 - (max(89517487, 0))))));
                }
            }
        }
    }
    var_15 = (+-63);
    #pragma endscop
}

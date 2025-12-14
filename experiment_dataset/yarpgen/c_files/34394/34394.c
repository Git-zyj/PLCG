/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = ((37679 << (1319105635 - 98)));
                    var_21 ^= (((((((-(arr_4 [8] [4]))) >= (~20)))) == -var_15));
                    var_22 += min(15878732196284637762, ((((-49 || (arr_6 [4] [i_1] [4]))))));
                    var_23 = (max(var_23, (((arr_1 [i_1]) == ((1 ? 3 : var_16))))));
                }
            }
        }
    }
    var_24 = (max(var_24, var_8));
    #pragma endscop
}

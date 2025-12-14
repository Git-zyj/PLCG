/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [7] [i_1] [i_0] = ((((31081 - ((var_0 >> (arr_3 [i_2] [i_1] [i_0]))))) > ((((((-(arr_0 [1]))) >= (var_7 & var_2)))))));
                    var_10 ^= (14694007769952997273 ^ 41);

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3] = (((((((arr_4 [i_2]) <= var_4)))) != (max((arr_6 [i_0]), (~var_8)))));
                        var_11 = var_7;
                        var_12 = var_5;
                        var_13 = 151;
                    }
                }
            }
        }
    }
    var_14 &= ((((-((var_5 >> (101 - 86))))) & 1));
    #pragma endscop
}

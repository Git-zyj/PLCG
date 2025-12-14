/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_12;
    var_14 = ((((-var_8 >> (var_10 + 89)))) || var_8);
    var_15 = 436323601;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (((((1 ? -2109713547 : 17586))) || ((((max(94, -3315691173126941729)) - 3315691173126941733)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_2] = min((arr_7 [i_2]), ((((arr_4 [i_3]) || (arr_4 [i_0])))));
                        var_17 = var_10;
                        var_18 = ((-((((var_5 || var_6) || (6258754671473802417 || 14))))));
                        var_19 -= var_10;
                    }
                }
            }
        }
    }
    #pragma endscop
}

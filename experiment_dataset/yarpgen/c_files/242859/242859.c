/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = (arr_2 [i_0] [i_2]);
                    var_13 = -3913640329995436070;
                    var_14 |= (((arr_5 [i_1] [i_0]) && (((2054118891864548114 & -2391065617844259019) || (((3913640329995436087 >> (((arr_2 [i_0] [i_0]) - 3604724052316979044)))))))));
                    var_15 ^= ((max((arr_7 [19] [i_0 - 1] [i_2 + 1]), (arr_7 [i_0] [13] [i_2 + 1]))) & (max(5726045189523137125, (arr_0 [i_0 - 2] [i_2 - 2]))));
                }
            }
        }
    }
    var_16 = (max(var_16, (8796025913344 > -7980492355285308945)));
    #pragma endscop
}

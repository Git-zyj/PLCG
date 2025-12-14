/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = ((((((var_7 > (arr_3 [i_1] [i_0]))))) < ((var_5 ? (16383 <= 16383) : -5464485800050000518))));
                var_15 ^= (var_0 & var_7);
                var_16 = (min(var_16, (((var_7 ? (arr_4 [1]) : (min(127, (arr_2 [2]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            {
                arr_12 [7] [i_3] [12] = var_11;
                arr_13 [i_3] = (arr_3 [i_2] [i_2]);
                var_17 = ((-(((arr_2 [i_2]) ? 939775285994150842 : (~var_8)))));
                var_18 += ((230 ? 2116 : 0));
            }
        }
    }
    var_19 = (min(0, 6434551094787088372));
    #pragma endscop
}

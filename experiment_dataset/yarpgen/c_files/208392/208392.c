/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((3072 != 56) - var_0)) % (((var_0 / var_8) ? var_2 : var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 -= (((((var_4 ? var_0 : -9223372036854775795))) ? (236 || 993713109970813371) : (var_1 || 9804)));
                arr_5 [i_0] [i_1] = (((((62463 ? 62464 : (arr_3 [i_0 + 1])))) % ((((12864484175171016383 ? 3 : -3774868987425964612)) * ((-1287790071 ? 60 : 18446744073709551597))))));
                arr_6 [i_0] [i_0] [12] = (((3059 >= (arr_4 [i_0 + 1] [i_0 + 1]))) ? ((((((-127 - 1) / 3065))) ? 62464 : (var_1 ^ 3043))) : (((((((arr_4 [i_0 + 1] [i_0 + 1]) % var_6)) >= 1)))));
                var_12 += (((((((((arr_0 [i_0] [i_0 + 1]) / (arr_2 [i_0] [i_1]))) != ((var_1 ^ (arr_4 [i_0] [i_1]))))))) - ((3094 - (arr_1 [8])))));
            }
        }
    }
    #pragma endscop
}

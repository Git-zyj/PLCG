/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 -= (((((-(min((arr_1 [i_2]), 18446744073709551615))))) && ((((26 << (((arr_1 [9]) - 903183394520546442))))))));
                    var_14 = (max((-2030066630 ^ 5962416625216655148), (((176 > -2030066630) ? (max(18446744073709551612, -2030066630)) : 18446744073709551615))));
                    arr_10 [i_0] [i_0] [i_0] [4] = var_7;
                }
            }
        }
    }
    var_15 = 10055354966523288452;
    #pragma endscop
}

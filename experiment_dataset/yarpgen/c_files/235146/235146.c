/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (((((0 | 299017634434226991) | (var_3 ^ var_3))) <= (((((var_1 > 4166858665019172892) || (var_6 && var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 ^= ((((((((arr_0 [i_0]) || 2)) && (6119467031608850522 && -78)))) % ((((((1 << (6119467031608850522 - 6119467031608850498)))) != (0 - var_4))))));
                var_18 |= ((((((var_7 && 393216) % (var_4 + var_4)))) != (((var_7 - -9223372036854775805) * (((arr_0 [i_0]) - (arr_0 [i_0])))))));
            }
        }
    }
    var_19 = (max(var_19, ((((((9544811252716829020 >= var_2) & ((16192 << (((var_0 + 11495) - 28)))))) / (((var_0 >= var_15) ^ (var_0 - var_15))))))));
    var_20 *= ((((((var_14 << (((var_7 + 3447) - 38)))) | ((13 >> (var_15 + 97))))) | (((-21 & var_11) << (((var_11 ^ 32763) - 8370022222938219694))))));
    #pragma endscop
}

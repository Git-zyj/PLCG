/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((var_15 || ((((((var_7 ? var_5 : 11090998065387918012))) ? var_3 : (var_1 / var_6))))));
    var_21 |= ((((((var_11 ? var_18 : var_16)))) ? var_13 : (max(var_15, var_7))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_22 ^= (34 ? 3594236792 : (((1 << (-32767 + 32793)))));
        arr_3 [i_0] [i_0] = (max((min((((-35 ? (arr_0 [0] [i_0 - 2]) : 15))), (2034979987212907579 | var_12))), (arr_2 [i_0])));
        arr_4 [i_0] = -11090998065387918012;
        var_23 *= ((((((arr_0 [i_0 + 2] [i_0 - 1]) ? (arr_0 [i_0] [8]) : (min((arr_2 [12]), -1670750020546395793))))) || ((((((1670750020546395793 ? 2050083732 : 7870640305667130028))) ? (((var_2 ? (arr_2 [6]) : (arr_2 [12])))) : (((arr_1 [1]) ? (arr_1 [14]) : (arr_2 [4]))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            {
                var_24 = (min(var_24, var_13));
                var_25 = (((((arr_2 [i_2]) ? (arr_5 [i_2]) : (178 & 140))) | (34 ^ -310430594)));
            }
        }
    }
    #pragma endscop
}

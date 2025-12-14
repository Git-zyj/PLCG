/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((min((max(var_9, var_1), var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] = (!1);
                var_11 += (--1);
            }
        }
    }

    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_12 += (((arr_10 [4] [4]) >> ((((~((~(arr_11 [6]))))) - 47))));
        var_13 = (((((253 ? ((((arr_9 [i_2]) + (arr_10 [i_2] [i_2 + 4])))) : (min((arr_10 [i_2] [7]), var_7))))) ? (arr_9 [i_2 + 2]) : (arr_9 [i_2 + 3])));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_14 = ((0 << (254 - 227)));
        var_15 = (max(var_15, (arr_12 [i_3] [i_3])));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_16 = ((!(arr_14 [i_4] [i_4])));
        var_17 ^= var_0;
        var_18 = (min(-32763, 254));
    }
    for (int i_5 = 3; i_5 < 21;i_5 += 1)
    {
        arr_21 [i_5] [i_5 + 1] = (min(-1, 1037008661));
        var_19 |= (max(((((16380 ? -1823031692380079251 : var_3)))), (arr_18 [i_5] [i_5])));
        arr_22 [i_5] = (max(((((var_2 << (65535 - 65524))) + (arr_17 [i_5 + 1]))), (((var_3 <= (arr_17 [i_5]))))));
    }
    #pragma endscop
}

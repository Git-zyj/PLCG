/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((2749273271 >= 0) >= (((var_12 + var_8) * (var_1 - 2628728365)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 += (((((0 % -19867) * ((((arr_5 [i_0] [i_1] [i_1] [i_2]) <= var_5))))) & ((((((var_12 + (arr_5 [18] [i_2] [18] [18])))) || ((((arr_3 [i_0] [i_1] [i_2]) & 9223372036854775781))))))));
                    arr_7 [i_0] [i_0] [i_2] = ((((((((arr_0 [i_1]) != var_0)) && (4058092923 / 1)))) <= (((((140450590 < (arr_3 [i_0] [i_0] [11])))) >> ((((arr_4 [1] [i_1 - 2] [i_2] [i_1]) != (arr_3 [i_0] [i_0] [i_2]))))))));
                    arr_8 [13] [i_1] [i_2 + 1] [i_1] = (((((var_0 && var_6) || ((var_2 && (arr_3 [i_0] [14] [14]))))) || (((var_12 || var_10) || (17 && -1353952250563876142)))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((((((var_2 & (arr_1 [i_0 - 1])))) + ((1905616006 << (2147483647 - 2147483644))))) | (((((var_12 >> (1976291996 - 1976291978))) + (var_18 && 209978471)))));
                }
            }
        }
    }
    #pragma endscop
}

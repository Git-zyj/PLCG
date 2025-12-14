/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((128 ? var_16 : (110 - 131)))) ? var_3 : var_12));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_18 = (((~(arr_0 [i_0]))));
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [1] [i_1] &= (arr_4 [i_0] [i_0] [i_0]);
            var_19 = var_2;
        }
        var_20 |= ((var_16 >> (arr_1 [2])));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] = ((((max((133 != 264949697), (arr_1 [14])))) ^ (((((((arr_1 [14]) ? -855418273 : (arr_4 [i_2] [i_2] [0]))) + 2147483647)) >> (-var_3 - 1122307658645653586)))));
        arr_11 [i_2] = (min(156, (((arr_9 [4] [i_2]) ? (arr_9 [i_2] [i_2]) : var_9))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_15 [0] = (max(10917070472340653454, (((264949697 ? 1 : 23342)))));
        var_21 *= (max(((((~(arr_9 [i_3] [1]))) ^ ((97 ? 133 : var_2)))), ((((-79 ? var_1 : 14089))))));
        arr_16 [8] = (((((arr_8 [i_3] [i_3]) <= (arr_8 [i_3] [16]))) ? 3569412217 : ((((arr_1 [4]) ? 1 : 78)))));
        var_22 = 0;
    }
    #pragma endscop
}

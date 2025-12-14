/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((((min(var_1, 23))) <= 27))), (min(var_2, (min(82, 2189371160979902859))))));
    var_11 = -var_1;
    var_12 = (min(var_1, var_4));

    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_13 = min((557859421 == -69), (min(var_5, (max(3346996423, 0)))));
        arr_2 [i_0 + 2] [14] = max(14234, (arr_1 [i_0]));
        arr_3 [8] [i_0 - 1] = min(((~(min(16376, 3092332897516639574)))), ((((arr_0 [i_0 - 1]) > (arr_0 [i_0 - 1])))));
        var_14 ^= (min(var_6, ((((1920 / -2215873614127536709) || (-8896221357979216867 > 1))))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_15 ^= (min((arr_7 [i_1 + 2]), (((arr_7 [i_1 - 1]) | (arr_7 [i_1 + 2])))));
        var_16 = ((!((((var_3 + 9223372036854775807) >> (((min(77, -1730482166)) + 1730482177)))))));
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_17 = ((~(min(34357641216, 1))));
        arr_10 [i_2] = ((!(((((1 >> (-5155877998660469081 + 5155877998660469100)))) || (arr_1 [i_2])))));
    }
    #pragma endscop
}

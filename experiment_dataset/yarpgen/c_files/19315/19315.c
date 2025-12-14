/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_5, var_10));
    var_20 = ((124 ? (((min(var_6, (var_2 >= var_4))))) : (((((var_0 ? 1 : var_17))) & 0))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_1] = ((~(arr_3 [i_0])));
                    arr_10 [i_0] [i_1] [i_0] [i_0] = 10;
                    arr_11 [i_1] = (i_1 % 2 == 0) ? ((min(((((((arr_8 [i_2] [i_1] [i_2]) + 2147483647)) >> (var_4 - 13001977813687587984)))), (((~32139) ? ((3211910991189145190 | (arr_1 [i_0]))) : (max(var_10, var_12))))))) : ((min(((((((((arr_8 [i_2] [i_1] [i_2]) - 2147483647)) + 2147483647)) >> (var_4 - 13001977813687587984)))), (((~32139) ? ((3211910991189145190 | (arr_1 [i_0]))) : (max(var_10, var_12)))))));
                    var_21 = (min(var_21, 0));
                }
            }
        }
        var_22 = (((((~(arr_8 [i_0] [i_0] [i_0])))) ? 18446744073709551615 : (min(2250700302057472, -1))));
        arr_12 [i_0] = (min((max(928631613750478214, (arr_0 [i_0]))), var_14));
    }
    var_23 -= 12642599448422230898;
    var_24 = (min(var_24, -1848031793));
    #pragma endscop
}

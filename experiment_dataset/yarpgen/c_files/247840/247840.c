/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_11 << (var_3 - 193)))) ? ((~((var_13 ? -688951647 : 34359738367)))) : var_13));
    var_17 = (((max(((max(9, 255))), 247)) << ((((var_7 ? 9 : var_0))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            var_18 = ((((var_2 ? -406906960861084611 : (((max((arr_3 [i_1]), var_15)))))) / ((((406906960861084606 || 406906960861084617) + var_12)))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_19 = (min(var_19, (arr_4 [i_0])));
                            var_20 = ((+((-34359738346 ? (arr_11 [i_1 - 1] [i_1 - 2] [i_1]) : (arr_11 [i_1 - 1] [i_1 + 1] [i_1])))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_21 = 406906960861084606;
            arr_17 [i_0] [i_5] = (arr_2 [i_0]);
        }
        arr_18 [i_0] [i_0] = ((((((((2147483637 >> (arr_10 [i_0] [i_0] [i_0])))) ? ((-406906960861084606 ? (arr_2 [i_0]) : var_15)) : (var_0 || var_6)))) ? (arr_2 [i_0]) : (((((var_3 ? -406906960861084607 : (arr_7 [i_0] [i_0] [i_0]))))))));
    }
    #pragma endscop
}

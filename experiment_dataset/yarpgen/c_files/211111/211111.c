/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (((arr_2 [i_0] [i_0]) % ((((arr_0 [i_0]) + (((!(arr_3 [i_0])))))))));
                var_18 = (min(var_18, (((((var_11 ? 4294967295 : (max((arr_3 [i_0]), -238821766067566587)))) >= (((max(var_5, (arr_4 [i_1] [i_0]))))))))));
                var_19 = (((arr_2 [i_1 + 1] [i_0]) ? ((min((arr_2 [i_0] [6]), 22202))) : (((arr_2 [i_0] [i_0]) - 238821766067566601))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((((!-74) % (max((-238821766067566587 - 238821766067566586), (arr_3 [i_2]))))))));
                            var_21 = var_14;
                            var_22 = (arr_5 [4] [i_1] [16] [i_0]);
                            var_23 = (max(var_23, ((((((~(((var_6 && (arr_6 [i_0] [i_1] [i_1 + 3] [i_2]))))))) ? (((((arr_6 [i_0] [i_1] [i_1] [i_0]) + (arr_5 [4] [2] [1] [i_1]))))) : (((2399041965 ? 238821766067566586 : 4088))))))));
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, (var_9 - var_4)));
    #pragma endscop
}

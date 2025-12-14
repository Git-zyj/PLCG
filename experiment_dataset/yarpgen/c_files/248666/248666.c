/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -7402040948375198727;
        var_12 = ((-((-1952380849 | (!0)))));
        var_13 = (min(((max(2128565698, (max((arr_1 [i_0 - 1] [i_0]), 1952380849))))), var_10));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            {
                var_14 ^= (max(((min((arr_3 [i_1 + 3] [i_2 + 3]), var_0))), ((~(min(var_2, 1952380849))))));
                var_15 |= ((!(((arr_5 [13] [i_1 + 2]) <= 1187))));

                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    arr_9 [i_2] [i_3] [i_2 + 1] [i_2] = (((64348 == 835917594) * (1505407910 < 3406538116)));
                    var_16 -= (((!var_4) ? (min(((((((arr_8 [i_2 - 3]) + 2147483647)) << (var_6 - 4251877928)))), (min(var_1, var_4)))) : (((((((32767 ? var_1 : 51928))) || ((min(var_4, 64348)))))))));
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_17 = (((((0 ? 1188 : 64349))) ? (1904403147 | -1952380850) : (arr_4 [15])));
                    var_18 = ((65535 ? 12165 : 76));
                    var_19 = (max(((1952380849 ? 0 : (arr_10 [i_1 + 3]))), 43614));
                }
            }
        }
    }
    #pragma endscop
}

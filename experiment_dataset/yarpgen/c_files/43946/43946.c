/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((((~(!59474)))) ? (var_13 != var_2) : var_0);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = (((max(15239713192151093557, ((3571957209 ? 3207030881558458058 : 15239713192151093539)))) | (((~(min((arr_5 [i_1 + 1]), 325140595)))))));
                    var_16 = ((((min(((((arr_2 [i_2]) && var_0))), var_1))) && 15239713192151093586));
                }
            }
        }
        var_17 = var_5;
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_18 = (arr_9 [i_3] [i_3]);

        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {

            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_19 = (arr_17 [i_5] [i_5 + 1] [i_5 + 2] [i_5 + 3]);
                    var_20 = (((((var_3 ? (arr_14 [i_3]) : 15239713192151093571))) ? (arr_9 [i_3] [i_3]) : var_8));
                }
                var_21 = -3969826680;
            }
            var_22 = (arr_12 [i_3]);
        }
        for (int i_7 = 3; i_7 < 17;i_7 += 1)
        {
            var_23 = var_4;
            var_24 = (~((8206 >> (var_9 - 1868498764))));
            var_25 = var_5;
        }
    }
    #pragma endscop
}

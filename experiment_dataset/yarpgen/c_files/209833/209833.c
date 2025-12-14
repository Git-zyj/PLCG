/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((((!((max(var_10, 18446744073709551615))))) && var_7)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_14 += var_10;
            arr_5 [i_0] [i_1] &= (((((min(18446744073709551608, 134217600)) <= (((((arr_3 [i_1]) && var_11)))))) && (arr_3 [i_1])));
            var_15 = ((var_5 ? (arr_3 [i_1 - 1]) : (arr_0 [i_1 + 4])));
            var_16 = ((var_10 ? (!18446744073709551615) : (arr_1 [i_0])));
        }
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_11 [i_3] [i_3] [i_3] [i_3] = (((min((arr_2 [i_3]), ((max((arr_4 [i_0] [i_2] [i_2]), (arr_8 [i_3] [i_3] [i_0]))))))) ? ((((arr_4 [i_2 + 2] [i_0] [i_3]) ? (arr_4 [i_2 - 1] [i_2 - 1] [i_0]) : (arr_8 [i_2 - 1] [i_2 - 1] [i_3])))) : (((((var_2 / (arr_7 [i_0])))) * ((var_9 ? var_5 : (arr_3 [i_2 + 1]))))));
                    var_17 = (max((!-1), var_3));
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 22;i_4 += 1)
    {
        var_18 = ((-1 + 2147483647) >> (arr_13 [i_4 - 2]));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                {
                    var_19 = (((~13009504753343630027) % ((((var_8 + 2147483647) << (((((arr_18 [i_4 - 2] [i_4 - 2] [i_6 + 2]) | 15)) - 15)))))));
                    arr_23 [i_4] [i_4] [i_5] [i_4] = (arr_19 [i_4] [i_5] [i_4] [i_4]);
                }
            }
        }
    }
    var_20 = ((min(var_2, 0)));
    var_21 = var_1;
    #pragma endscop
}

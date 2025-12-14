/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_6 <= 4915397556330875276);
    var_19 -= (((((-370842646209872130 ? 262080 : 2049053322821751568)))) ? var_16 : (max(((var_3 ? 8306961041524563920 : var_16)), var_1)));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_20 = (max(var_20, ((((-(arr_3 [i_0 - 1])))))));
        var_21 = (((arr_0 [4]) ? ((((((arr_2 [i_0 + 2]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (arr_2 [i_0]) : (arr_1 [i_0 + 2] [4]))) : ((((arr_1 [i_0] [i_0]) % 142)))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        var_22 = max((min((arr_10 [i_3 + 1] [i_3] [i_3 - 1] [i_3]), (arr_10 [i_3 - 1] [i_3 - 1] [i_3] [i_3]))), (arr_10 [i_3 - 1] [i_3] [i_3 - 1] [i_3 + 1]));
                        arr_12 [i_0 - 1] [i_1] [i_2] [i_0] [i_0 + 2] = ((!((((arr_7 [i_3 + 1] [i_1 + 1] [i_2] [i_3 + 1]) ? (arr_7 [i_3 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 2]) : (arr_5 [i_3 - 1] [i_1 + 1] [i_1]))))));
                        var_23 = (arr_2 [i_1]);
                        arr_13 [i_0 + 2] [i_0 + 2] [i_1 - 1] [i_3 - 1] = ((((((arr_9 [i_0 + 1]) ? (arr_9 [i_3 - 1]) : (arr_9 [i_0 - 1])))) && (arr_5 [i_2] [i_2] [i_2])));
                    }
                }
            }
        }

        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            arr_16 [i_4] [i_0 - 2] [i_4] = (((((arr_9 [i_0 + 1]) ? (max((arr_9 [i_0]), 370842646209872129)) : (arr_8 [8] [16] [i_4 + 2] [16])))) ? (((((arr_1 [i_0] [i_0 - 1]) / 370842646209872129)))) : (arr_7 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 + 1]));
            var_24 = (((((-(arr_2 [i_0 - 2])))) ? ((max((arr_2 [i_0 + 2]), (arr_2 [i_0 + 2])))) : ((-370842646209872130 ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 + 2])))));
            arr_17 [i_4] [i_4] = (((((0 - (min(370842646209872129, 14882))))) && (((~(arr_6 [i_0]))))));
            arr_18 [i_4] [i_4 + 2] = ((((max(65191, 9007199254732800))) ? (min((((arr_3 [i_4 + 1]) ^ (arr_14 [i_0 - 2] [i_4]))), 255)) : (arr_6 [i_0])));
        }
    }
    #pragma endscop
}

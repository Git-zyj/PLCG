/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(-102, 115));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_14 -= var_6;
            arr_5 [i_0] [4] [i_1] = (((arr_2 [i_0] [i_0]) == ((0 ? var_7 : -7))));
            arr_6 [i_1 - 1] [3] [i_0] = (((arr_4 [i_1 - 1] [i_1 - 1]) == (arr_4 [i_1 - 1] [i_1 - 1])));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    arr_13 [i_0] [6] [i_0] [i_0] |= (arr_4 [i_2] [i_3]);
                    arr_14 [i_2] [i_4] = (((arr_2 [i_3] [i_4]) & (arr_10 [i_3] [i_3] [i_3] [i_3])));
                }
                var_15 -= ((((((arr_10 [i_0] [i_2] [i_3] [i_3]) - (arr_11 [7] [i_2] [i_2])))) ? (arr_0 [i_0]) : (arr_3 [i_0] [i_2])));
            }
            arr_15 [i_2] = (min((max((min(var_11, 9758316607041124692)), (arr_1 [i_0]))), ((((arr_12 [i_0] [i_2]) > (arr_1 [i_0]))))));
            var_16 = (max(var_16, ((((((min(22369, 49600))))) == (((arr_0 [i_0]) ? (!var_4) : 2871962248))))));
        }
        for (int i_5 = 4; i_5 < 9;i_5 += 1)
        {
            arr_18 [1] |= (((((!(((1 ? (arr_8 [i_0]) : 126)))))) % 29));
            arr_19 [i_0] [i_0] = (((((!(arr_17 [i_0])))) << (118 - 106)));
            var_17 = (min(var_17, (((((arr_12 [6] [i_5 - 2]) << (((arr_12 [i_5 - 3] [i_0]) - 47953)))) <= (((!((!(arr_10 [i_0] [i_0] [i_5 - 4] [i_5 + 1]))))))))));
        }
        var_18 = (max(var_18, (0 / -14428)));
        var_19 = (min((((arr_4 [i_0] [i_0]) ? (((min((arr_9 [i_0] [i_0] [i_0]), (arr_1 [i_0]))))) : (arr_12 [i_0] [i_0]))), ((((~8592341889090605027) != (arr_4 [i_0] [i_0]))))));
    }
    #pragma endscop
}

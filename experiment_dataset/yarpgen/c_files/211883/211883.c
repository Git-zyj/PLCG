/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = (((13853783358135044158 >= 13853783358135044169) == ((((var_9 ? 9223372036854775807 : var_13)) << (var_13 - 7728626554079997680)))));
    var_16 = var_1;

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        var_17 = 32767;
                        arr_13 [i_0] [13] [i_2] [13] = (((arr_4 [i_3 + 1]) ? (min((arr_4 [i_3 + 1]), (arr_4 [i_3 + 1]))) : ((((!(arr_4 [i_3 + 2])))))));
                        arr_14 [i_0] = (((1 >= ((var_13 ? (arr_10 [i_0] [i_0] [i_0 - 3] [i_0] [i_0] [i_0]) : var_3)))));
                        var_18 = (arr_5 [i_0] [i_3 + 1]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                {
                    arr_21 [i_0] [i_4] [i_5 - 1] = ((4592960715574507446 ? 1 : -85));
                    var_19 = ((((max((arr_16 [i_0 + 1] [i_0 + 1]), (arr_16 [i_0 - 3] [i_0 - 1])))) + ((max((arr_16 [i_0 + 1] [i_0 - 1]), (arr_16 [i_0 - 3] [i_0 - 2]))))));
                }
            }
        }
        arr_22 [i_0] = (+(((((arr_10 [i_0] [i_0] [14] [i_0 + 1] [i_0] [i_0 - 3]) < var_10)) ? (arr_7 [i_0] [i_0] [4]) : 1)));
        arr_23 [i_0] [i_0] = (((arr_9 [i_0] [1]) ? 13853783358135044173 : (((var_4 ? (((arr_18 [12]) >> (var_9 - 23494))) : (arr_16 [i_0] [i_0 - 4]))))));
    }
    var_20 = var_11;
    #pragma endscop
}

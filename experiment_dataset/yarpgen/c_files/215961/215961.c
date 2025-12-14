/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 6144;
    var_19 = 3830652882185005793;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_20 -= ((!(((-(arr_3 [i_1 - 1] [i_2 - 1]))))));
                            arr_10 [i_0] [i_1] [i_2] [i_3 - 1] = (((arr_4 [i_3 - 1] [i_1 - 2] [i_2 + 1]) ? (((3830652882185005775 ^ 3830652882185005799) ? (max(18446744073709551615, 6853129598751826722)) : (arr_1 [i_3 - 2]))) : ((((!(arr_9 [i_0] [i_0] [10]))) ? var_1 : (((arr_9 [i_0] [i_1] [i_1]) ? (arr_5 [i_0] [2] [2]) : (arr_7 [0] [i_3 - 2])))))));
                            var_21 = (30464 >= ((((min((arr_4 [i_0] [6] [i_2 + 2]), (arr_2 [i_0] [i_1])))) ? (arr_8 [i_0] [i_0] [i_2] [i_2 + 2] [i_2] [i_3]) : 18446744073709551615)));
                        }
                    }
                }
                arr_11 [i_0] [i_0] [i_1 + 1] = (max((((((max(240, var_15))) > (18446744073709551609 - 18446744073709551615)))), ((((23 ? (arr_7 [i_0] [i_1 + 1]) : 7)) % (arr_5 [i_1 + 1] [i_1 + 1] [4])))));
            }
        }
    }
    var_22 ^= (((((min(var_2, var_12)) != (var_2 || var_1))) ? (var_1 % -9) : var_10));
    var_23 = ((-(((var_12 != 10) ? -var_5 : 3830652882185005762))));
    #pragma endscop
}

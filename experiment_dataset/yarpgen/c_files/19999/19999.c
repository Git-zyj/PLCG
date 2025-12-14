/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_11 ^= (max((((!(var_3 < 10391)))), (max((((!(arr_3 [i_1])))), (max(30040, (arr_0 [i_1])))))));

                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    var_12 = (((((!((((arr_4 [i_1] [i_1] [i_2]) ? 3121676029 : var_10))))))) / (((var_6 ? 1 : var_5))));
                    var_13 *= ((!((min(var_7, (arr_3 [i_0]))))));
                    arr_6 [i_0] [i_1] [i_2] = ((!(arr_1 [i_1])));
                    arr_7 [i_1] = (+-8177681693676096464);
                }
            }
        }
    }
    var_14 = ((+(((4540 || var_4) ? var_8 : ((-4540 ? var_10 : var_4))))));
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                {
                    arr_15 [i_3] [5] [i_3] = (((arr_10 [i_3]) ? (((~((~(arr_14 [i_3] [i_4 - 3] [11])))))) : ((max(-4517, 33)))));
                    var_15 = (((((arr_10 [i_3 + 2]) ? ((1 ? (arr_11 [i_3 - 2]) : var_1)) : (((8890 >> (((arr_11 [12]) - 11898033085562955735))))))) == var_4));
                }
            }
        }
    }
    var_16 = ((((max(((var_6 ? 0 : 200)), -4541))) || var_0));
    #pragma endscop
}

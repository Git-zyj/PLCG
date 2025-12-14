/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [6] |= ((-((((((arr_4 [i_0 + 1]) ? -8342764681392699348 : 6387340804932953886)) != (arr_1 [i_0 - 1] [i_1 + 1]))))));
                arr_6 [i_0] [i_0] [i_1] = ((~(min((2017612633061982208 % 14), (arr_1 [i_0] [i_1 + 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] = ((-4964294508041990066 ? (max(((74 ? 12390328763753085855 : 4964294508041990055)), 576460752303423456)) : ((6316655194006507981 ? 42565 : 3343489521061315983))));
                            arr_12 [i_0] [i_1] = (((((((-4187043641845844690 / (arr_3 [i_0] [i_0] [i_0]))) + -6084512166985426231))) ^ (max((((9223372036854775791 ? var_10 : var_15))), ((13482449565667561534 ? 3343489521061315997 : 15220))))));
                            var_16 = 15330905884314198521;
                        }
                    }
                }
                arr_13 [i_0] [i_0] = (min((((!((max(1834111106, 7)))))), (arr_1 [i_0] [i_1])));
            }
        }
    }
    var_17 = var_11;
    var_18 = (!var_12);
    #pragma endscop
}

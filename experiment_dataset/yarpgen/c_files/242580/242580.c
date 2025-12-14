/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = arr_2 [i_0 - 1] [14];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = ((~var_3) ? ((-1 ? 0 : 2168406273982282162)) : ((((((-4630050796761163675 + 9223372036854775807) << (((-4630050796761163675 + 4630050796761163683) - 8)))) % -var_4))));
                    var_16 = var_3;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_17 = ((!(-9223372036854775807 - 1)));
                    arr_19 [i_3] [2] [1] [i_3] = ((((((arr_17 [3] [3]) ? (arr_11 [i_3 + 3]) : -23706))) <= (min(4630050796761163675, 9223372036854775807))));
                }
            }
        }
    }
    var_18 = (((max(((-4630050796761163668 ? 18446744073709551612 : 4047000629)), (((-4630050796761163658 ? var_9 : 13120))))) ^ 74));
    var_19 = var_10;
    #pragma endscop
}

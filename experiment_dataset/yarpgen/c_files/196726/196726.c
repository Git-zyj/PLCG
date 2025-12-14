/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((1 + var_12) + (17 - var_0)))) == (((var_14 ^ 227) ^ (1 | 18446744073709551588)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((((((((arr_8 [i_1] [i_1]) <= 213))) ^ (var_12 >= var_10))) < ((((var_0 <= var_3) >= (var_10 >= var_7)))))))));
                    var_17 = ((((((-7078159947937049366 && var_14) && (((arr_8 [i_0 + 1] [i_0 + 1]) || (arr_4 [i_0] [i_1] [i_2])))))) == ((((((arr_5 [8]) - var_2)) <= (((((arr_1 [2] [7]) > 726587965833444675)))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                {
                    var_18 = (min(var_18, (((((((((arr_11 [i_3] [i_3]) != var_2))) > (var_2 * 8191)))) > (((((((arr_14 [i_3]) >> (8485 - 8481)))) < (726587965833444675 ^ 138276392))))))));
                    var_19 *= ((((((17 && 4156690903) <= (((var_2 > (arr_9 [2]))))))) ^ ((((8485 != var_13) < ((((arr_13 [i_3] [i_3] [i_5]) == var_4))))))));
                    arr_19 [i_3] [i_3] [i_5] [i_3] = (((((-726587965833444651 - var_9) <= ((((arr_17 [1] [i_4] [i_5]) ^ (arr_15 [i_3] [i_4 - 1] [i_4 - 1] [i_5])))))) && (((213 ^ 57058) && (var_5 > 726587965833444650)))));
                }
            }
        }
    }
    #pragma endscop
}

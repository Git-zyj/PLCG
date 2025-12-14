/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~(7104431038300770355 != var_10));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((581056315 >> (((max(1, (max(131, 581056337)))) - 581056329))));
        var_13 = ((((((max(33427, var_0))) && 163)) ? (min((11323 * -112), ((min((arr_1 [i_0]), var_0))))) : (arr_2 [1] [i_0])));
        arr_4 [i_0] = 60586;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_15 [i_0] [i_3] |= ((((((min(var_7, var_11))) ? (((arr_10 [i_0] [i_1] [22]) ? 1 : (arr_7 [i_1] [i_3]))) : (arr_2 [i_0] [i_1]))) | (min((((arr_13 [i_1] [i_3]) - 581056337)), (((1 <= (arr_14 [i_0] [16] [i_0] [i_1] [i_2] [i_3]))))))));
                        var_14 &= ((4084193576435659592 ? 581056315 : 581056339));
                        var_15 = (((((max(1152921504606846975, 969646912244867356)) / ((1 ? -5382464754751487975 : 54196)))) - 2));
                    }
                }
            }
        }
        var_16 = ((var_11 >> ((247 >> (1401547601 - 1401547589)))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_17 = (min(var_17, ((((((arr_13 [i_4] [i_4]) ? (arr_13 [i_4] [i_4]) : (arr_13 [i_4] [i_4])))) ? (((!(arr_13 [i_4] [i_4])))) : (((arr_13 [i_4] [i_4]) << (arr_13 [i_4] [i_4])))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    var_18 = (min((arr_9 [i_4] [i_6] [i_4] [7]), (((!(arr_13 [i_4] [i_6]))))));
                    var_19 = (min(var_19, ((((((((max(1, (arr_23 [12] [0]))))) <= var_2)) ? (581056315 / 244) : -4984117973691180084)))));
                    arr_24 [i_5] [1] [1] [2] = (((((arr_6 [i_4]) >= var_9)) ? (min(((-2 ? var_11 : var_4)), (arr_7 [i_4] [i_6]))) : (((arr_7 [i_4] [i_5]) ? (arr_7 [i_6] [i_6]) : -1718959582))));
                }
            }
        }
    }
    #pragma endscop
}

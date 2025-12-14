/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((min((min(var_2, var_7)), ((max(var_6, var_7))))), var_8));
    var_12 += var_5;

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (max((max((min((arr_1 [i_2]), (arr_3 [i_0] [i_0]))), (min(2194728288256, 2194728288262)))), var_6));
                    var_14 = ((((min((8685830987292693813 % 56), (arr_5 [i_0] [i_2])))) == (((max(-23233, 2194728288262)) ^ -var_1))));
                }
            }
        }
        var_15 = (max(((-3007 ? 18446741878981263359 : 219)), (arr_0 [i_0])));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_16 -= ((-(((((min((arr_5 [7] [i_3]), (arr_5 [2] [i_3]))))) / (max(var_5, (arr_4 [i_3] [i_3])))))));
        var_17 *= var_10;
        var_18 *= ((-37990146251953680 ? var_9 : (arr_7 [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    arr_16 [i_4] [i_5] [i_5] [3] = ((~(arr_7 [i_4])));
                    var_19 = (max(var_19, (~var_9)));
                    var_20 = ((-2078738756 >= (arr_15 [i_4] [i_5] [i_6])));
                    arr_17 [1] = (!(arr_8 [i_4]));
                    var_21 = var_3;
                }
            }
        }
        var_22 += (((arr_11 [i_4]) * ((-8685830987292693813 ? 8447 : 18446741878981263364))));
        var_23 = (arr_2 [i_4] [i_4]);
        var_24 = (((~(arr_5 [i_4] [i_4]))));
    }

    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
    {
        arr_21 [i_7] = ((((min((arr_18 [i_7]), (arr_19 [i_7] [i_7])))) && ((max(-var_1, (arr_18 [i_7]))))));
        var_25 += (min((max((arr_19 [i_7] [i_7]), (((var_8 && (arr_20 [i_7] [i_7])))))), ((-((var_6 ? (arr_20 [i_7] [i_7]) : var_2))))));
        var_26 = (min(var_26, var_5));
        arr_22 [4] = ((!((min((arr_18 [i_7]), (!127))))));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        var_27 = (min(var_27, ((max((+-22189), ((8150967464469703126 ? -18446741878981263388 : (((min(0, 22207)))))))))));
        var_28 = ((max((min(-8465, 12880095491382587573), (((var_5 != (arr_18 [1]))))))));
        arr_25 [i_8] [i_8] = (-8685830987292693813 != 695197699);
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
    {
        arr_30 [i_9] [i_9] = max(-1, (min((min(var_2, (arr_27 [i_9] [8]))), (~var_3))));
        arr_31 [i_9] [i_9] = ((~(((min((arr_27 [i_9] [i_9]), (arr_19 [7] [i_9]))) & (arr_19 [i_9] [i_9])))));
    }
    #pragma endscop
}

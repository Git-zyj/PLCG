/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((min(((min(var_2, 55))), (max(var_8, var_9)))));
    var_13 = ((var_9 ? 150 : (min(((min(201, 3831))), 8948317831666673115))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = 207;
                arr_5 [i_1] = ((((min(-var_4, 255))) ? (((((arr_3 [i_1]) && (((-139001358 ? (arr_3 [i_0]) : (arr_4 [i_1])))))))) : (min(var_6, 201))));
                var_15 = (arr_3 [i_0]);
            }
        }
    }

    for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_16 = (max((-2147483647 - 1), 1468));
        arr_10 [i_2] = (max((arr_6 [i_2]), (((((var_10 ? var_11 : (arr_9 [17] [i_2 + 1])))) / (((arr_6 [i_2 + 1]) ? var_6 : -1020221455))))));
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_17 = (max(var_17, (((arr_6 [i_3]) ? 60 : ((+(((arr_11 [i_3] [i_3]) >> (((arr_13 [i_3] [i_3]) - 4628017059709800131))))))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                {
                    arr_20 [i_3] [i_4] [i_3] = ((min((min(var_1, 3929879465236345764)), (((var_2 && (arr_13 [14] [i_4])))))));
                    var_18 = -23;
                    var_19 = (min(var_19, (-4850585828594768437 ^ -2806865876959648068)));
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    {
                        arr_29 [i_3] [i_6] [i_7] [i_6] [i_8] [3] = (arr_12 [i_3]);
                        arr_30 [i_3] [i_6] [i_3] [i_8] = 60;
                    }
                }
            }
            var_20 *= ((-((63 ? 203 : 241))));
        }
    }
    var_21 = ((((min(((1591173315 ? var_9 : var_10)), (((3152863492 ? 2941751471 : var_5)))))) ? (var_11 && var_10) : var_7));
    #pragma endscop
}

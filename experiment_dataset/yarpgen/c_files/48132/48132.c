/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 &= (((max(0, var_13)) >= (max(((((arr_0 [i_0] [i_0]) >= (arr_2 [i_0] [i_0])))), (max(var_0, (arr_1 [2] [i_0])))))));
        arr_3 [i_0] = ((!(var_11 && 127)));
        var_15 = ((!((min(-4964817588862197999, 1)))));
        arr_4 [i_0] = (min((arr_2 [i_0] [i_0]), ((-18 ? -3798738246580953817 : -4964817588862197999))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_9 [i_1] |= (((arr_8 [i_1]) ^ (arr_8 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_16 [i_1] [i_1] [i_1] [3] = (((((min((arr_7 [i_3]), (((!(arr_13 [i_1] [i_2] [i_2] [i_1])))))))) | (min(((var_2 ? (arr_2 [i_2] [i_2 - 1]) : (arr_13 [i_1] [i_1] [i_3] [i_1]))), (arr_5 [i_1])))));
                    var_16 &= ((((+(((arr_7 [i_1]) & var_10)))) ^ ((((1 + (arr_1 [i_3] [i_3]))) ^ var_8))));

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        var_17 = arr_7 [i_1];
                        var_18 = ((var_6 & (arr_7 [i_4 - 1])));
                    }
                }
            }
        }
    }
    var_19 = (max(var_4, -1721445204));
    #pragma endscop
}

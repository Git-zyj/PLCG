/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (max(1, -80344002));
                    var_16 = (!2);
                    arr_7 [i_1] |= 16711;
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        arr_11 [i_3] = ((33209 ? 80344011 : 4080));
        var_17 |= ((((arr_9 [i_3 + 2]) != (min((arr_9 [i_3]), (arr_9 [i_3]))))));
        arr_12 [i_3 + 2] [i_3] = ((((min((arr_8 [i_3 + 2] [i_3 + 1]), ((204 + (arr_8 [i_3] [i_3 + 2])))))) ^ (((((-768363333 ? (-127 - 1) : 4205603640))) ? 1 : 16761691136874200013))));
        arr_13 [i_3] = (((-(arr_8 [i_3 + 2] [i_3 - 1]))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_18 = ((((arr_14 [i_4]) || 2285)) ? 1443766791 : (((arr_14 [i_4]) * (arr_14 [i_4]))));
        arr_16 [i_4] [i_4] = 131;
        var_19 = ((-(arr_14 [i_4])));
        arr_17 [3] = (((arr_15 [i_4]) != (arr_15 [i_4])));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 19;i_8 += 1)
                {
                    {
                        arr_31 [i_5] [i_5] [i_5] [i_8] [i_5] = 63250;
                        arr_32 [i_5] [i_5] [i_5] [i_5] [i_8] = 32326;
                    }
                }
            }
        }
        var_20 = (max(var_20, (((((((-9223372036854775807 - 1) ? 32748 : (((arr_18 [i_5]) ^ 4205603633))))) < ((min(1685052936835351603, 153))))))));
        arr_33 [0] = ((+(((arr_22 [i_5] [i_5] [i_5]) ? 3 : 0))));
        arr_34 [i_5] = (((-127 - 1) | ((~(((arr_20 [2]) - 107))))));
    }
    #pragma endscop
}

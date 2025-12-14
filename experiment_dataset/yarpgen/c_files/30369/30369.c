/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = ((13691593208101933975 ? 384 : 6353285835960196641));
                    arr_7 [12] [i_0] [i_2] = (((((arr_2 [i_1 - 1] [i_2 - 2]) ? 1581653078 : (arr_3 [i_0] [i_0]))) != (((~(arr_2 [i_1 - 1] [i_2 - 2]))))));
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_10 [i_3] [4] = (arr_9 [i_3 - 1] [14]);
        arr_11 [i_3] [i_3 - 1] |= (max((arr_8 [i_3]), ((1581653088 - (arr_9 [i_3] [i_3 - 3])))));
    }
    for (int i_4 = 3; i_4 < 15;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
        {
            arr_18 [i_5] = (min((((!(!248)))), 1581653078));
            arr_19 [i_5] [i_5] [i_4 - 2] = -1581653080;
            var_13 ^= ((-1581653080 <= ((((max(1581653074, -32767)) == -192)))));
            arr_20 [i_4] = (((~(min(63, 1581653078)))));
            var_14 = (((((((14721990720668872352 && -941420194) != 43)))) <= (((arr_8 [i_4 - 1]) ? (arr_8 [i_4 - 2]) : var_9))));
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            var_15 = ((-1448835297 ? 1581653067 : -9015));
            var_16 = var_7;
            arr_23 [i_4] [i_4] [i_6] = var_1;
            var_17 = (max(((((!var_0) ? ((27 ? (arr_12 [2]) : (arr_8 [i_4 - 3]))) : (min(var_10, (arr_17 [i_4] [i_4] [i_4])))))), (((arr_21 [i_4 - 1] [i_4 + 1]) ? (arr_22 [i_4 - 1] [i_4 - 2] [i_4 - 1]) : 46731))));
        }
        var_18 = (min(var_18, 3724753353040679264));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = ((((~var_16) ? ((var_18 + (arr_2 [i_0]))) : 1195137303)));
        arr_4 [i_0] [i_0] = (max((((((0 ? 6135 : (arr_1 [i_0]))) % 127))), ((~(max(3099829993, 2097151))))));
        arr_5 [i_0] = ((((var_9 ? 19 : 8419475237649150735)) < (((((arr_2 [i_0]) && (arr_1 [i_0])))))));
    }
    var_20 = (min(var_20, 9));
    var_21 = 1135124184;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            {
                var_22 |= ((~(((-(arr_8 [i_1] [i_1]))))));
                arr_10 [i_1] [i_2] [i_2] = ((+((max((arr_2 [i_2]), (arr_2 [i_2]))))));
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        var_23 = (min(var_23, ((((15739 + var_13) ? (arr_11 [i_3]) : (~126))))));
        arr_13 [15] [15] = ((+((2260823292 ? (arr_11 [i_3]) : -126))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_17 [i_4] = 117;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    arr_22 [i_4] = (~((var_19 ? -48 : (arr_11 [15]))));
                    arr_23 [i_4] [i_4] [i_4] [i_4] = -118;
                    var_24 = 4294967272;
                    arr_24 [i_4] [i_4] [i_4] = (-22350 & 261817141);
                }
            }
        }
    }
    #pragma endscop
}

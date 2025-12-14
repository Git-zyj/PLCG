/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_15 = 18794;
            arr_6 [i_1] = (arr_0 [13] [10]);
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] = (!30);
            var_16 |= ((max((18446744073709551615 > var_7), (arr_3 [i_2] [i_0]))));
            arr_10 [13] [i_2] = ((((max(var_2, var_6))) ? 11024 : (max(-32759, ((((arr_5 [i_2]) || var_8)))))));
            arr_11 [i_0] [i_0] [i_2] = ((-((~(arr_0 [i_0] [i_2])))));
        }

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_17 = (min(var_17, (((var_1 ? 4294967266 : ((((max((arr_12 [i_0] [i_0] [i_3]), var_8))) ? var_13 : 1688629917)))))));
            var_18 -= 1;
            arr_14 [i_3] &= ((((!(arr_8 [i_0] [i_3] [i_3]))) ? (arr_12 [i_3] [i_0] [i_0]) : (min((arr_8 [i_0] [i_3] [12]), 4294967262))));
            arr_15 [i_3] [i_0] = ((((min(((1 ? (arr_12 [i_0] [i_0] [i_3]) : (arr_5 [i_3]))), (((arr_12 [i_3] [i_3] [i_0]) * 4294967295))))) < (max((arr_5 [i_3]), (min(9, var_13))))));
        }
        var_19 = var_11;
        var_20 = 3281933169;
    }
    var_21 = (var_14 - var_5);
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_25 [i_4] [i_6] = ((((max(((var_14 ? 4294967295 : 1554902141923043994)), ((((arr_18 [i_6]) < -7641883743489315357)))))) ? (((9063629524405043106 ? (arr_24 [i_4 - 1]) : (arr_24 [i_4 - 2])))) : ((var_10 ? (min(3381927497, var_5)) : var_10))));
                    var_22 &= ((-5795634271952976578 ? 3381927490 : 2));
                }
            }
        }
    }
    #pragma endscop
}

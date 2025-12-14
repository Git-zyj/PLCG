/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_3));
    var_17 = (var_10 >> var_9);
    var_18 = ((var_15 ? (max(var_8, -var_6)) : ((((var_14 ? var_7 : 568272833))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 *= (max((((((arr_1 [i_0] [i_0]) ? var_8 : (arr_0 [i_0] [i_0]))))), 7965734153333145504));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = ((((min((arr_6 [i_0] [i_1]), var_13))) ? (arr_3 [i_0] [i_1] [i_2]) : (arr_6 [i_1] [i_1])));
                    arr_8 [i_0] [i_1] [i_2] = ((~(((arr_3 [i_0] [i_0] [i_0]) ? -62 : (arr_3 [i_0] [i_1] [i_2])))));
                    var_21 = (min(var_21, (((((((max(var_9, -62))))) - (min(-var_3, (arr_3 [i_0] [i_1] [i_2]))))))));
                }
            }
        }
        var_22 = (max(var_22, var_13));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] |= (max((((!(arr_10 [i_3] [i_3])))), ((((((arr_9 [i_3]) ? (arr_9 [i_3]) : var_15))) ? 3916380460570681108 : var_10))));
        arr_12 [11] [i_3] = (max(((min((((!(arr_9 [i_3])))), (arr_9 [i_3])))), (((arr_10 [i_3] [i_3]) ? (((((arr_9 [i_3]) != var_1)))) : (var_15 - 134217727)))));
        var_23 = (max(((-(arr_10 [i_3] [i_3]))), (max((((arr_9 [i_3]) ? (arr_10 [i_3] [i_3]) : (arr_9 [i_3]))), ((min(var_5, var_12)))))));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_24 = ((((min((min(3726694480, var_6)), ((var_6 | (arr_10 [i_4] [i_4])))))) ? var_3 : (arr_13 [i_4])));
        var_25 = (max(var_25, (arr_13 [i_4])));
        arr_15 [i_4] = ((((min(-98, (arr_9 [i_4])))) ? (((arr_14 [11]) ? (arr_14 [i_4]) : (arr_14 [i_4]))) : (arr_9 [i_4])));
        var_26 = 62;
        var_27 = ((((~(arr_10 [i_4] [i_4])))));
    }
    #pragma endscop
}

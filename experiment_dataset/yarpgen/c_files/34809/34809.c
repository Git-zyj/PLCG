/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 = (max((((-26098 ? -var_8 : (-26081 < -462)))), var_5));
    var_13 = ((var_9 ? ((((!(~5628465337939981049))))) : (((!var_3) ? ((var_6 ? var_2 : var_9)) : 26076))));
    var_14 = (((((min(var_4, var_10))))) < var_6);

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = var_9;
        var_15 = ((var_10 ? var_0 : (((-462 > var_9) ? (min(var_5, var_6)) : (((min(var_2, -26081))))))));

        for (int i_1 = 3; i_1 < 7;i_1 += 1) /* same iter space */
        {
            var_16 = ((((max(var_3, (arr_0 [6])))) + var_1));
            var_17 = ((((max((arr_5 [i_0] [i_0]), (((26080 ? var_7 : (arr_1 [i_0] [i_1 - 3]))))))) ? (arr_5 [1] [6]) : (((arr_3 [i_1] [i_1 + 2]) ? var_1 : var_1))));
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 7;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_2 - 1] = (arr_0 [i_2]);
            arr_9 [i_0] = 23276;
        }
        for (int i_3 = 3; i_3 < 7;i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] |= (arr_11 [i_3] [4] [i_3 + 2]);
            var_18 = (arr_0 [i_3]);
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 7;i_4 += 1) /* same iter space */
        {
            var_19 = (max(var_19, 11136088008948319025));
            arr_18 [i_4] = (-26072 ? 26090 : 26071);
        }
        var_20 = ((-87 ? (((((min(var_2, (arr_17 [i_0] [i_0])))) / var_4))) : var_6));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = ((var_5 || (arr_3 [i_5] [i_5])));
        var_21 -= ((((((((arr_11 [5] [9] [i_5]) ? var_2 : var_3))) ? (arr_0 [i_5]) : ((-8179789276878454228 ? var_5 : (arr_0 [4]))))) != ((((((6028388288439105636 ? var_0 : (arr_10 [i_5])))) ? var_3 : ((var_6 ? var_2 : 18678)))))));
        arr_23 [i_5] = var_6;
    }
    for (int i_6 = 2; i_6 < 16;i_6 += 1)
    {
        var_22 = arr_25 [i_6] [i_6];
        var_23 = (max(var_23, (((((((arr_24 [11]) ? var_5 : (max(var_3, 3639550012989269370))))) ? ((((min(var_8, 1111153561623377828))) ? var_9 : var_7)) : (((-1111153561623377811 ? (arr_26 [i_6] [i_6 + 2]) : (((arr_24 [i_6]) ^ var_3))))))))));
        var_24 ^= ((-123 ? (arr_24 [i_6]) : (arr_25 [8] [i_6])));
    }
    #pragma endscop
}

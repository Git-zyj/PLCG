/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-((min((9223372036854775807 || 102), (!4485959365044014503))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    var_16 = (((arr_2 [i_0 - 1]) + var_6));
                    arr_9 [i_2] [i_1 - 4] [i_0] = (((((-108 ? 11 : -12806))) ? (((arr_3 [i_2 - 1]) ? (arr_3 [i_2 + 1]) : (arr_7 [i_1 - 2]))) : 31694));
                    var_17 = 16492674416640;
                    arr_10 [i_2 - 1] [i_1 + 1] [i_0 + 1] &= (((954424929 - 1) ? var_0 : ((((954424912 ? var_7 : var_14)) >> ((((-954424912 ? (arr_2 [i_1]) : (arr_8 [i_1 + 2] [i_0]))) - 23184))))));
                    var_18 += ((954424929 * ((((1 ? -954424925 : (arr_1 [i_0]))) / -954424920))));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_19 &= ((~((((((arr_3 [i_3]) & -954424919))) ? ((min(var_8, (arr_13 [i_1] [i_1])))) : (min(38430, var_1))))));
                    var_20 += (((((14037997033277647601 <= (3155793732505083316 >= var_10)))) * 21486));
                    var_21 = (max(var_21, ((((((((-954424930 ? (arr_12 [i_0] [i_0]) : (arr_4 [i_0] [1] [i_0])))) ? (((((arr_3 [i_1]) == 954424925)))) : (max(13335186454440459012, (arr_6 [i_3] [12]))))) == (arr_7 [i_3]))))));
                    arr_14 [i_3] = ((((max(var_0, (arr_0 [i_1 - 1] [i_0 - 1])))) / (((arr_0 [i_1 + 1] [i_1 - 4]) ? (arr_0 [i_1 - 2] [i_1 + 1]) : (arr_0 [i_1 + 2] [8])))));
                }
                var_22 = ((((min((arr_12 [i_0 + 1] [i_0 + 2]), (arr_0 [i_1 - 4] [i_0 + 1])))) * ((-1556969094 ? 0 : 32))));
                arr_15 [13] [13] = ((var_8 <= (max((max(var_4, var_9)), (13357 < -954424914)))));
            }
        }
    }
    #pragma endscop
}

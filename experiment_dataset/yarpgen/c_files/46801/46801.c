/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!141057479);
    var_13 ^= ((~((((min(var_5, var_4))) ? var_0 : (var_7 + var_2)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_14 = ((var_0 ? (141057465 && 17796862465885411194) : ((1338170265 ? (arr_3 [7] [i_0]) : 1338170265))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_15 = 7583;
                            var_16 = (((arr_13 [i_0 - 3] [9] [i_0 - 1] [i_0] [i_0 - 3] [i_0 + 1] [i_0]) < var_11));
                        }
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            var_17 = ((((!(arr_14 [i_0] [i_0 + 1] [i_0] [4]))) ? (!-534839284) : ((-1387669640 ? (arr_12 [i_5]) : 0))));
                            var_18 = ((((((arr_2 [i_5]) && var_7))) < (11732270625139553168 >= -6)));
                        }
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((1779169282 ? 17257177349324127135 : (16322187497910215393 + 2956797030)));
                        var_19 ^= (arr_17 [i_0]);
                    }
                }
            }
        }
    }
    for (int i_6 = 3; i_6 < 16;i_6 += 1)
    {
        var_20 |= (8481569956132958307 || 1338170265);
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        arr_27 [i_6] [i_6 - 1] [i_6] [i_6] = (var_0 - (((10983360165467872810 - 653973266) ? (arr_19 [i_6]) : -16492414678379984516)));
                        var_21 = (!var_10);
                        arr_28 [i_6] [i_6] [i_6 + 1] [i_6] [i_6] = (((((((4294967295 ? 1995881600 : (arr_25 [i_6] [i_6] [i_6 + 2] [i_6] [i_6] [i_6])))) ? (var_2 >= 8005694557950468628) : (arr_24 [i_6])))) && ((((max(var_2, var_5)) + (((max((arr_24 [i_6]), 1))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

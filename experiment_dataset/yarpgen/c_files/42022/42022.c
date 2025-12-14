/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (1920492673351735141 - (min(18446744073709551615, -12161581710858480317)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    var_15 = ((max(((6285162362851071299 ? 6285162362851071299 : 18446744073709551614)), ((((arr_1 [i_1]) && 6989718254648577468))))) ^ (min((arr_1 [i_0]), ((-(arr_4 [i_0] [i_1] [i_2]))))));
                    arr_6 [i_0] [i_1] = (((arr_4 [i_2] [i_2 - 2] [i_2 - 4]) ? (arr_3 [i_0]) : 15));
                    arr_7 [i_0] [i_1] [i_2] = min((max((max(0, 14328401013676202408)), (~6285162362851071299))), var_0);
                }
                for (int i_3 = 4; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    var_16 = ((!(arr_10 [i_3 - 4])));
                    arr_11 [19] [i_1] [i_1] [i_1] = (((max(((6285162362851071299 ? var_5 : (arr_10 [i_3 - 2]))), (arr_4 [i_3 - 3] [17] [i_3 - 4])))) ? (min((~821225195515414025), var_13)) : (((~959587471395107203) ? (((((arr_2 [i_1]) && 12456182443937439308)))) : (max(var_5, 3310566123900544727)))));
                    var_17 = (~(min((~var_8), (~12456182443937439331))));
                    arr_12 [i_0] [i_1] [i_1] [i_1] = ((((18446744073709551593 ? (min((arr_9 [i_0] [i_1] [i_1] [i_3 - 4]), (arr_9 [i_0] [i_0] [i_0] [i_0]))) : (max((arr_3 [i_0]), var_1))))) ? var_4 : ((((min(var_6, (arr_2 [16])))) ? ((~(arr_4 [i_0] [i_1] [i_3 - 3]))) : var_0)));
                }
                arr_13 [i_0] = arr_4 [i_0] [i_0] [i_0];
                var_18 = (var_11 ? (min(var_5, (arr_3 [i_0]))) : (max((arr_3 [i_0]), (arr_3 [i_0]))));
                arr_14 [i_0] [i_1] = 18446744073709551615;
            }
        }
    }
    #pragma endscop
}

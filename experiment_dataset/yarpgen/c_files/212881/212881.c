/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_16 -= ((-(((((var_2 ? var_14 : var_4))) ? (max(var_1, var_1)) : (!var_14)))));
            var_17 = (max(var_17, ((((((var_7 ? -3015804098363166459 : -9223372036854775784))) ? ((((~-3015804098363166481) ? (-2147483647 - 1) : 3015804098363166458))) : (((arr_5 [i_0] [i_1 - 1]) ? ((2097151 ? var_3 : -2737108198068982031)) : 3015804098363166468)))))));
            arr_7 [i_1] [i_0] [i_0] = var_7;
        }
        arr_8 [i_0] = var_15;
        arr_9 [i_0] = var_5;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                {
                    arr_16 [i_0] [i_0] [i_3] [i_0] = (!646830027);
                    var_18 = (((((((var_13 ? var_14 : var_13))) ? ((var_13 ? var_5 : var_2)) : ((var_15 ? var_5 : (arr_14 [i_0] [i_2] [i_3]))))) <= ((((arr_2 [i_3 + 2]) != var_15)))));
                    var_19 = (((((~((~(arr_12 [i_0] [i_3])))))) ? (min(var_1, (arr_6 [i_3 - 1] [i_2 + 3] [i_0]))) : (((((-173668041 ? var_0 : (-2147483647 - 1)))) ? (~-2456943605896587439) : ((13029269765509059676 ? 41381 : -3015804098363166477))))));
                    arr_17 [i_0] [i_3] [i_3] [i_2] = ((((var_12 ? var_12 : ((var_6 + (arr_12 [i_0] [i_0])))))) ? (arr_3 [i_3]) : (((((!(arr_4 [i_0])))) | var_13)));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_22 [i_4] = (!-9044026284487825942);
        var_20 *= (arr_21 [i_4]);
    }
    var_21 = max((min(var_15, var_10)), ((((((var_2 / var_8) + 2147483647)) << (((var_1 | var_8) - 1095719918))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((!var_10) > var_11)) ? ((max(((var_9 ? var_4 : var_0)), (!var_0)))) : var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_1] [i_2] [i_1] [3] = (((arr_4 [i_0] [i_2]) ? (((-((~(arr_10 [i_4] [4])))))) : (((~14347) ? ((min(2271033205602691761, var_4))) : (((arr_6 [i_2] [2] [i_1] [2]) ? var_11 : var_12))))));
                                var_14 = (((((var_8 ? 6823623449465590249 : (((11623120624243961366 ? (arr_6 [14] [i_1] [i_1] [i_1 - 1]) : -2271033205602691762)))))) && ((11623120624243961363 > ((min((arr_1 [i_0]), var_3)))))));
                                var_15 = (min((max((arr_6 [15] [i_1] [i_1] [i_1]), (((!(arr_10 [9] [i_1])))))), ((((var_11 ? 1 : (arr_9 [i_2] [i_2] [i_1]))) + (!-1)))));
                                var_16 = (min(((min((min(var_5, 1)), var_10))), 6892956056561992645));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_17 &= 11623120624243961366;
                        var_18 = (min((((((((-2271033205602691760 + 9223372036854775807) << (7927470514141798675 - 7927470514141798675)))) ? (!-27147) : (~var_0)))), ((~(((arr_3 [i_1]) & 6823623449465590249))))));
                        var_19 = 7520;
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_20 ^= ((-55 ? var_6 : 0));
                        var_21 = 7927470514141798675;
                        var_22 |= (((((max(((max(1, 1))), (min(var_6, var_4)))))) > (min(((0 ? var_10 : (arr_12 [i_6] [16] [i_1] [i_6] [i_6]))), ((var_9 << (var_10 - 3860604433)))))));
                        var_23 = ((((max((-32767 - 1), ((65535 ? var_9 : var_2))))) ? ((((max(0, 1)) < var_2))) : (max(var_2, (min(121, (arr_10 [6] [i_6])))))));
                    }
                    arr_19 [i_1] [i_1] = (max((arr_18 [i_1 + 3] [i_1] [i_2] [i_1 - 1] [16]), ((((min(11623120624243961366, 1612313186))) ? (var_11 != var_1) : (min(var_1, var_11))))));
                    var_24 ^= (((!(arr_4 [i_1] [i_1 - 1]))));
                }
            }
        }
    }
    #pragma endscop
}

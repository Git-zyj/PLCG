/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max(((max(var_11, 0))), var_1))) ? var_1 : var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        var_13 = ((!(arr_0 [i_1 + 2])));
                        arr_11 [i_0] [2] [i_0] [i_1] [i_1] = 9705611346355879150;
                    }
                    for (int i_4 = 2; i_4 < 8;i_4 += 1)
                    {
                        var_14 = (max(var_14, var_2));
                        arr_16 [i_2] [i_1] [i_2] [i_1] [1] = (((((arr_8 [i_4 - 1] [i_2 - 1] [i_1 - 1]) ? -1 : (arr_8 [i_4 + 1] [i_2 - 2] [i_1 + 2]))) >= (arr_2 [i_0] [i_0])));
                        var_15 = ((1 ? -53380109 : ((-53380109 ? (((arr_7 [i_0] [i_0] [i_2] [i_1]) << (-30791 + 30809))) : 698735816))));
                        var_16 ^= (((((arr_6 [i_2 - 2]) ? (arr_6 [i_2 - 1]) : (arr_6 [i_2 - 1]))) << (((arr_6 [i_2 - 1]) - 496705887))));
                        var_17 ^= arr_4 [i_4];
                    }
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        var_18 = ((((((arr_7 [i_0] [i_0] [i_0] [i_1]) ? (arr_7 [i_0] [i_0] [i_0] [i_1]) : (arr_6 [i_1 + 2])))) ? ((((arr_13 [i_0] [i_0] [i_0] [i_5] [i_5 + 1]) ? (arr_13 [i_0] [i_1] [i_2] [i_2 - 2] [i_5]) : var_5))) : (((arr_7 [i_0] [i_0] [5] [i_1]) << (var_7 + 45)))));
                        arr_19 [i_0] [i_0] [i_2] [i_0] [i_0] &= ((var_10 << (-30791 - -1)));
                        var_19 = ((var_4 << (var_7 + 24)));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 7;i_7 += 1)
                        {
                            {
                                var_20 |= ((var_2 ? var_2 : (((((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0]) ? (arr_10 [i_7]) : (arr_6 [i_2])))) >= (min(var_0, var_10)))))));
                                var_21 ^= (~((min(46, 9807))));
                                var_22 = ((((((max(var_9, (arr_5 [i_7] [i_6] [i_2] [i_0])))) >= ((min(var_6, var_2))))) ? ((13807380706680700686 << (144 - 122))) : (arr_0 [i_0])));
                            }
                        }
                    }
                    arr_24 [i_2] [i_1] [i_0] = (arr_13 [i_0] [i_1] [i_0] [i_0] [i_0]);
                    arr_25 [i_0] [i_1] [i_1] = var_7;
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_8));
    var_16 = ((109952016 ? 1320267246972656225 : 1998624609));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 &= ((((-((((arr_7 [14] [i_1] [i_1]) || var_10)))))) ? var_7 : (((((94 >> (((arr_5 [7] [i_1] [i_2]) - 225))))) ? (~1) : ((-7048775533784889422 ? 1 : 1)))));
                    arr_9 [7] [1] [i_2 + 2] = ((var_2 & ((~((~(arr_7 [9] [i_1] [i_2 - 1])))))));
                    var_18 = (((min((!var_11), ((var_1 ? var_1 : 1))))) ? (min((arr_7 [i_2 + 1] [i_2 + 2] [i_2 - 1]), var_2)) : ((((arr_7 [i_0] [1] [i_2 - 1]) ? var_4 : (arr_8 [i_0] [i_1] [i_2 - 1])))));
                    var_19 += var_1;
                    var_20 = (((((-var_3 ? (var_11 * 0) : -1320267246972656225))) ? ((((arr_6 [i_2 + 1]) || (arr_6 [i_2 + 2])))) : 1));
                }
            }
        }
        var_21 = (((arr_3 [16] [i_0]) ? (((((max(1, var_3))) == (((arr_6 [i_0]) * (arr_8 [1] [14] [14])))))) : ((max((arr_3 [i_0] [i_0]), (var_11 <= 2888437187))))));
    }
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_22 = (((((~((min((arr_4 [i_5]), var_12)))))) ? ((((((var_4 ? (arr_14 [i_3 + 2] [10] [i_5] [i_3]) : var_11)) == var_2)))) : (arr_7 [i_3] [i_3 - 1] [i_4])));
                    var_23 = ((-(((2756139497 || 3744657504) ? var_7 : (min((arr_15 [i_5] [i_4 + 1] [0] [5]), 179604420))))));
                }
            }
        }
    }
    #pragma endscop
}

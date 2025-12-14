/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_16 = (((!21569) ? (arr_2 [i_0]) : 21569));
        var_17 = var_2;
        var_18 = (arr_2 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] = (min((arr_0 [i_2]), (((var_9 % var_15) ? var_14 : ((16611321272479470040 ^ (arr_7 [i_0] [i_1] [i_2])))))));
                    var_19 *= (((arr_8 [i_0] [1]) && (arr_7 [i_2] [i_1] [i_0])));
                    arr_10 [i_2] = (min((!-2071001165977304115), (arr_4 [i_1 + 2] [i_0 - 1])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                {
                    arr_17 [i_0] [i_3] = ((var_3 ? (((-(((arr_7 [i_4 + 1] [i_3] [i_0]) ? var_4 : 3803861378))))) : ((2550041054 ? 10195 : (min(-2071001165977304115, 1835422801230081589))))));
                    var_20 &= (((((+((2071001165977304129 ? (arr_15 [i_4] [9]) : (arr_3 [i_0] [i_3])))))) == (((arr_4 [i_0 - 2] [i_0 + 1]) ? 8456589990030875091 : 48))));
                }
            }
        }
    }
    var_21 = (var_6 ? var_14 : var_11);

    for (int i_5 = 2; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_22 *= (((((-2071001165977304115 ? 1 : 21537))) != (arr_11 [i_5] [i_5])));
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_27 [i_5] [i_6 - 4] [i_7] = var_15;
                    arr_28 [i_7] = -2071001165977304135;
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 15;i_8 += 1) /* same iter space */
    {
        var_23 -= ((-97 ? -2071001165977304115 : 1));
        var_24 = (((!var_8) != ((var_10 ? var_9 : (arr_24 [i_8 + 2] [1] [1] [i_8])))));
        var_25 = (((arr_4 [i_8] [i_8]) & ((-(arr_16 [i_8] [i_8] [i_8])))));
    }
    var_26 = 1835422801230081576;
    #pragma endscop
}

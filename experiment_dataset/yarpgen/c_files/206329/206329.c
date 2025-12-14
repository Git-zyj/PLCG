/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_1] = (min((arr_2 [i_0]), var_9));
                arr_8 [i_1] [i_0] [10] = (((((((max(var_7, (arr_6 [i_1])))) ? var_7 : (min(8791798054912, 0))))) ? ((234 ? 8791798054894 : 2)) : (((~((var_4 ? var_8 : var_0)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            {
                arr_16 [i_3] = ((var_8 ? (((var_6 <= (((!(arr_9 [i_2]))))))) : (((32242 < ((1753877566 ? (-9223372036854775807 - 1) : 46)))))));
                arr_17 [i_3] = (18446744073709551603 || ((min((arr_15 [i_3] [i_3 - 1] [i_3 - 1]), (var_5 || var_1)))));
                var_13 = ((!(((var_5 ? ((0 ? 3256319197 : 176)) : (arr_14 [i_3]))))));
                var_14 = (min(var_14, ((max((((var_8 + 9223372036854775807) >> (min(var_1, var_11)))), var_5)))));
                var_15 = -2189245150510257518;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            {
                arr_24 [i_5] [i_5 - 1] = (arr_5 [15] [i_5 - 1]);
                arr_25 [i_5] = ((((((((-(arr_9 [i_5])))) ? var_9 : (arr_0 [i_4])))) ? (!var_6) : var_8));
                var_16 = 0;
            }
        }
    }
    #pragma endscop
}

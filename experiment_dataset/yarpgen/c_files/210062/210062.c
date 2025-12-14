/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_2] [i_2] [i_0] = ((6506410593406376707 ? 31549 : 31556));
                            var_11 = -23106;
                        }
                    }
                }
                var_12 *= ((-5100760288437883897 >> ((((-(max(var_4, 14473)))) + 14504))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_13 = ((((!(arr_17 [i_5 - 1] [i_5 + 1] [i_5 - 1])))));
                    var_14 += (+-1101970106);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    var_15 = var_7;
                    var_16 = (min(var_16, ((max(((-13345983785271667686 ? 3822792898467542983 : (arr_13 [i_7] [i_8] [i_9]))), ((((((13345983785271667718 ? 220 : var_3))) ? (((arr_15 [i_8]) ^ (arr_14 [i_7]))) : (arr_15 [i_9])))))))));
                }
            }
        }
    }
    var_17 = ((var_4 ^ (min(((var_3 ? var_3 : 17930158455829351930)), (((var_3 ? var_4 : var_3)))))));
    #pragma endscop
}

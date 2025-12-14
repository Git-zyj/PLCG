/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [1] [7] [i_1] = 17627044864956850313;
                var_15 += var_11;

                for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_16 |= min((((92 ? var_14 : var_10))), ((min((arr_2 [i_0] [1] [i_0]), ((((arr_6 [i_0] [i_0] [i_2] [8]) == 8634069783889157886)))))));
                    var_17 = (min(var_17, (((((max(((var_5 ? 0 : var_9)), (arr_0 [i_0])))) ? (((((var_7 ? (arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 2] [9]) : var_10))) ? (min(var_12, 1)) : (((27001 ? var_11 : var_11))))) : (arr_7 [0] [i_1] [i_2]))))));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    var_18 += ((((((((1 ? -103 : var_1))) ? (min(var_6, 17627044864956850313)) : (((var_6 ? var_10 : var_7)))))) ? (arr_9 [6] [6] [i_3]) : (max(var_2, var_7))));
                    arr_11 [i_3] [i_1] [i_3] [i_3] = ((var_3 <= ((-(arr_8 [i_0 - 1] [1] [i_1] [9])))));
                    arr_12 [i_1] [i_1] = (min(var_3, (arr_0 [i_3])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 9;i_6 += 1)
            {
                {
                    arr_19 [i_4] [i_4] [1] = -32761;
                    var_19 = var_12;
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_20 = (arr_21 [i_4] [i_4] [i_4] [i_4] [i_4]);
                                var_21 = 40671;
                            }
                        }
                    }
                    var_22 += (min(-1259595390, var_13));
                }
            }
        }
    }
    var_23 |= (~var_7);
    #pragma endscop
}

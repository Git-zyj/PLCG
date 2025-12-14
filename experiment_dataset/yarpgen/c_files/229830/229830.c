/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [i_0] [11] [i_0] = 56;
                                arr_13 [i_1] [i_1] [i_3 + 1] [i_3] [i_4 - 2] = (((((((-68 + 2147483647) << (((-57 + 73) - 16)))))) ? 231 : (((2147483647 ? 53832 : -66)))));
                                var_17 = min(2274335494, -32749);
                                var_18 = (max(var_18, (((~(((((~(arr_4 [i_0] [i_1] [i_3])))) ? ((2147483647 ? 1 : 5114616154894010179)) : 18446744073709551615)))))));
                            }
                        }
                    }
                    var_19 += (arr_2 [i_0] [i_0] [0]);
                    var_20 = ((5114616154894010179 ? ((var_6 ? (((arr_1 [i_1]) + 19386)) : 46149)) : 32732));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_25 [i_6] [i_6] [i_9] = ((32749 ? ((-32749 ? 64054 : 2147221504)) : 16614));
                                arr_26 [i_5] [i_5] = (min(-32749, 2020631790));
                                var_21 = 255;
                            }
                        }
                    }
                    var_22 = (885241823 < 63);
                    var_23 ^= 192;
                }
            }
        }
    }
    var_24 = ((var_9 ? 77 : 1327077293));
    #pragma endscop
}

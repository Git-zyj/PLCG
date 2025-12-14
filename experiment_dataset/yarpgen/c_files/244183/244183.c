/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] = (min(((max(var_7, -108))), (((!15670001224187344670) ? (((arr_5 [i_1 + 1] [i_1 + 1] [i_4]) | 2776742849522206947)) : (var_11 + var_12)))));
                                var_17 ^= (max(65524, (arr_6 [i_0 + 1] [i_1] [i_2 + 2] [i_4])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_18 *= ((((var_2 ? var_12 : (arr_0 [i_6]))) * (min((arr_0 [i_2]), (arr_0 [i_2])))));
                                var_19 = (!((!((min(0, 2524341992))))));
                                var_20 = (arr_5 [i_6] [i_5] [i_0]);
                                var_21 = (((-(14400132705083239524 && 3705630732))));
                                arr_20 [i_0] = min((((-var_0 ? (3060166219915484632 >= 23596) : var_10))), (max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), (min(var_9, 15386577853794066984)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 22;i_9 += 1)
            {
                {
                    var_22 *= var_5;
                    var_23 = 7;
                    var_24 = (max(var_24, (var_14 ^ var_13)));
                    var_25 ^= 0;
                }
            }
        }
    }
    #pragma endscop
}

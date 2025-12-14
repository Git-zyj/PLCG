/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (4212 / 32566);
    var_13 = ((((max((var_6 || var_0), var_11))) + 4224));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] = (((max((((!(arr_4 [i_0] [0] [0])))), (((arr_3 [12] [12]) ? 15272364268844456809 : (arr_0 [i_1]))))) & ((((61324 || ((((arr_1 [i_2]) + (arr_6 [i_0]))))))))));
                            arr_9 [7] [i_1] [i_2] = (((((~(((((arr_4 [3] [3] [i_2]) + 2147483647)) << (((arr_0 [i_1]) - 2357188693))))))) ? 262140 : 8155));
                            var_14 = ((~((2859755172221519139 + (arr_1 [i_0])))));
                        }
                    }
                }
                var_15 = (((((((~(arr_0 [13])))) ? (min(14930445659313920782, 467672316382613408)) : ((((arr_1 [i_0]) ? 3 : 4263326756))))) + (min(((((arr_5 [0]) ? (arr_5 [i_0]) : (-9223372036854775807 - 1)))), (min((arr_4 [i_0] [5] [i_1]), 18446744073709551615))))));
                var_16 ^= (min(2083135252, (min((max(-8360781223145586346, 15272364268844456809)), ((max(2042017792668143151, 369921041)))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_4] [i_5] [i_5] [i_5] = (max(((((arr_1 [i_1]) ? (max((arr_6 [i_5]), (arr_10 [i_0] [13] [0] [13]))) : (min((arr_3 [i_1] [i_0]), (arr_11 [i_1])))))), ((-2 ? ((17979071757326938215 ? 15272364268844456809 : 4205)) : (((1 ? (arr_12 [i_4] [i_4]) : -10108)))))));
                            var_17 = (min((arr_1 [i_0]), ((max((min((arr_10 [i_5] [4] [i_1] [i_0]), (arr_11 [i_4]))), 200)))));
                        }
                    }
                }
                var_18 = (min(var_18, ((((max(5245774827404959689, 9223372036854775794))) ? ((max((arr_4 [i_0] [4] [i_0]), ((max((arr_6 [i_1]), 0)))))) : (arr_10 [i_0] [i_1] [i_1] [i_1])))));
            }
        }
    }
    #pragma endscop
}

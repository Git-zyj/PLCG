/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((((((((var_9 ? var_3 : var_2))) ? (var_6 <= var_5) : var_1))) ? (max(1494183365, (1494183361 == var_6))) : ((192 ? 246 : 31))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_17 ^= ((((((arr_5 [i_3 + 1] [i_3 + 1] [i_2 - 3]) ? (arr_5 [i_2 - 2] [i_3 - 1] [i_2 - 2]) : (arr_5 [i_2 - 1] [i_3 - 1] [i_2 - 1])))) ? ((-16279 ? (((arr_1 [i_0]) | (arr_4 [i_1] [i_1] [i_1]))) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))) : ((((((arr_9 [i_0] [i_0] [i_0] [i_0]) | (arr_1 [i_0])))) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : ((((arr_2 [i_1]) ^ (arr_0 [6]))))))));
                            var_18 = (((((((~(arr_0 [i_0]))) != -1))) | (255 & 153)));
                        }
                    }
                }
                var_19 = (max(var_19, ((((((((1508966792 ? (arr_4 [i_0] [i_0] [i_0]) : (arr_0 [0])))) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((-5506 + 2147483647) << (4294967295 - 4294967295))))) >> (((arr_2 [i_1]) ? 1 : (((arr_8 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_3 [i_0] [i_0]) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
            }
        }
    }
    var_20 = ((var_11 < (max((-20 / 179), ((var_7 ? -1 : -62))))));
    #pragma endscop
}

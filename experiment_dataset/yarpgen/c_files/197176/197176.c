/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max(((3170773109 ? 0 : 0)), 201))) ? var_8 : (max(var_8, var_5))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = (min((((max(1, 1)) ? ((7273146469731758283 ? -8485761095541205662 : 10372276530191889793)) : -105)), (((((min(var_2, var_9))) | (~var_5))))));
                arr_5 [i_0] [i_0] = ((((max(var_4, var_5))) ? (57415 <= -1092429124) : (arr_1 [i_0] [i_1])));
                var_12 *= (max((((1 << (10598 - 10574)))), (((0 / 234057153) ? (var_10 || var_6) : ((3170773109 ? (arr_1 [i_0 + 1] [i_0]) : var_4))))));
                var_13 ^= (((((((-(arr_0 [i_0] [i_0 - 1])))) ? var_5 : (min(9223372036854775790, 1319579376))))) ? (max(((min(var_1, var_8))), var_3)) : (max((((var_2 ? var_1 : (arr_0 [i_0] [9])))), 1663891922246852776)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [1] [i_2] [i_3] = (arr_8 [i_0 - 1] [i_0 - 1] [5] [i_2] [i_2] [i_3]);
                            arr_12 [i_3] [i_1 - 1] [i_2] [i_3] = -952933817;
                            var_14 *= (((max(1, -27)) / (arr_9 [i_0 - 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

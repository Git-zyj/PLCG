/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((3891993789449861374 >> (1436030666 - 1436030654)))) || (~var_7))) ? (min(var_7, var_2)) : var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_8 [i_1] = ((((((arr_5 [i_1] [i_1]) + (arr_5 [i_0] [i_1])))) != ((var_0 ? (arr_4 [i_0] [i_1] [i_1]) : ((2858936630 ? 1436030689 : var_3))))));
                var_11 = (min(var_11, ((max(var_8, (((((var_6 ? 3891993789449861374 : 618238008))) || -49)))))));
                arr_9 [i_0] [i_1] = (max(((((((3676729288 ? 1519674729 : 4277513203))) ? (arr_5 [i_0] [i_1]) : ((7195017884717884834 ? 1519674729 : -32742))))), ((7871163361607556338 / ((var_1 ? 7000 : -9205250434025213951))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_12 = (!((((arr_11 [i_2 + 1] [i_2 + 1]) ? (arr_11 [i_2 + 1] [i_2 - 1]) : (arr_11 [i_2 - 1] [i_2 - 1])))));
                var_13 = (arr_1 [i_2 + 1]);
                var_14 = (max(var_14, 7658112190821565917));
            }
        }
    }
    #pragma endscop
}

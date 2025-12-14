/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            arr_4 [i_0] = (((((max((arr_3 [i_0]), 36264)) < 36264)) ? (max(((4294967288 ? (arr_0 [i_0] [1]) : (arr_3 [i_0]))), (arr_3 [i_1 + 1]))) : (((min((arr_1 [i_0] [i_1 + 2]), -119))))));
            var_14 = (arr_3 [i_0]);
        }
        var_15 *= (max((((((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_0]))))), ((36264 / (max(9633477037628037275, 1))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (max((arr_0 [i_2] [16]), (((arr_0 [i_2] [i_2]) ^ 1558099646))));
        var_16 = (max((((((arr_8 [i_2]) + 2147483647)) >> (((arr_0 [i_2] [i_2]) - 85)))), ((-(arr_5 [i_2])))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_17 = (((max((arr_0 [i_3] [i_3]), (arr_0 [i_3] [i_3])))) ? ((36265 ? (arr_0 [i_3] [5]) : (arr_0 [i_3] [i_3]))) : ((max((arr_0 [i_3] [i_3]), (arr_0 [i_3] [i_3])))));
        arr_14 [i_3] = ((((((arr_11 [i_3]) / (arr_7 [i_3] [i_3])))) ? (arr_10 [i_3] [4]) : (((arr_12 [i_3] [i_3]) ? ((min(95555367, 36264))) : (arr_11 [i_3])))));
        var_18 = (arr_13 [i_3]);
        var_19 = (max(var_19, (arr_1 [i_3] [i_3])));
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 6;i_5 += 1)
        {
            {
                arr_22 [i_4 - 1] [i_4] [i_4 - 1] = (min((((((arr_19 [i_4 + 1] [i_4 + 1] [i_5 + 3]) + (arr_11 [i_4]))))), (((arr_21 [i_5] [i_5 + 1] [i_5 + 4]) ? ((max(56, -1307151666))) : (min(-1, 4294967266))))));
                arr_23 [i_4] [i_4] = 8813267036081514358;
            }
        }
    }
    #pragma endscop
}

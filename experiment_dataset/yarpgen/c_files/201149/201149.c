/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(-3602, 4866759322325107294))) || 0));
    var_11 = 466672645;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0 + 1] = 10;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_3] [i_2] [1] [i_1] = ((((4113181787806262715 ? 14333562285903288928 : 14333562285903288901)) * (arr_7 [i_0 + 2])));
                        var_12 = (arr_6 [i_1]);
                    }
                }
            }
        }
        var_13 = ((3602 ? 11019132321137038725 : 1));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_14 -= (((((11019132321137038725 ? (arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))) && 1));
        arr_16 [i_4] [i_4] = (((7427611752572512895 * 2097151) ? ((((4657459640292472516 ? 11019132321137038734 : 0)) ^ (22887 | 15802048893924173607))) : (((509203763303457899 ? 1 : 2565808246418187435)))));
        arr_17 [i_4] [i_4] = ((((((arr_4 [i_4] [8]) ? -3818432364599359144 : (((arr_2 [i_4]) / 16777216))))) ? (min(2082426379, (arr_4 [i_4] [i_4]))) : 14333562285903288908));
        arr_18 [i_4] = ((3215343466 ? (arr_5 [i_4]) : (((((4438947978547166733 ? (arr_6 [i_4]) : 83))) ? -2147483619 : ((328563948 ? 22887 : -1525097393))))));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((((min((~0), var_0))) ? ((-(max(-1, var_2)))) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_15 += ((((((((-14 ? (arr_11 [i_0] [i_0]) : -334674083))) ? -var_9 : (((var_4 || (arr_3 [i_0] [i_3] [i_4]))))))) ? ((((arr_10 [8] [7] [i_2] [i_0] [i_0] [i_0]) || ((max(45080, 1)))))) : (~-14)));
                                var_16 = (((((-((100 / (arr_11 [i_0] [i_1])))))) ? ((max(176, (2097152 || 32768)))) : ((min(var_7, (1698167208 != var_13))))));
                                var_17 = (min(var_17, (((+(min((arr_9 [i_3] [i_3] [i_3] [i_3] [i_3 - 1] [i_3]), var_7)))))));
                                var_18 = (~2097152);
                                var_19 = (-1 || 411579090);
                            }
                        }
                    }
                }
                var_20 = 8656662446811486468;
                arr_13 [i_0] = ((arr_8 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1]) ? (max(18446744073709551615, (!1))) : (((((var_0 ? var_13 : 1629459154))) ? (((32768 ? (arr_8 [i_0] [0] [8] [0] [7] [i_1]) : var_7))) : (max(8400175071380345470, 59982)))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 8;i_7 += 1)
                        {
                            {
                                arr_21 [i_7] [i_1] [i_5] [i_6] [i_7] = (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_22 [8] [8] [i_5] [i_5] [i_7] [i_7] = (arr_2 [i_0]);
                            }
                        }
                    }
                }
                var_21 = 32766;
            }
        }
    }
    var_22 = ((((max(1, var_10))) ? ((max(((20 ? var_12 : var_2)), var_9))) : var_3));
    #pragma endscop
}

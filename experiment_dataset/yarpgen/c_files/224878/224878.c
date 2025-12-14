/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            arr_7 [14] = (max(((((arr_0 [i_1 - 1]) > 9223372036854775807))), ((((min(var_16, var_4))) ? (((((arr_0 [i_0]) <= (arr_6 [11] [i_1]))))) : ((var_8 ? (arr_6 [1] [i_1]) : 2))))));
            arr_8 [i_0] [0] [i_0] = ((((-((30916 ? 22230 : 920953341991572933)))) + 1977489848039141179));
            arr_9 [i_0] [i_0] [i_1] = 32737;
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_12 [i_2] = (max((max(var_11, (arr_3 [i_0]))), var_17));
            arr_13 [i_0] [i_2] [i_2] = (max(var_10, (arr_10 [i_2] [i_2] [i_2])));
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            arr_18 [i_3] [i_0] = 5762390033529417199;
            arr_19 [i_0] [2] [i_0] = (((arr_16 [i_0]) ? (((((arr_11 [i_0] [2]) > -29282)))) : (arr_11 [i_3 - 1] [12])));
        }
        arr_20 [i_0] = var_17;
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_30 [i_4] [i_4] [i_5] [i_4] = (max(((198 << (((arr_4 [i_5] [i_5] [i_5]) - 32)))), (((arr_4 [i_6] [i_5] [i_4]) ? (arr_22 [i_5]) : (arr_10 [i_5] [i_5] [i_6])))));
                    arr_31 [1] [1] = (max((~32767), 32171));
                    arr_32 [4] [0] [0] = ((~(arr_2 [i_4])));
                }
            }
        }
    }
    #pragma endscop
}

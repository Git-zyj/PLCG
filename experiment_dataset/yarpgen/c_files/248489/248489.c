/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(-1726338234445815377, var_4));
    var_15 = var_0;
    var_16 = ((((max(-1726338234445815382, (!var_8)))) ? (-32 / 1726338234445815392) : 1726338234445815376));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_17 = ((((-1726338234445815377 ? (-32767 - 1) : 769988095)) ^ ((max(1411811477, (arr_1 [2]))))));
        var_18 = (((((~(arr_0 [i_0] [i_0])))) ? ((38276 ? (-127 - 1) : (arr_2 [i_0]))) : (((((arr_2 [i_0]) == (arr_2 [i_0])))))));
        var_19 = (!(arr_3 [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((var_10 ? (((arr_3 [1]) ? (max(18091483131307102554, (arr_4 [i_0] [i_0]))) : 3601050261474430637)) : (min((((arr_1 [i_0]) | (arr_2 [i_0]))), (1 >= var_12)))));
                    arr_9 [i_0] [i_2] [i_2] [i_2] = (-((~(arr_0 [i_1 - 2] [i_1]))));
                    arr_10 [i_0] [3] [9] = var_4;
                    var_20 = ((32749 ? (-127 - 1) : (arr_7 [i_1] [i_1] [2] [i_1])));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_21 = (max(0, 127));
        arr_13 [i_3] = ((((min((arr_5 [i_3] [2] [i_3]), (arr_5 [i_3] [2] [i_3])))) ? -1726338234445815382 : (min((arr_5 [i_3] [4] [i_3]), (arr_5 [i_3] [2] [2])))));
        arr_14 [i_3] = (arr_11 [1]);
        arr_15 [i_3] [i_3] = (!-12);
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_22 = arr_11 [5];
        arr_18 [i_4] [i_4] = (arr_12 [i_4] [i_4]);
    }
    #pragma endscop
}

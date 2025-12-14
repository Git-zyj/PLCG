/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] = ((arr_2 [i_2]) + (((arr_2 [i_1 - 2]) ? (arr_2 [i_0]) : (arr_3 [i_0]))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                        {
                            var_15 = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_16 = (118 >> (4294967295 - 4294967272));
                            var_17 ^= ((!((((arr_10 [i_0] [i_1] [i_1] [5]) ? (arr_15 [i_1]) : var_6)))));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            var_18 = ((~((~(arr_11 [i_2 - 1] [i_2] [i_2] [i_2])))));
                            arr_19 [i_0] [i_1] [i_2] [i_3] [12] = (((((((((arr_14 [i_0] [i_1] [i_2 - 1]) + (arr_0 [i_2] [i_2])))) ? (arr_13 [i_0] [i_0] [i_2] [i_3] [i_0]) : (!var_0)))) ? (arr_10 [i_1] [i_2] [i_3] [i_5]) : ((~(35291 ^ 6336474582956056970)))));
                        }
                        var_19 = ((~(((max(-1305713179, 2985602164550136149)) ^ ((max((arr_17 [i_0] [i_1] [i_1] [i_3] [i_1]), (arr_6 [18] [i_1 + 2] [18]))))))));
                    }
                }
            }
        }
    }
    var_20 = (((((-((max(var_2, var_2)))))) ? (~var_6) : -var_11));
    #pragma endscop
}

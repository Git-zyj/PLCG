/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_4 ? var_1 : ((max(15438, (!11796302475205294132))))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_19 = (7729559064092758988 + -0);
            var_20 = 10330962782497686882;
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 17;i_4 += 1)
                {
                    {
                        var_21 = (((!8115781291211864734) * (arr_0 [i_0 + 3] [i_0])));
                        var_22 = 6709751993903549246;
                        var_23 = max((((arr_5 [i_3 + 2] [i_0 + 1]) ? (((max(8184, 43505)))) : 196725756053745671)), (0 <= 6034716806070760595));
                    }
                }
            }
            var_24 = (((max((arr_10 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_0 - 3] [i_0 - 2]), (arr_10 [i_2 + 3] [i_2] [i_2 + 3] [i_2 + 3] [i_0 - 2] [i_0 - 2]))) ? (((arr_10 [i_2] [i_0 - 1] [i_2 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? 8681876588716988268 : (arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 3] [i_0] [i_0] [i_0 + 1]))) : 6709751993903549245));
            arr_11 [i_0] = (max(((((arr_3 [i_0 + 2] [i_0 + 1] [i_2]) / (arr_10 [i_0] [i_0 + 1] [i_0] [i_2 + 3] [i_2 - 1] [i_2])))), ((-6709751993903549247 ? (arr_9 [i_2 + 2] [i_0 + 1] [i_0 + 3]) : (arr_9 [i_2 + 2] [i_0 + 1] [i_0 + 3])))));
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            arr_21 [11] [i_5 + 1] [11] [i_5] [11] [i_5] = 9202693321717545879;
                            arr_22 [i_6] [i_6] [i_5] [i_6] [i_0] [i_0] = (max((arr_18 [i_0 + 1] [i_0] [i_2 + 2] [i_5] [i_5 + 1] [i_5 + 1] [i_0]), ((max((arr_12 [i_0] [i_0] [i_0] [i_0 + 3]), (arr_12 [i_0] [i_0] [i_0 - 3] [i_0 - 1]))))));
                            var_25 = ((min((((0 <= (arr_12 [i_0] [i_2] [i_5] [i_7])))), (arr_0 [i_5] [i_5]))));
                            arr_23 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 1] = (arr_3 [i_0] [i_2] [i_5 + 1]);
                        }
                    }
                }
            }
        }
        var_26 = 7004405412223176988;
        arr_24 [i_0] = ((-(((arr_12 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 3]) - (arr_9 [i_0] [i_0 - 1] [i_0])))));
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 11;i_8 += 1)
    {
        var_27 = (min(var_27, (arr_1 [i_8])));
        var_28 = (arr_10 [i_8] [i_8 + 2] [i_8 + 3] [i_8 + 3] [i_8 - 1] [i_8]);
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_29 = (arr_28 [i_9]);
        var_30 = (((((32767 / ((6709751993903549228 + (arr_30 [i_9])))))) >= (arr_30 [i_9])));
    }
    #pragma endscop
}

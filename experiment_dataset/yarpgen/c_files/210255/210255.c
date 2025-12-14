/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_15 &= (~1282451873546205141);
            var_16 = (max(var_16, (arr_1 [i_0])));
            arr_6 [i_0] [i_1] [i_1] = (min(((((((arr_4 [i_0] [i_0] [i_1]) ? (arr_2 [i_1]) : (arr_5 [i_1] [i_0])))) ? ((min((arr_4 [i_1] [i_1] [i_0]), (arr_2 [i_0])))) : (arr_4 [i_0] [i_0] [i_0]))), (min((-2147483647 - 1), (!16827)))));
        }
        var_17 = (16827 ? ((17164292200163346502 ? (((max(71, 6113)))) : (arr_0 [i_0]))) : 46666);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    arr_13 [i_0] [i_2] [i_2] [i_2] = (arr_4 [i_2 + 2] [i_2 + 2] [i_3]);

                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        arr_16 [i_0] = (arr_8 [i_0]);

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_18 = (!8597609421905324486);
                            var_19 = -837560556;
                        }
                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_3] [i_0] [i_6] = ((-(arr_5 [i_0] [i_6])));
                            var_20 ^= ((arr_20 [i_0] [i_2] [i_0] [i_4] [i_6]) ? 667946656 : 16827);
                        }
                    }
                    arr_22 [i_0] [i_2] [i_3] = (((arr_2 [i_2 + 2]) ? (((arr_0 [i_0]) + (arr_20 [i_0] [i_3] [i_3] [i_3] [i_2 + 1]))) : (arr_17 [i_0] [i_2 + 1] [i_2 + 1] [i_3] [i_2 + 2])));
                }
            }
        }
    }
    #pragma endscop
}

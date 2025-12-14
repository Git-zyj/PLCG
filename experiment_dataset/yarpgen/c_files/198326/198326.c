/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] [i_2] [i_1] [i_4] = 1;
                                var_12 = ((!((max((arr_13 [i_1] [i_1] [i_2] [i_4 + 2] [i_4] [i_2]), var_6)))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_0] = 15454548419310713400;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_22 [i_1] [i_1] [i_1] [i_6] = ((-4277956330747977162 ? (arr_11 [i_0] [i_1]) : ((-(arr_11 [i_1] [i_1])))));
                                var_13 -= -var_7;
                            }
                        }
                    }
                    var_14 = (min((arr_20 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0]), (max(32767, ((min(4294934526, (arr_21 [i_0] [i_0] [i_1] [i_0] [i_2]))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    var_15 = ((((min((arr_23 [i_9]), (arr_28 [i_7] [i_8] [i_9])))) ? (arr_24 [i_7]) : (min(-5840388892575279153, 2992195654398838221))));
                    arr_30 [i_7] [i_7] = ((-((~(((127 > (arr_24 [i_7]))))))));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 32764;
    var_11 = var_6;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (arr_3 [i_0] [i_0]);
        var_13 = ((+(((!-2147483625) ? 1 : ((-(arr_2 [i_0])))))));
        arr_4 [i_0] = min((((((-(arr_0 [i_0] [i_0])))) ? 276009480 : ((0 ? var_3 : (arr_3 [i_0] [i_0]))))), (arr_3 [i_0] [i_0]));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_14 = -var_1;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_18 [8] [i_1] [1] = (min((~-517922769), ((~(arr_15 [i_5] [i_4] [i_1] [i_2] [i_1])))));
                                arr_19 [0] |= (min(((~((max(15, 1))))), 6979446938473460203));
                                arr_20 [i_1] [i_1] [i_1] [i_4] [i_1] [i_1] [i_1] = ((-(arr_12 [i_5 + 1] [i_1] [i_1] [i_2])));
                            }
                        }
                    }
                    arr_21 [i_1] [i_1] [i_1] [i_1] = 129024;
                    var_15 = ((((max(-517922778, (~var_6)))) ? (arr_3 [i_1] [i_1]) : (arr_7 [i_3] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}

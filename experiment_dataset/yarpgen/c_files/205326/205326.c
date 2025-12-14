/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((var_8 & ((var_1 ? var_0 : 315329025)))), (((var_11 ? (var_3 <= 13661) : ((var_2 ? var_6 : 14)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 += (((arr_3 [i_2 + 1]) * (arr_0 [i_2 + 2])));
                    var_19 *= var_8;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_20 = (max(var_20, 29));
                                arr_21 [i_3] [17] [i_5] [i_6] [i_3] [i_5] = 13922165920611565178;
                                arr_22 [i_3] [i_6] = ((var_7 ? (((max((arr_10 [i_3]), (arr_18 [i_5]))) - (arr_11 [i_3]))) : 84));
                            }
                        }
                    }
                }
                arr_23 [i_3] = (arr_16 [i_3] [i_4] [i_4]);
                arr_24 [i_3] [i_3] [i_3] = (max((3316711846194882817 * 35275), ((((arr_12 [i_3] [i_3]) ? -1 : (arr_12 [i_3] [i_3]))))));
                var_21 = ((((var_16 >= (arr_19 [i_3] [i_3] [i_3] [i_4] [i_3])))));
            }
        }
    }
    #pragma endscop
}

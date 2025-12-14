/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = max((((((9372595528507625122 ? 115288011 : 93))) ? (~var_2) : (((arr_1 [i_0] [i_0]) & -1040206300)))), (37277 & 2795204058));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] [i_3 + 2] [i_3] [i_1] = ((((arr_13 [i_0] [i_3] [i_3] [i_3 - 2]) ? (arr_4 [i_3 + 2]) : (arr_4 [i_3 - 1]))) < (~var_6));
                                arr_17 [i_1] [i_4] = ((~(max(112, (arr_12 [i_3 + 2] [i_1] [i_2] [i_3 + 2] [i_4])))));
                                arr_18 [i_3 - 1] [i_1] [i_3] [i_3] = (arr_10 [i_0]);
                            }
                        }
                    }
                    arr_19 [i_1] = var_0;
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 15;i_5 += 1)
    {
        arr_23 [i_5] = (max(((((((arr_22 [i_5]) ? 37282 : 37288)) / var_11))), (((((var_17 ? (arr_20 [i_5]) : (arr_21 [i_5 - 2] [i_5])))) * (arr_22 [i_5 + 1])))));
        arr_24 [i_5] = ((+((max((max((arr_20 [17]), (arr_20 [i_5]))), var_5)))));
        arr_25 [i_5] = (((arr_22 [i_5 + 3]) != (((-((52534 ? 796 : (arr_20 [2]))))))));
    }
    var_21 *= (((max(((max(28244, var_5))), 52514))) ? ((var_16 ? 28253 : (~9074148545201926496))) : (((((((max(var_8, var_8)))) != (max(var_7, var_1)))))));
    #pragma endscop
}

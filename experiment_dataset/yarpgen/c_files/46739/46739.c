/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_11 || (((var_4 << (var_10 + 10556)))))));
    var_14 = (((!2910234329) * (((!-473613921) ? (-1 % 2526304609) : (((var_8 >> (-528808203302058131 + 528808203302058147))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 = var_0;
                                var_16 = arr_8 [i_0] [i_1] [i_4 + 1];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1] [i_2] [i_5] [i_2] = 0;
                                arr_22 [i_0] [i_1] [i_2] [i_2] [i_6] = (((((-(!var_3)))) > ((11128895069597233855 >> (((arr_12 [4] [i_1] [i_2] [i_0]) - 227))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

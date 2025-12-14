/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((+-32) != var_16))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_2] [16] [i_4] = ((-(min(var_11, var_13))));
                                var_19 &= (max((!var_0), (arr_7 [i_1] [i_1] [i_1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [12] [i_0] [i_5] [i_6] = -1;
                                arr_19 [i_0] [i_0] [5] [i_5] [i_6] = (((((!(arr_5 [i_5] [i_5] [i_5])))) != ((min((arr_5 [i_2] [i_2] [i_2]), (arr_5 [i_0] [i_0] [i_2]))))));
                                var_20 = (min(var_20, (((var_8 ? (min((max(17872255472137106050, var_7)), ((max(var_5, 26366))))) : (!var_15))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_11;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (((!(var_11 / var_5))) ? (arr_3 [i_0] [i_1] [i_1]) : (((((6984291477997861448 ? -5 : var_5))) ? var_1 : (arr_2 [i_0] [i_0]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (((min((arr_11 [i_4] [i_3] [i_0] [i_2] [i_3] [i_0]), (-921679969 && var_6))) ? (min((min(var_6, 6984291477997861448)), ((min(var_11, -805826289))))) : ((var_0 ? (arr_11 [i_3 - 1] [i_3] [i_3] [i_3] [i_1] [1]) : -6984291477997861448))));
                                arr_12 [i_0] [i_0] [3] [i_0] [i_3] [i_3] = ((162 ? ((((!(arr_2 [i_2] [i_0]))))) : (min((max(2251799805296640, 1)), (~var_0)))));
                                var_19 = ((((min(((var_10 ? (arr_5 [20] [3] [12] [3]) : (arr_0 [i_3] [i_3]))), 1))) ? ((((!(!var_4))))) : (((6575479840897189087 && 1) ? ((48 ? -1435288880 : (arr_7 [i_0]))) : 6984291477997861448))));
                                arr_13 [i_0] [i_3] [i_1] [i_3] [i_1] = 15716;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 4; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_20 &= -9223372036854775780;
                                var_21 = ((!((min(1, (max(var_15, 1)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (3944759272363932904 ? 165669175 : (((((min(var_5, var_11))) && (var_11 || 2123)))));
    #pragma endscop
}

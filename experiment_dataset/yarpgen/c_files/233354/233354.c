/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((3618379854877338286 >> (var_1 + 1853838953))) | (~var_6))));
    var_17 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = ((+(((!((((arr_6 [i_0] [1] [i_1]) - 3618379854877338286))))))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    var_19 = (arr_3 [i_0]);
                    var_20 = (max(var_20, -var_8));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_21 = var_6;
                                var_22 = ((14828364218832213316 < (((min((arr_0 [i_0]), (arr_0 [1])))))));
                                var_23 = ((((3618379854877338286 ? (((var_13 == (arr_12 [i_0] [i_1] [i_0] [i_5])))) : ((min(106, 53))))) | (arr_2 [i_0] [i_5])));
                                var_24 = ((((min((min(var_1, var_8)), ((min(var_0, var_9)))))) ? 14828364218832213305 : (min(3137005837843303275, ((((arr_16 [i_0] [i_0] [i_3] [i_4]) || (arr_6 [i_0] [i_1] [i_5]))))))));
                            }
                        }
                    }
                    arr_20 [i_3] [i_3] [i_3] = ((((var_11 ? (arr_17 [i_0] [i_0] [i_0] [i_0] [i_3]) : (arr_17 [i_3] [i_3] [11] [i_0] [i_3]))) >> (((min(-106, -var_9)) + 254))));
                    var_25 = (((+((min((arr_8 [i_3] [i_1] [4]), -37))))));
                }
                var_26 = ((!(((var_8 & (arr_0 [18]))))));
            }
        }
    }
    #pragma endscop
}

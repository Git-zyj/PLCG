/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (min(17, ((((min(2892, (arr_0 [i_0])))) ? (-15878 % 17152248134146189241) : (!var_1)))));
                                var_20 = (min(var_20, 10493608961012714750));
                                var_21 |= ((((min(2892, 8202771043652700534))) ? 11027 : ((max(var_2, 1)))));
                                arr_13 [i_0] [i_1] [i_0] [i_2] [i_3] [i_3] [i_3] = ((((max(15105234208552196015, ((var_3 ? 13157570658876680407 : 513))))) ? 1671436242 : 18258));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_22 = (max(var_22, (((-1861105520 ? -68719476735 : (max(17, ((8175422062236201408 ? 3479129554 : 310335582388269877)))))))));
                                var_23 = (max((max(-1861105509, ((max(1, -17))))), 17));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_25 [i_0] [i_1] [1] [i_7] [i_8] |= max(((max(1, (((arr_6 [15] [15]) ? -17 : 17))))), (min(((max(17, 1))), var_1)));
                                arr_26 [i_7] [i_7] = (((((min(var_5, 16765926427867379007))))) + (arr_17 [i_2] [i_2 - 3] [i_2] [i_2] [i_2]));
                                var_24 *= -4259995143502766205;
                                var_25 = 47278;
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (~40339);
    var_27 = ((((var_15 ? var_16 : -2033828909)) <= 1));
    #pragma endscop
}

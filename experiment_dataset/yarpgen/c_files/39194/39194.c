/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((!((((1800203701 & 1) << (max(-897409088, 0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((!(arr_0 [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_0] [i_0] [i_1] [i_3] = max((arr_13 [i_3] [i_3] [i_3]), 0);
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_4] = ((((min((arr_12 [i_3] [i_1] [i_2] [i_3] [i_4] [i_4] [i_2]), ((51632 / (arr_12 [i_3] [i_3] [i_3] [i_2] [i_1] [i_3] [i_3])))))) != 5836291876668347081));
                                var_18 += (arr_8 [i_3] [i_3]);
                            }
                        }
                    }
                }
                var_19 = (max(var_19, ((((min((((!(arr_2 [i_0])))), (arr_3 [i_1]))) | (max(2739098315, (arr_11 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0]))))))));
                var_20 = (((arr_0 [i_0]) | ((((((arr_8 [i_0] [i_0]) || 12610452197041204532)) && 5836291876668347079)))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_21 = (min((min((arr_12 [6] [i_5] [6] [6] [i_5] [i_5] [6]), (75 - -897409064))), ((min((arr_12 [10] [10] [i_5] [i_5] [i_5] [i_5] [10]), (arr_10 [i_5] [i_5] [i_5]))))));
                            arr_23 [i_0] [i_0] [i_0] [i_6] = ((((min(153, (arr_22 [i_0] [i_5 - 1] [i_0])))) ? (!5836291876668347095) : -27120));

                            for (int i_7 = 3; i_7 < 15;i_7 += 1)
                            {
                                var_22 -= (-8162399210317779881 && -2827512855542029911);
                                var_23 = (((-2147483647 - 1) ? (min((arr_17 [i_0]), (arr_24 [i_5] [i_7]))) : (min((arr_9 [i_6] [i_5]), (((arr_2 [i_7]) ? (arr_22 [i_0] [i_0] [i_0]) : 426303817))))));
                                var_24 = (max(var_24, (((((((arr_17 [i_6]) << (((arr_21 [i_1]) - 1148615341))))) ? (((((min(32754, (arr_20 [i_1])))) ? (arr_17 [i_6]) : (((arr_7 [i_1] [i_5] [i_5] [i_1]) & -897409096))))) : (min(((min(0, 1))), (((arr_5 [i_6] [i_6]) ? 2125 : (arr_6 [i_0] [i_0] [i_0]))))))))));
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 16;i_8 += 1)
                            {
                                var_25 = (((((199 ? (arr_10 [i_8] [i_6] [i_1]) : 36620))) ? 2 : (arr_8 [i_0] [i_0])));
                                arr_28 [i_8] [i_5] [i_8] = (((arr_9 [i_0] [i_0]) ^ (arr_20 [i_8])));
                                arr_29 [i_0] [i_1] [i_5] [i_5] [i_8] [i_6] [i_8] = (~3748);
                                var_26 = (((arr_2 [i_0]) - (1814906703 | -318258653)));
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_8] = ((0 ? 16 : -48));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = ((var_1 ? ((65531 ? 65535 : ((min(-1, 1))))) : 2260));
    #pragma endscop
}

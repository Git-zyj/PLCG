/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= 7486681102301246924;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = ((-1697392373 - ((860493456 ? 10960062971408304692 : (arr_1 [i_0])))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_20 = (1194274293 ^ 10960062971408304713);
                    var_21 = 28603;
                }
                for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_15 [i_5 - 2] [i_1] [i_1] [i_3 + 3] [i_1] [i_1] [i_0] = var_11;
                                arr_16 [i_5] [i_4] [i_0] [i_1] [i_0] = (((min((min(18446744073709551611, var_14)), ((((arr_4 [i_3] [i_4]) ? -93 : 59271))))) + (arr_9 [i_1] [i_3 + 3])));
                                var_22 = ((~(min(-1628458091, 1194274307))));
                            }
                        }
                    }
                    var_23 = (((((-var_0 % (min((arr_14 [0] [i_0] [0] [0] [0] [i_3]), var_14))))) ? ((min(((var_3 ? (arr_8 [i_3 - 1] [11] [i_0]) : (arr_11 [i_0] [i_0] [i_0] [i_0]))), (arr_2 [i_0] [i_1])))) : (min((min((arr_4 [i_1] [i_3]), -2786379693469849705)), (arr_7 [i_1] [i_0] [i_3 + 1] [i_1])))));
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 9;i_6 += 1) /* same iter space */
                {
                    arr_19 [i_0] = ((+((((arr_6 [i_0] [i_1] [i_6] [i_1]) || 17409)))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_26 [i_0] [i_7] [i_7] [i_0] [i_0] = ((10960062971408304713 ? (805653333640620491 < var_17) : ((9066734310180689586 >> (var_14 - 31655378)))));
                                var_24 += 10960062971408304726;
                                var_25 = (-1194274283 ? (arr_4 [i_7 + 2] [i_6 - 1]) : (arr_4 [i_7 - 2] [i_6 + 2]));
                                arr_27 [i_0] [i_7] [i_0] [i_7] = var_14;
                                arr_28 [i_7] = (127 ? 1333231201 : 1);
                            }
                        }
                    }
                    arr_29 [i_6] [i_1] [3] |= var_9;
                }
            }
        }
    }
    var_26 = (~-2031345779);
    #pragma endscop
}

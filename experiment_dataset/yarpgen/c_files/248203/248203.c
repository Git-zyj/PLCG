/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_8 ? var_4 : (var_1 == var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_14 = (arr_4 [21] [21] [21]);
                    var_15 = (min(var_15, var_5));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        {

                            for (int i_5 = 0; i_5 < 23;i_5 += 1)
                            {
                                var_16 = (((((arr_5 [i_1] [i_1]) ? ((0 ? (arr_10 [i_0] [i_1] [i_1] [i_4]) : 15)) : (arr_13 [i_1] [i_1]))) + (max((((arr_14 [i_0] [i_0] [i_0] [i_1] [i_0]) ^ (arr_1 [i_1]))), ((min(-7444, 0)))))));
                                var_17 ^= (((min(var_6, -29963))));
                                var_18 |= (((arr_1 [i_3 + 1]) ? 7456 : ((((arr_11 [i_4 - 1]) ? (arr_11 [i_4 + 1]) : (arr_1 [i_3 + 1]))))));
                                arr_17 [i_4] [12] [i_1] [i_1] [i_5] = max(((191 ? -7457 : 37)), (((0 && ((max(var_6, (arr_8 [i_0] [i_1] [i_4 + 1] [i_5]))))))));
                                var_19 = ((((max(((max(1, var_11))), var_4))) ? (arr_13 [i_0] [i_1]) : ((-((max((arr_3 [i_3] [i_4] [22]), var_9)))))));
                            }
                            for (int i_6 = 2; i_6 < 22;i_6 += 1)
                            {
                                arr_22 [i_6] [20] &= ((!((((arr_8 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 - 2]) ? 7456 : (arr_8 [i_0] [12] [i_3 + 1] [i_4]))))));
                                var_20 = (((min(-14, 0))));
                            }
                            arr_23 [i_1] = (arr_13 [i_3] [i_1]);

                            for (int i_7 = 0; i_7 < 0;i_7 += 1)
                            {
                                var_21 = ((((!-2877) ? 65535 : (max(4294967295, 2)))) << var_2);
                                var_22 = ((((max((arr_19 [i_0] [10] [i_1] [i_1] [20]), (arr_6 [i_1] [16] [i_1])))) ? (((((arr_25 [i_0] [i_1] [11] [i_1] [i_7 + 1]) >> (((arr_7 [i_0] [i_0] [i_0]) + 1530685589561030030)))) & (~37637264342896693))) : 2341655395));
                            }
                            for (int i_8 = 0; i_8 < 1;i_8 += 1)
                            {
                                var_23 = ((9007182074871808 <= ((max((((arr_13 [i_8] [i_1]) ? 181 : (arr_8 [i_3 + 1] [i_1] [i_3 + 1] [i_3 + 1]))), ((var_2 ? (-2147483647 - 1) : var_5)))))));
                                var_24 ^= (min(((((-(arr_0 [i_0] [i_0]))))), (((5433883277659789942 ? 1178613047 : 24214)))));
                                var_25 = ((((var_8 ? var_2 : ((24240 ? 56631 : 7651640183086289245)))) * (arr_16 [i_0] [i_0] [i_3] [i_4] [i_8] [14] [i_0])));
                                var_26 = -65535;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_27 = (arr_25 [i_0] [i_0] [i_1] [i_1] [i_10]);
                            var_28 ^= 65535;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

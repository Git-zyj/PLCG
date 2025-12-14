/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_20 = ((-((var_9 ? 7320485301834683225 : 7320485301834683225))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_2] [i_0] [i_3] [i_4] = (arr_1 [i_0] [i_1 - 1]);
                                var_21 = (((arr_8 [i_0] [i_2] [15] [i_2]) ? (!-2380270191896533694) : (arr_1 [i_0] [i_1 - 2])));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_22 = (((((arr_9 [i_0] [i_0] [i_1 - 1] [i_5] [i_5]) && (arr_9 [i_0] [i_1] [i_1 - 2] [i_5] [i_0]))) || (((arr_0 [i_1 + 1] [i_1 + 1]) && (arr_1 [i_1 - 1] [i_1 + 1])))));
                    arr_17 [i_0] [i_5] [i_5] [i_5] = 992390075;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_23 = (((arr_4 [i_1 - 2]) ? (((!(849622044 | 7320485301834683225)))) : -4294967295));
                                arr_26 [i_0] [i_5] = var_14;
                                var_24 = (max(var_24, (((arr_2 [0]) ^ ((((((arr_14 [14] [i_6] [i_5]) & 2380270191896533693))) ? (-1799848889 ^ 2679972711) : var_8))))));
                                var_25 = (min(var_25, -789929682864398855));
                            }
                        }
                    }
                }
                var_26 |= var_10;
            }
        }
    }
    var_27 = (((((var_7 * (var_14 > var_10)))) < var_13));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~2097151);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = ((29 ? 2097147 : 108008812));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = (~65535);
                                var_18 = (min(4186958480, 29));
                            }
                        }
                    }

                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_5 - 3] [i_0] [i_0] = max((((!(arr_6 [i_1 + 1] [i_5 - 2] [i_6 - 1])))), (~23828));
                            arr_18 [i_0] [i_0] [i_1] [i_2] [i_5] [0] [i_2] = ((((max(731335436579313393, (arr_2 [i_5 - 2])))) ? 23827 : ((-30 ? 2147483647 : 23))));
                        }
                        var_19 = (max(var_19, (18446744073709551615 % 6092695349460870333)));
                        var_20 = ((5194947251873003212 ? 4611686018427379712 : 164));
                        arr_19 [i_0] [i_5] [i_5] [i_5 - 2] [i_2] [i_1] = (18446744073709551615 || 23);
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        arr_22 [i_0] [i_2] [i_2] [i_2] [i_1] = var_11;
                        var_21 *= (2147483647 * 0);
                    }
                    var_22 = ((((166 ? 5135 : 1)) / var_0));
                }
            }
        }
    }
    #pragma endscop
}

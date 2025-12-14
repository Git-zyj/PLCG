/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = ((((((arr_6 [i_0] [i_1 + 3] [i_1 - 1]) ? 28 : var_10))) ? ((((arr_6 [i_0] [i_1] [i_1 - 2]) ? 0 : (arr_6 [i_0] [i_1 + 2] [i_1])))) : ((+(min((arr_1 [i_0]), (arr_2 [i_0])))))));
                var_12 = (min((min((-118 || 2048), (min((arr_1 [i_0]), 0)))), (63487 || 1140848770630887624)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_2] [i_1] [i_0] = (min(((min((min(2049, -33)), 0))), ((-5 ? ((var_2 ? 2040 : 63487)) : (((var_5 && (arr_8 [i_0] [i_2]))))))));
                            var_13 = (arr_0 [i_1]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            arr_19 [i_0] [i_1] [i_1] [i_0] [i_5] = (((((((65527 != 2071) != (4 * 0))))) < ((+(((arr_14 [i_5] [i_1 + 1] [i_0]) ? -1284869181 : (arr_2 [i_0])))))));
                            var_14 = min((arr_10 [i_0] [i_0] [i_1] [i_0]), (((!(arr_11 [i_4] [i_4] [i_1 + 3] [i_0 - 1])))));
                        }
                    }
                }
            }
        }
    }
    var_15 &= ((-(((7991 || -115) ? 2844214969 : (2158856790 / 59294)))));
    var_16 = (min((((!(((var_5 ? var_1 : var_0)))))), var_9));
    var_17 = ((((15 ? (min(3827356972, 65510)) : (min(1624883230, 35682)))) / (((min(5259, ((min(1, 4)))))))));
    var_18 *= ((((((var_8 ? var_3 : 0))) ? (((min(var_7, 53737)))) : 1663555473)));
    #pragma endscop
}

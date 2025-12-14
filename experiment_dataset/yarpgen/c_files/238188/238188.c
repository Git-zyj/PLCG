/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -7419860956218756828;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_21 = -7419860956218756818;
                var_22 = (((max(((max(var_12, (arr_0 [i_0] [i_1])))), 288230376151711232)) >> (-19302 + 19311)));
                arr_5 [i_0] [i_1] = ((!((!(arr_0 [i_0 + 1] [i_0 + 2])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_23 = ((((var_1 | ((288230376151711260 - (arr_2 [i_3 + 1])))))) ? (((arr_6 [i_0 + 2] [i_2 + 1] [i_3 - 1]) ? (arr_3 [i_0] [i_2 + 2] [19]) : (-9223372036854775807 - 1))) : (((((((arr_4 [i_2] [4]) ? (arr_9 [i_3 + 1] [14] [i_2] [i_1] [18] [7]) : (arr_9 [i_1] [18] [4] [i_1] [i_1] [i_1]))) == (((!(arr_2 [19])))))))));
                            var_24 = (((((arr_3 [i_3 - 2] [i_1] [i_0]) >= (max(var_2, -9223372036854775800)))) ? ((min(920317759, (!8)))) : (max((288230376151711238 & -3024419525308375224), ((min((arr_2 [1]), (arr_2 [i_0 + 1]))))))));
                            var_25 ^= (((((((-22720 ? 2641914166 : (arr_6 [i_0] [i_0] [i_2])))) && (arr_4 [i_1] [1]))) ? (arr_6 [i_0] [i_0] [i_2]) : (min((((-(arr_4 [i_1] [1])))), ((-32762 ? var_11 : (arr_10 [i_3] [i_0] [i_0])))))));
                            arr_11 [i_0] [i_1] [14] [i_3 - 2] |= (65535 ? ((((arr_8 [i_2]) / (arr_10 [i_0] [i_0] [1])))) : ((-(arr_10 [i_0 + 2] [i_0 + 1] [i_0 - 2]))));
                            var_26 ^= var_19;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

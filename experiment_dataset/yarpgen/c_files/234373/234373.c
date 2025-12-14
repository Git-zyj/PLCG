/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -89;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] &= (((((-(max(4286578688, 61764))))) ? ((((max(-1897892851, -30632))) ? (0 * 5917594433401778132) : (2147483647 * 0))) : ((max(-30632, 3655077679)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 ^= 73;
                                arr_14 [i_0] [i_0] [i_1] [5] [i_0] [i_0] [i_4] = (arr_0 [i_1] [i_3]);
                                arr_15 [i_4] [i_0] [9] [i_0] = (((arr_11 [1]) ? (min(70, (((arr_8 [i_0] [i_1] [i_1] [i_1]) * 13119862840821581498)))) : ((7 ? (((max(70, -106)))) : (arr_5 [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = ((-var_0 - (max(var_0, ((1 ? var_8 : 149765712))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                var_15 = ((30615 ? (min(((4016709 / (arr_17 [i_5]))), (arr_17 [i_6]))) : 4294967295));
                arr_22 [i_5] [i_6] [i_6] = (((arr_20 [i_6] [i_5] [i_5]) >= 4294967272));
                var_16 = (min(1367, (max((arr_17 [20]), (min(186, 4294967295))))));
                arr_23 [i_5] [i_5] [i_6] &= (min(((((arr_16 [i_6] [i_5]) ? (arr_16 [i_5] [i_6]) : -93))), (((arr_21 [i_5] [14] [i_5]) ? (arr_21 [i_6] [i_5] [i_5]) : 32767))));
                var_17 = ((0 ? (((!(arr_16 [i_5] [5])))) : (4611686018427387904 || 3)));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((2043233859 ? (var_5 || 3887631180) : ((var_4 ? var_8 : var_6))))) || (((((max(var_9, var_6))) ? var_9 : (~var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_0] = ((((1565008667 ? -3510388421948324250 : -1275608826)) > ((max((arr_5 [i_0 - 1]), (arr_5 [i_0 - 1]))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((+(((!3887631180) ^ (arr_6 [i_0] [i_1] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [1] [1] [1] |= (max((((8069 ? (arr_8 [i_4] [i_1 + 3]) : (arr_8 [i_0 - 1] [i_0 - 1])))), (((((8069416797885223193 ? 2090029612 : 1508601439))) ? (((1 ? (arr_14 [i_0 - 1] [1] [1] [1] [i_3] [i_3] [i_4]) : (arr_14 [16] [2] [16] [4] [4] [8] [4])))) : (max(-20, 16402685201559604881))))));
                                var_13 = ((-243 > (~4035629580)));
                                arr_16 [i_0 - 1] [i_0] [i_0] [12] |= ((!(arr_8 [i_0] [i_1])));
                                var_14 = ((((~((max(1, var_7))))) * (min(((((arr_8 [i_4] [i_4]) >= (arr_12 [i_0] [i_4] [i_2] [2] [i_2])))), (arr_0 [i_0])))));
                            }
                        }
                    }
                    var_15 = (min(var_15, (((+(max((!var_3), (arr_4 [i_1 + 2] [i_1 + 2]))))))));
                }
                arr_17 [i_0] [i_0] [i_0] = ((-1142678229 ? ((~((var_10 >> (1508439564 - 1508439540))))) : (((1 < (3129635561 | 13858199655622416516))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_16 |= 1;
                    var_17 = (((max(((-2093239088 ? 1492352195 : var_7)), (!1))) >= var_5));
                }
            }
        }
    }
    #pragma endscop
}

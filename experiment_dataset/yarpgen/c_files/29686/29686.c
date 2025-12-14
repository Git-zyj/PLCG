/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_12 = ((-(((arr_5 [i_3 - 1] [i_3 + 1] [i_3]) ? 1 : 0))));
                            var_13 = (max((((arr_3 [i_3] [i_3] [i_3 + 2]) ? (((arr_0 [i_2] [i_2]) ? (arr_1 [i_0]) : 17354823577670417177)) : 1758470746)), ((max(((-20 ? -120 : -1922010177999585215)), ((((arr_0 [i_2] [i_3 + 2]) <= 78))))))));
                        }
                    }
                }
                var_14 = ((arr_8 [i_0] [i_0] [1]) ? (max(57845, ((var_4 ? (arr_10 [12] [i_0] [i_0] [11] [i_1 + 1] [i_1]) : var_0)))) : ((1 ? 2047 : 30158)));
                var_15 = 1394470192;
                arr_12 [i_0] [i_1] [12] = (min((!1), -12972));
            }
        }
    }
    var_16 = (max(var_16, (((1758470754 ? (min(1, ((0 ? var_10 : 255)))) : (1 * var_2))))));
    var_17 = ((1 ? (((max(var_0, 2002667877)) | (212 - 233))) : (((((var_1 ? var_7 : var_3)) * (!32752))))));
    #pragma endscop
}

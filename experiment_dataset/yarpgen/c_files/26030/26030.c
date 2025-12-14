/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(-703808460, -20910));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((max(-var_7, ((var_9 ? (arr_0 [i_1 + 1]) : (arr_0 [i_0 + 1])))))) ? ((1 ? 1 : (arr_1 [i_0] [i_0]))) : (((var_3 ? (arr_1 [i_1 + 1] [i_0]) : var_7)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_17 = (((16777200 + var_10) / (arr_8 [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1])));
                            arr_9 [i_0] [6] [i_2] [i_0] [i_0] = 1641947319;
                        }
                    }
                }
                var_18 = ((((max(1, (1 * 4054141186)))) % (((arr_2 [i_0] [i_0]) ? -39 : (min(0, (arr_0 [i_0])))))));
                var_19 = 0;
                var_20 = ((~((-75 | ((max(26, 123)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            {
                arr_16 [i_4] [i_4] [i_4] = (((arr_11 [i_5 + 2]) - (!65)));
                var_21 = ((-120 >= ((var_1 ? (min(18446744073709551615, 1025941082)) : (arr_1 [i_5 + 2] [i_4])))));
            }
        }
    }
    var_22 |= var_7;
    var_23 = 228;
    #pragma endscop
}

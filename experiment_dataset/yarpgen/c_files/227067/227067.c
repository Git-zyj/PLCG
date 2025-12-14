/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((-58 + 2147483647) >> (255 - 228))) ^ ((((2593714475 == var_5) >= ((1 >> (41281503 - 41281473))))))));
    var_21 = (max(var_21, (1 * -119865950)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [9] [9] = ((((((((arr_2 [i_0] [i_1]) / 119865963)) / (-17 * var_5)))) * (((((arr_4 [i_0] [i_1]) / 14161106621976029649)) * (17334212580361763570 / -119865971)))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_22 ^= (((((((var_18 < var_17) >= (2565103239 & 84))))) / (5263665283797243062 | 20550)));
                    var_23 = (min(var_23, (((((((532046191115010479 - 4165295441) * (1 / -18101)))) & (((-8388901495658535557 / 119865970) * (119865971 / 9137884914814853181))))))));
                }
            }
        }
    }
    #pragma endscop
}

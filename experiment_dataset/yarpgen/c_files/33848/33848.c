/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = 127;
                    var_12 = ((-(((!(((var_0 << (var_4 - 8874)))))))));
                    var_13 -= (((max((var_0 - 4294967287), ((min(4133, 118))))) - 1));
                }
            }
        }
    }
    var_14 |= var_6;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            {
                arr_14 [4] [i_4 + 1] [16] = (((((arr_12 [i_4] [i_4 + 1] [i_4 + 3]) ? var_6 : var_7)) >= ((-118 & (max(113, 1392308770))))));
                var_15 -= (((-188 % 12258856986577354291) < (((min(8005, (arr_10 [13])))))));
                var_16 = (max(var_16, ((min((((-2147483647 - 1) + (arr_12 [i_4] [i_4 + 2] [i_4 + 1]))), (-1035807516 + 1847567336))))));
                arr_15 [i_4] = var_7;
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(var_0 >= var_3)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            {
                var_16 ^= ((-(min(0, 523776))));
                var_17 -= (arr_4 [i_0] [i_1] [i_0]);
            }
        }
    }
    var_18 = ((((((max(25537, 13528))) - ((var_14 ? var_10 : 676098129))))) ? -20303 : (((45219 ? var_11 : (-32767 - 1)))));
    #pragma endscop
}

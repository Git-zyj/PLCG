/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((~var_5) >= ((min(2042413244, -4611686018427387904)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((min(1, 10135900531777182216))))));
                var_18 = (((((((min(65532, var_4))) ? var_7 : 65532))) ? -5074933549808733327 : 11698676966524287618));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_19 = (((var_0 ? 1256942276 : 38)));
                    var_20 |= ((((((arr_12 [i_2] [i_2] [i_4] [i_3 - 1]) >> (((arr_13 [i_2] [i_3 - 2] [i_3 - 2] [i_3 - 2]) + 323733828))))) ? var_4 : ((min((arr_13 [i_2] [i_3 - 1] [i_3 - 1] [i_4]), ((123 ? 1256942269 : 3359120191)))))));
                }
            }
        }
    }
    var_21 ^= 41;
    #pragma endscop
}

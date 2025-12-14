/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((min((var_5 - var_11), var_5)) - ((((399690737889934255 > (var_10 > 18047053335819617360))))));
    var_16 = ((((min(((var_10 ? 253 : var_4)), var_0))) % (((((var_6 ? var_0 : 133))) ? var_11 : var_11))));
    var_17 = ((((var_4 < var_3) % (~var_5))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 = -108;
                                var_19 = -68;
                            }
                        }
                    }
                    var_20 = (max(var_20, 18047053335819617361));
                    arr_11 [i_0 - 2] = ((((-(133 != 123))) > (min(16, (min(32767, (arr_8 [i_0] [i_1] [4] [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}

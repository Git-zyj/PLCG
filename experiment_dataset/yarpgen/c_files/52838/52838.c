/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (4294967295 * 3470056809);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_16 += 3470056809;
                var_17 = (min(var_17, ((((3470056809 != 46) ? (~30720) : 1708401432)))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_18 = (((((var_0 ? 13217 : 46))) ? ((((min(1210086251, -2021564360230115677))) ? ((96 ? 0 : var_8)) : (-46 - var_3))) : (((3897164753 ? (-838915708 / 824910478) : (min(-3, 2967116309)))))));
                    var_19 &= ((((min(218, 0))) ? ((((57820 >= (~32767))))) : ((((min(0, 7719))) ? ((46 ? var_3 : 2021564360230115665)) : (1 + 2021564360230115677)))));
                    var_20 = (min(var_20, (((3807012819 ? 58036 : 31)))));
                }
                arr_8 [i_0] [i_0] = 8191;
                var_21 |= 3;
            }
        }
    }
    #pragma endscop
}

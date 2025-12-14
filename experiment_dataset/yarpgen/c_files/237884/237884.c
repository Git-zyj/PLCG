/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -65536;
    var_19 = (((((max(1, 0))) | var_10)));
    var_20 |= var_10;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = (((((~((-65541 / (arr_7 [i_0] [i_1] [i_2])))))) ? 130 : (((arr_2 [i_2]) ? 65536 : (max(0, var_2))))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((+(min((((arr_0 [i_0] [i_0]) ^ -17691)), (arr_4 [i_2] [i_1] [i_2])))));
                    var_22 = 9223372036854775807;
                }
            }
        }
    }
    var_23 = ((3310477018 ? 1 : (65536 >= 9571)));
    #pragma endscop
}

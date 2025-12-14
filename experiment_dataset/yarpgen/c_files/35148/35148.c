/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = 6917529027641081856;
                var_20 = ((((54840892994194673 ? (min(-40, (arr_3 [6]))) : (arr_3 [i_0 - 1]))) & (max((arr_3 [i_0 - 2]), (arr_3 [i_0 + 1])))));
                var_21 += (54840892994194673 / 54840892994194673);
                arr_5 [i_0] = (((((min((arr_4 [i_0] [i_0] [i_1]), (arr_4 [i_0 + 1] [i_0 + 1] [i_1]))) + (arr_2 [i_0] [i_0 + 1]))) + (((((((arr_4 [2] [i_1] [16]) != (arr_1 [i_1] [i_0])))) - (!2253103114))))));
                arr_6 [i_0] [i_0] = ((((max((max((arr_0 [i_1]), 161562618)), (arr_3 [i_1])))) ? (min((arr_0 [i_0]), (arr_0 [i_0 + 1]))) : 4294967295));
            }
        }
    }
    var_22 = (((-var_14 + 2147483647) >> ((((0 + var_1) <= ((4294967295 << (var_7 - 14))))))));
    #pragma endscop
}

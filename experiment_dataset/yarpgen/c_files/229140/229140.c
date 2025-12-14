/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = (((var_3 & 83) ? ((max(var_6, 14670))) : ((50871 << (-3751075274392661830 + 3751075274392661831)))));
                var_11 = (max(var_11, (((-((((((var_1 ? 83 : 1267))) && (((arr_3 [i_0] [4]) > -622411064793352080))))))))));
                var_12 = (arr_5 [i_0 - 1] [i_0 - 1] [19]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                arr_11 [i_3] [i_3] [i_2] = (arr_4 [i_2] [i_3]);
                arr_12 [i_2] [i_2] = (((arr_10 [i_2] [i_2]) > (((-75 + 2147483647) >> (-21 + 30)))));
                arr_13 [i_2] [0] [i_3] = (min(var_9, ((47 << (-113 + 127)))));
                var_13 = (max((~var_0), (max((~50861), ((var_7 ? 47 : (arr_1 [i_2] [i_2])))))));
            }
        }
    }
    #pragma endscop
}

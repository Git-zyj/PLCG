/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((((min(1, 4294967295)) | (~-117)))))));
                var_15 = ((~((~(arr_1 [i_1] [i_0])))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_16 = (arr_5 [i_1] [i_1]);
                    var_17 = ((((min((arr_4 [i_0] [i_1] [i_2]), 1))) | ((max((min((arr_0 [i_1]), (arr_1 [i_0] [i_2]))), var_12)))));
                }
                var_18 = (min(((((((~var_6) + 2147483647)) << (((var_1 + 148) - 30))))), (arr_0 [i_0])));
                var_19 = ((!(~-25876)));
            }
        }
    }
    var_20 = var_11;
    var_21 = var_7;
    #pragma endscop
}

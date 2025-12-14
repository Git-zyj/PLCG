/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= -4353;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_17 = 3623114405;
                            var_18 += 3623114403;
                            var_19 = (min(var_19, -1));
                            var_20 = ((18014398509481983 ? 671852883 : (-2147483647 - 1)));
                        }
                    }
                }
                arr_11 [i_1] = (((((~(~3623114413)))) ? 47 : (!231)));
            }
        }
    }
    #pragma endscop
}

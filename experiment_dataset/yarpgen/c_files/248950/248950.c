/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = min((min(-1, (min(65535, var_5)))), var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = 0;
                            arr_10 [i_0] [8] [i_2 - 1] [i_0] [i_0] [i_3] = (((((-((min(var_4, (arr_6 [i_0] [i_0] [i_0]))))))) ? var_13 : (max(((4095 ? var_9 : var_13)), (!var_15)))));
                        }
                    }
                }
                var_21 = (max(var_21, ((((~((15706653344758824236 >> (15706653344758824236 - 15706653344758824197)))))))));
                var_22 = (min(var_22, (((((((min(1, (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((17502 ? var_8 : 33901))) : (((((var_3 ? var_11 : var_3))) ? -17505 : (((var_0 + 9223372036854775807) << (((arr_5 [i_0]) - 2104354511730022020)))))))))));
                arr_11 [i_0] = 65535;
            }
        }
    }
    #pragma endscop
}

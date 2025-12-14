/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((var_8 || (var_1 & 29482)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_11 = ((((max(((var_0 ? (arr_0 [i_0] [i_3]) : var_8)), (((16383 ? 1 : (arr_6 [i_0] [i_1] [i_2] [i_3]))))))) ? (2278372828928843047 ^ var_0) : ((((!((-23220 != (arr_1 [i_3])))))))));
                            var_12 += (arr_0 [i_1] [i_0]);
                            var_13 = ((((0 << (((~2047) - 4294965224)))) == (var_6 / var_9)));
                        }
                    }
                }
                var_14 *= (((((arr_5 [i_0] [i_1] [i_1]) ? 23225 : (arr_1 [i_0]))) << (var_7 - 15963035374570669058)));

                /* vectorizable */
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    var_15 = var_7;
                    var_16 = (~-23220);
                }
            }
        }
    }
    var_17 = -var_3;
    var_18 = var_7;
    #pragma endscop
}

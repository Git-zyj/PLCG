/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = arr_2 [i_1];
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] [i_3] [i_1] = (min((!var_2), (arr_6 [i_1] [i_1] [i_1 + 1])));
                                arr_16 [i_1] [i_4] = 60;
                            }
                        }
                    }
                }
                var_16 = (((min((arr_8 [i_0] [i_1 + 1] [8] [8] [1]), ((((arr_11 [i_0] [i_1 - 1] [i_0] [i_0 + 2]) >= 1125899369971712)))))) ? 6649296209055857056 : -119);

                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    var_17 = (max((min(1, ((124 ? 5783189160892027384 : var_9)))), (max(-54, 16154088041997063775))));
                    var_18 *= min((min(((((arr_8 [i_0 + 2] [i_1] [i_1] [i_1] [i_1 + 1]) % (arr_10 [i_0] [i_0])))), (max(2382260545657207078, 15659440111758862535)))), (min(((var_10 ? var_2 : 18446744073709551608)), (arr_6 [15] [15] [12]))));
                    arr_19 [i_1] [i_1] [i_1] = (~16064483528052344546);
                    var_19 = ((((max(5955, ((-(arr_17 [i_0 - 1] [i_1 + 1] [i_0] [i_1])))))) != (min((((0 | (arr_17 [i_0 + 2] [i_1 - 1] [i_5] [i_1])))), (max(0, (arr_2 [i_1])))))));
                    var_20 = (var_8 & -8);
                }
            }
        }
    }
    var_21 = var_7;
    var_22 = (max(var_22, (((~((max(-13, (!1)))))))));
    #pragma endscop
}

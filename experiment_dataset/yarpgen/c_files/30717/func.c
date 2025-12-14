/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30717
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 8; i_3 += 1) 
                    {
                        for (int i_4 = 4; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] = ((/* implicit */long long int) (!(arr_7 [i_4] [i_1] [i_3 + 3] [i_3] [i_0])));
                                var_20 = ((/* implicit */unsigned char) var_16);
                                var_21 = ((/* implicit */short) (+(((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_14))));
                    var_22 *= ((/* implicit */_Bool) ((unsigned char) (((+(((/* implicit */int) var_14)))) << (((((/* implicit */int) ((short) var_16))) - (13116))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 2) 
                    {
                        arr_16 [i_0] [i_0] [i_1] = ((/* implicit */int) var_15);
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [(short)9] [i_0] [i_5] [i_0]))) | (arr_15 [i_1] [i_1] [i_1] [i_5])));
                    }
                    var_24 = arr_8 [i_0] [i_2];
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) var_13)))));
    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_0))));
    var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
}

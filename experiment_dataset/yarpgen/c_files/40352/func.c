/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40352
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
    var_10 = ((/* implicit */unsigned int) var_8);
    var_11 = ((/* implicit */int) (-((((+(var_7))) / (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
    var_12 = ((/* implicit */unsigned long long int) var_5);
    var_13 = (~(((/* implicit */int) (_Bool)1)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) (+(var_1)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2]);
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (~(((/* implicit */int) arr_2 [i_2] [i_0])))))));
                                var_17 = (-(((/* implicit */int) (_Bool)1)));
                            }
                        } 
                    } 
                    var_18 *= ((/* implicit */unsigned int) ((arr_1 [i_1 - 2] [i_1 - 2]) & (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                    arr_11 [i_1] [7ULL] [i_1] = ((/* implicit */long long int) var_1);
                    var_19 = ((/* implicit */short) arr_0 [i_0]);
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_6 [i_1 - 1] [i_1] [(unsigned short)2] [i_0]))));
                }
            } 
        } 
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199347
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) min((var_15), ((~(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4] [i_0]))) / (3525366467721384324LL)))))));
                                var_16 = ((/* implicit */long long int) max((var_16), (var_6)));
                                var_17 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [20LL] [i_3 - 1] [i_3] [i_2] [i_1 - 2] [i_0 - 1]))) - (4294967295U))) - (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_8 [i_0] [4U] [i_2] [i_2] [i_3 + 1] [i_4])))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
                }
            } 
        } 
        var_18 |= ((/* implicit */signed char) var_13);
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) (-((~(((/* implicit */int) (_Bool)0))))));
                    arr_20 [i_6] [i_0] [8U] = ((/* implicit */unsigned int) (-((+(((((/* implicit */long long int) ((/* implicit */int) (short)-6869))) / (var_1)))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned char) (+(var_6)));
}

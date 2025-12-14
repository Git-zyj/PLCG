/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25019
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
    for (int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1 - 1] [i_2] = ((/* implicit */unsigned int) ((_Bool) (unsigned short)36642));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_14 ^= ((/* implicit */int) min((((unsigned char) var_3)), (min((var_5), (((/* implicit */unsigned char) (_Bool)1))))));
                                var_15 += ((/* implicit */signed char) min(((_Bool)1), ((_Bool)1)));
                                var_16 = ((/* implicit */short) (_Bool)1);
                                var_17 *= ((/* implicit */short) (+((+(var_8)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 ^= min((((/* implicit */unsigned char) min(((_Bool)1), ((_Bool)1)))), (var_1));
    var_19 = ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (max((var_10), (((/* implicit */unsigned short) var_11)))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2564
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
    var_16 -= ((/* implicit */_Bool) ((max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (var_10)))), (var_6))) << (((((unsigned int) -9050213402978954131LL)) - (771085421U)))));
    var_17 = ((/* implicit */unsigned int) min((((unsigned short) ((var_12) < (var_11)))), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)248))) < (7842263666869223665LL))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_18 = (+(((/* implicit */int) ((short) arr_2 [i_0] [(unsigned short)11] [i_0]))));
                            arr_9 [4] [i_1] [i_2] [i_2] = ((/* implicit */int) min((-8280858017523820338LL), (-8280858017523820367LL)));
                        }
                    } 
                } 
                arr_10 [i_0] [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) -447161725)), (min((9050213402978954131LL), ((~(-9050213402978954131LL)))))));
                var_19 -= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((max((var_12), (((/* implicit */int) arr_3 [i_0] [i_1])))) < (((/* implicit */int) arr_1 [i_0] [i_1]))))), (-9050213402978954151LL)));
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_13);
}

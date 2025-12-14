/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47500
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
    var_20 = (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) var_3)) : (var_9)))), (max((((/* implicit */long long int) (signed char)65)), (-4487945394553939071LL)))))));
    var_21 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)60))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_7 [(signed char)3] = ((short) ((((/* implicit */unsigned int) ((int) -1917185509))) <= (max((((/* implicit */unsigned int) (_Bool)1)), (var_18)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_22 = var_17;
                            arr_13 [i_2] = ((/* implicit */unsigned int) (+((((~(var_6))) & (((/* implicit */long long int) (~(((/* implicit */int) (signed char)44)))))))));
                            var_23 &= ((/* implicit */unsigned short) max(((((-(arr_8 [i_1]))) | (((/* implicit */long long int) max((arr_9 [i_0] [i_1 - 1] [i_3]), (((/* implicit */unsigned int) var_14))))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 1] [i_3] [i_1 + 1] [i_1 - 1] [i_1 + 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 += ((/* implicit */signed char) ((unsigned long long int) var_17));
}

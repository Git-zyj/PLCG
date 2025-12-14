/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47082
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
    var_11 -= ((/* implicit */_Bool) (signed char)56);
    var_12 = ((/* implicit */signed char) max((((var_10) | ((~(var_9))))), (((/* implicit */long long int) min((var_2), (min((((/* implicit */unsigned int) (short)-11594)), (731574137U))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_13 ^= ((/* implicit */signed char) min(((+(((((/* implicit */_Bool) var_8)) ? (var_2) : (arr_5 [i_1]))))), (((/* implicit */unsigned int) (unsigned char)53))));
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (-((-((+(var_10))))))))));
                    arr_8 [i_0] [(unsigned char)6] [i_2] = var_2;
                    var_15 *= ((/* implicit */signed char) ((min((var_10), (((/* implicit */long long int) ((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) / (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-123)))))));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40008
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
    var_14 = ((/* implicit */unsigned long long int) (_Bool)0);
    var_15 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (1601235697))))))) ^ (((min((((/* implicit */int) var_4)), (1073740800))) - (1073740805)))));
    var_16 &= ((/* implicit */unsigned char) 2096896);
    var_17 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-23737)) : (((/* implicit */int) var_13))))), (max((((/* implicit */unsigned long long int) var_10)), (var_1)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_18 ^= min((-4810527145608224406LL), (((/* implicit */long long int) -1073740807)));
                    arr_8 [i_0] [i_2] = (+(((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_11)), ((unsigned short)11499))))) ^ (var_5))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_19 = 3213897993155572739LL;
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (arr_7 [i_0] [i_2] [i_3])))) ? (((arr_0 [i_3] [i_3]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))) : (min((arr_7 [i_0] [i_2] [i_3]), (((/* implicit */unsigned long long int) var_11)))))))));
                    }
                }
            } 
        } 
    } 
}

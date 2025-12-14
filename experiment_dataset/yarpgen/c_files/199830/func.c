/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199830
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_20 = min((max((var_19), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) ((unsigned char) (short)32767))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((((/* implicit */_Bool) (short)-30374)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_7 [i_3] [i_2] [i_1] [i_0])))))))) & ((-(max((((/* implicit */long long int) var_8)), (-6850966258700898398LL)))))));
                            arr_10 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */short) ((1408045410) != (((/* implicit */int) (short)9525))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (signed char)-37))));
                var_23 -= ((/* implicit */_Bool) ((1073741808) + (((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-97)), (var_15)))) != (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) -1769550153)) : (-6850966258700898384LL))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_10)) : (var_7)))) ? (((var_13) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-20186))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_12)))))))) ? (((((((/* implicit */_Bool) 2043096031U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (810803768U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (((/* implicit */short) (signed char)-56)))))))) : (var_13)));
}

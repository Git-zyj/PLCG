/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237088
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
    var_12 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) (unsigned char)24)))))) - (((/* implicit */int) (short)25))));
    var_13 ^= ((/* implicit */int) var_11);
    var_14 = ((/* implicit */unsigned char) min((var_14), (var_4)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((-5341317644106205040LL), (((/* implicit */long long int) arr_5 [i_0]))))) ? (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (short)26374)))) : (((/* implicit */int) (unsigned short)0)))) * (((int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_8)))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((611475780U) >> (((/* implicit */int) ((short) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) var_9))))))));
                                var_17 = ((/* implicit */short) arr_8 [i_1] [i_1]);
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */short) ((min((((unsigned long long int) (-2147483647 - 1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-40)) || (((/* implicit */_Bool) (unsigned char)176))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) (unsigned short)0))))))));
            }
        } 
    } 
}

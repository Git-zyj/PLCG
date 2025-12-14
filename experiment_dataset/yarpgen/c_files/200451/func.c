/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200451
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_6))));
    var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_9)))) & (((/* implicit */int) (_Bool)0))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1756207984216345447LL)))))))) ? (((((/* implicit */_Bool) var_15)) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))) : (var_14))) : (((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) ((_Bool) (-(var_10))))) : (((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && ((_Bool)1)))) | (((/* implicit */int) arr_2 [i_0 + 1]))))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) max((arr_1 [(signed char)9]), (((/* implicit */short) var_16))))) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))) | (min((((/* implicit */unsigned long long int) max((var_5), (var_13)))), (2461361310301477108ULL))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) ((max(((_Bool)1), (((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) (signed char)-50)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_2] [i_1]))))) ? (((((16105211976196800599ULL) & (((/* implicit */unsigned long long int) var_7)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80))))) : (((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (signed char)-82)), (var_7))), (((/* implicit */long long int) (_Bool)1)))))));
                            var_24 = ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)64)) / (((/* implicit */int) var_16))))) : (min((((/* implicit */unsigned int) var_8)), (var_4)))))));
                            var_25 = ((/* implicit */signed char) var_2);
                        }
                    } 
                } 
            }
        } 
    } 
}

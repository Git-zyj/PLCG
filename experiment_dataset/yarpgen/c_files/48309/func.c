/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48309
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
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (+(max(((+(18446744073709551601ULL))), ((+(18446744073709551601ULL))))))))));
    var_12 &= min(((~(min((((/* implicit */unsigned long long int) (unsigned char)199)), (35184372084736ULL))))), (((/* implicit */unsigned long long int) ((max((var_9), (((/* implicit */long long int) var_0)))) ^ (((/* implicit */long long int) var_7))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_13 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (signed char)75)))), ((-(((/* implicit */int) (unsigned char)235))))))), (max((18446744073709551601ULL), (((/* implicit */unsigned long long int) (signed char)-95))))));
                            var_14 = ((/* implicit */unsigned int) min(((short)28492), (((/* implicit */short) (_Bool)1))));
                            var_15 = ((/* implicit */short) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) max(((+(((/* implicit */int) arr_2 [i_0] [(_Bool)1])))), ((-(2036187776))))))));
                            arr_10 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */signed char) arr_1 [(_Bool)1])), ((signed char)7))))))) ? (((/* implicit */unsigned long long int) (~(min((arr_3 [i_0] [i_2]), (arr_5 [i_2])))))) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) ^ (1ULL)))))));
                            var_16 |= ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
                var_17 &= ((/* implicit */_Bool) (~(((/* implicit */int) max(((short)32), (((/* implicit */short) (signed char)(-127 - 1))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)66))))) + (max((var_6), (((/* implicit */unsigned int) (_Bool)1))))))) ? ((~(var_9))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        for (short i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            {
                arr_16 [i_4] = (!(((-2044246196300600572LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)174))))));
                var_19 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4] [i_4] [i_5])) ? (arr_3 [(_Bool)1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) & (((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_13 [i_5]), ((_Bool)1)))))))));
                arr_17 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) max((arr_13 [i_4]), (arr_13 [i_5]))))));
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */int) (signed char)-67)), (-2036187777)))), (max((((/* implicit */long long int) arr_15 [i_4] [i_5])), ((-9223372036854775807LL - 1LL))))))) || (((/* implicit */_Bool) min((max((arr_12 [i_4] [i_4]), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) (~(536870911U))))))))))));
            }
        } 
    } 
}

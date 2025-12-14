/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33836
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4177920)) && (((/* implicit */_Bool) (-(-4177893)))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42985))) | (var_6))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_3] [i_0] [i_0]))))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max(((unsigned short)11126), ((unsigned short)0)))))))));
                            arr_11 [i_0] [(unsigned char)2] [(_Bool)1] [i_0] [i_2] [i_3] = var_10;
                            var_16 = ((/* implicit */long long int) 62914560);
                            arr_12 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) arr_3 [i_0 - 1] [i_0]));
                            var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((var_12), (((/* implicit */unsigned char) max(((signed char)-74), (arr_6 [0] [i_1] [20] [i_1]))))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)69)), (-8779617010218410947LL)))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) min((min((max((62914567), (((/* implicit */int) (unsigned short)54704)))), (((/* implicit */int) var_10)))), (((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) (short)29511)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (-((~(((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
    var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_12))));
}

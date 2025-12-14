/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25294
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
    var_16 = ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (max((var_11), (var_2))) : (var_3));
    var_17 = ((/* implicit */signed char) 10075067035637257537ULL);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_18 *= min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-73)))))))));
                                arr_15 [0ULL] [3ULL] [i_0] = 3334362836648598309ULL;
                                arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) min(((+((+(((/* implicit */int) arr_9 [(signed char)18] [i_1] [i_1] [13ULL] [i_1] [i_1])))))), (((((((((/* implicit */int) arr_0 [i_3] [i_2])) + (2147483647))) << (((((/* implicit */int) (signed char)127)) - (127))))) << ((((-(((/* implicit */int) (signed char)-124)))) - (124)))))));
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_1] = ((/* implicit */unsigned long long int) var_4);
                    var_19 ^= ((/* implicit */signed char) arr_14 [i_0] [i_1] [15ULL] [i_1] [i_2]);
                    var_20 = 8371677038072294083ULL;
                    var_21 ^= ((/* implicit */signed char) (-(((/* implicit */int) ((711472168924135186ULL) >= (7926781485315659496ULL))))));
                }
            } 
        } 
    } 
}

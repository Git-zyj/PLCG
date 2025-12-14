/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28252
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
    var_18 -= ((/* implicit */int) -7525770731254250277LL);
    var_19 = max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((14373890610973609245ULL), (((/* implicit */unsigned long long int) (unsigned char)215)))))))), (var_1));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned int) min((((/* implicit */unsigned long long int) (unsigned short)16602)), (var_2))))), (min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) 14373890610973609265ULL)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1 + 1])) : (((/* implicit */int) (signed char)(-127 - 1))))))))));
                var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(-9223372036854775781LL)))) != (arr_3 [i_1 + 1] [i_1 + 1]))))) : ((-((~(arr_2 [(signed char)16] [i_0])))))));
                var_22 = ((/* implicit */long long int) arr_0 [i_1 - 1] [i_1 - 1]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 21; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((4072853462735942376ULL) >> (((var_13) - (4396899189314524218LL))))))));
                            var_24 += ((/* implicit */long long int) (-(min((arr_3 [i_2 + 1] [i_1 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)49779)) ^ (((/* implicit */int) var_6)))))))));
                            var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_2)))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_6 [i_0]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) var_14);
}

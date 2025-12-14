/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23662
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((max((((/* implicit */unsigned int) arr_2 [i_0])), (var_8))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))))) ? ((((_Bool)1) ? (17981331669252890881ULL) : (((/* implicit */unsigned long long int) 1362617077U)))) : (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)1)))) * (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_0])))))))));
                var_12 = ((/* implicit */_Bool) var_6);
                arr_7 [i_0] [3U] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) var_4)), (var_6)))) & (((/* implicit */int) arr_4 [i_1] [i_1] [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 12; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            {
                var_13 -= ((/* implicit */unsigned int) (+(((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_6))))))))));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (min((((/* implicit */unsigned long long int) var_10)), (((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [(unsigned char)7] [i_2]))))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_10)) << (((var_8) - (3788636121U))))))))));
                var_15 = ((/* implicit */_Bool) var_5);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_0);
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((unsigned long long int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */short) var_1)))))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))));
}

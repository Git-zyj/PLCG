/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223362
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_17 = max((min((((/* implicit */long long int) var_14)), (2676617670740293632LL))), (((max((var_6), (((/* implicit */long long int) (_Bool)1)))) | (196035861734504954LL))));
                    var_18 = ((/* implicit */unsigned short) min(((-(-2676617670740293624LL))), (max((((var_12) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-34))))), (((/* implicit */long long int) (_Bool)1))))));
                    var_19 = ((/* implicit */long long int) var_4);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) -8239180274103567623LL)) == (11099653462577433816ULL))))))) - (((var_4) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (9223372036854775802LL)))) : (min((3141779713807281955ULL), (((/* implicit */unsigned long long int) (short)-7805))))))));
                var_21 = ((/* implicit */long long int) (~(min((var_15), (((/* implicit */unsigned long long int) 1933662291170372273LL))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) -1LL))));
}

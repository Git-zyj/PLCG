/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45183
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) 9223372036854775807LL);
                    var_16 = ((/* implicit */unsigned short) (signed char)69);
                    var_17 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_0)))) ? (max((((/* implicit */unsigned long long int) (~(arr_0 [i_0])))), (4795392350635958049ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), ((signed char)-64)))))));
                    var_18 |= ((/* implicit */unsigned short) var_7);
                    var_19 = ((/* implicit */short) (signed char)69);
                }
            } 
        } 
    } 
    var_20 += var_8;
}

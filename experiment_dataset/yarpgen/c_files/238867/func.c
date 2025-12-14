/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238867
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
    var_15 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_14)) ? ((-(var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)89)))))))));
    var_16 = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */unsigned int) -972487975)) : (var_6)))))));
    var_17 *= ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (-(820456437U))))) ? (arr_0 [19LL] [i_1]) : (((/* implicit */int) var_13))));
                var_19 *= ((/* implicit */signed char) min((arr_0 [i_0 - 3] [i_0 - 3]), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (12952037398661425147ULL))))));
                var_20 = ((/* implicit */long long int) var_2);
                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_4 [i_0])))));
                var_22 = ((/* implicit */short) arr_2 [i_0 - 1]);
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215092
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
    var_17 = ((/* implicit */_Bool) ((unsigned long long int) var_1));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)76)) + (((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */int) (short)-5033)) : (((/* implicit */int) (signed char)80)))) : (((/* implicit */int) ((((/* implicit */int) (short)-5030)) <= (((/* implicit */int) (signed char)84))))))) < (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))));
                var_18 = ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))))) ? (((/* implicit */unsigned long long int) 5942951351157793285LL)) : ((~(268435455ULL))))) & (((/* implicit */unsigned long long int) 274877906943LL)));
                arr_6 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
                arr_7 [i_0] [i_0] = ((/* implicit */int) (+((~(((unsigned int) arr_4 [i_0] [i_0] [i_0]))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((15419102278597637179ULL) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0] [i_1])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_8);
}

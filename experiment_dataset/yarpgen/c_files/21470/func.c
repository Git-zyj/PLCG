/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21470
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
    var_16 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) arr_1 [i_0])))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (signed char)-1))))))) : (((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)32767)))) : (((unsigned long long int) (short)32754))))));
                arr_7 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)80)))) ? (max((3863790361U), (((/* implicit */unsigned int) (short)14310)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)32761), ((short)14313))))) : (var_5)));
            }
        } 
    } 
}

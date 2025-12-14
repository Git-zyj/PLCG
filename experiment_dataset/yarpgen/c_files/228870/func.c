/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228870
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_2] = (!(((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 3] [i_2 - 1])), (arr_6 [i_1 + 1] [i_1 + 3] [i_2 - 1])))));
                    arr_8 [i_2] [i_1] [i_1 + 1] [i_2] = ((/* implicit */unsigned long long int) (signed char)87);
                    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_2 - 1] [i_1 + 1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (-(((/* implicit */int) (short)19004))))))) : (((((/* implicit */long long int) ((/* implicit */int) min(((short)-6040), ((short)-6029))))) % (-6920381854815848326LL))))))));
                    var_12 = ((/* implicit */_Bool) (short)-6055);
                }
            } 
        } 
    } 
    var_13 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned long long int) (short)28129))) ? (((/* implicit */unsigned int) var_9)) : (((unsigned int) var_1)))) < (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
}

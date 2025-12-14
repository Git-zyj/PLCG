/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42572
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
    var_17 = ((/* implicit */unsigned char) ((unsigned short) (short)32752));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */_Bool) ((short) (short)32752));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) 189072173);
                    arr_9 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) var_15))))) / (max((((/* implicit */long long int) 3080517754U)), (arr_2 [i_2 + 1] [i_2 + 1])))));
                    arr_10 [i_0] [i_1] [i_0] [i_2 + 1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32753))))), (18446744073709551601ULL)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) var_4);
}

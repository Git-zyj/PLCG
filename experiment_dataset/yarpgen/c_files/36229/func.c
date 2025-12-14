/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36229
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
    var_11 = ((/* implicit */signed char) max((var_2), (((/* implicit */int) (short)-17514))));
    var_12 = ((/* implicit */unsigned int) (short)17498);
    var_13 = ((/* implicit */long long int) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min(((short)-17518), ((short)14336))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_12 [i_0 - 1] [i_1] [i_0 - 1] = max((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */short) arr_8 [i_0 + 1] [i_0 - 1])));
                    var_14 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_7 [(short)5] [i_2] [i_2]) % (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 - 3])) < (var_9)))))))));
                    arr_13 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((-1) < (-27)));
                }
            } 
        } 
    } 
}

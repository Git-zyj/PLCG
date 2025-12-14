/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212538
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) arr_0 [i_0 - 1]);
        var_13 = ((/* implicit */signed char) max(((short)21760), (var_5)));
    }
    var_14 += ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned short)645)) ? (((/* implicit */int) (short)24196)) : (((/* implicit */int) (unsigned short)34401)))));
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_12 [12U] [i_2] [i_2] |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned short) arr_4 [i_1 - 1]))), (((unsigned long long int) arr_6 [i_1 + 2]))));
                    var_15 = ((/* implicit */signed char) arr_4 [i_1 - 1]);
                    arr_13 [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) min(((short)-28312), ((short)21760))));
                    arr_14 [i_3] [(short)8] [(short)8] [i_1] &= ((/* implicit */short) ((unsigned short) arr_8 [i_3] [i_2] [i_3] [i_1 + 1]));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) (unsigned char)169);
    var_17 += ((/* implicit */short) var_4);
}

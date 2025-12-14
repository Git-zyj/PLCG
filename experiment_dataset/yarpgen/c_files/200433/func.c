/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200433
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
    var_16 = ((/* implicit */unsigned short) var_12);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_17 += (!(((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned int) (signed char)10))), (27LL)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (long long int i_3 = 1; i_3 < 14; i_3 += 2) 
            {
                {
                    var_18 ^= ((/* implicit */long long int) arr_6 [i_2] [i_2] [i_3]);
                    var_19 += ((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((short)-1296), ((short)-23130))))) ^ (0U))));
                }
            } 
        } 
        arr_11 [i_1] = ((/* implicit */_Bool) ((unsigned int) arr_5 [i_1] [i_1]));
    }
    var_20 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (short)23130)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (7528665283466760864ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
    var_21 = ((/* implicit */unsigned long long int) ((_Bool) (-(183905876758031942ULL))));
    var_22 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (signed char)70))) ? (((/* implicit */int) ((_Bool) var_13))) : (((/* implicit */int) var_5))))), (((unsigned long long int) ((var_13) ? (2377081132U) : (((/* implicit */unsigned int) var_10)))))));
}

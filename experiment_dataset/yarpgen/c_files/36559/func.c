/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36559
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
    var_15 = ((/* implicit */signed char) (+(576179277326712832LL)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((9223372036854775798LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) ? (min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) ((signed char) (signed char)111))))) : (((/* implicit */int) (signed char)88))));
                    arr_12 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_1 + 3] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) (unsigned short)62981)))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)62981)))))) << (max((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
}

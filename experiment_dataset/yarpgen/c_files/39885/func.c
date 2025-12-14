/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39885
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
    var_17 = max((8887280909059445255LL), (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (3116582434U)))), (((((/* implicit */int) (short)-16169)) + (((/* implicit */int) (unsigned char)20))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_0] [(unsigned short)3] [12] = arr_5 [i_0] [i_0] [i_0];
                var_18 += ((/* implicit */unsigned int) min((max((((int) -4704742350375042657LL)), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)-98))));
                arr_7 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 3116582446U)))))));
                arr_8 [9] [i_1] |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1178384850U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) : (3116582434U)))) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) (short)-9449)))), (((/* implicit */int) max(((unsigned char)71), (((/* implicit */unsigned char) (signed char)41)))))));
            }
        } 
    } 
}

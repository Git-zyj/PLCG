/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206858
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? ((~(((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))) : (((/* implicit */long long int) max(((+(((/* implicit */int) (short)-18443)))), (((/* implicit */int) var_10)))))));
    var_20 = ((/* implicit */unsigned char) ((var_9) ? (((var_14) % (((/* implicit */long long int) ((/* implicit */int) (short)32745))))) : (((/* implicit */long long int) (~(((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_2)) - (215))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((short) (~(((/* implicit */int) ((short) arr_4 [i_0] [i_0] [i_0]))))));
                    arr_9 [17LL] [i_1] [i_2] = ((unsigned char) (~(arr_6 [i_2 - 1])));
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-18443))));
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((arr_5 [i_0] [i_1] [(signed char)4]), (((/* implicit */unsigned int) var_12))))) ? (576459652791795712ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)127))))))));
                    var_22 = ((/* implicit */unsigned int) var_15);
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219644
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((((/* implicit */int) var_5)) << (((281474976710655LL) - (281474976710639LL)))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) min((var_18), (((/* implicit */unsigned long long int) (short)-1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6566116288428321212LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0])))))))));
                    var_21 += ((/* implicit */unsigned long long int) -6566116288428321213LL);
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) (((((~(((((((/* implicit */int) (short)-1)) + (2147483647))) << (((3584594367U) - (3584594367U))))))) + (2147483647))) >> (((((((/* implicit */int) var_1)) << (((arr_1 [i_0] [i_0]) - (18294949265458973787ULL))))) - (4065210)))));
    }
    var_23 = ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
    var_24 = ((((/* implicit */unsigned long long int) var_16)) < (min(((-(9089687154797798465ULL))), (((/* implicit */unsigned long long int) var_10)))));
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_7))))), (((var_13) | (var_13)))))) || (((/* implicit */_Bool) var_2))));
}

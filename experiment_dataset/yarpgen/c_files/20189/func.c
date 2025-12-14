/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20189
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (((_Bool)0) ? (((((/* implicit */_Bool) 2847918978U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)30611)))) : (((((/* implicit */_Bool) 5871374260252139935LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))))) : (1447048318U)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_1] [11]), (((/* implicit */signed char) ((1447048326U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))))) ? (((/* implicit */long long int) 1447048318U)) : (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3229712351181429622ULL)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (unsigned short)45293))))) : (-5871374260252139936LL)))));
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((+(((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) (_Bool)0))))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (unsigned char)251))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) (-((+(((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) var_6))))))));
    var_16 = ((/* implicit */_Bool) var_0);
    var_17 = ((/* implicit */signed char) var_5);
}

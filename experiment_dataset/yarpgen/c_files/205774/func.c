/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205774
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
    var_14 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)19669))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) | (9170123499567438043LL)))))));
    var_15 = ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) ((((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39228))) >= (4294967277U)))))) <= (((/* implicit */int) (short)19669))));
                arr_7 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((short) var_3));
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_1 [i_0] [i_0]))))) | (((/* implicit */int) ((_Bool) var_10)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)46077))))) ? (((int) (_Bool)0)) : (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) (unsigned char)94)))))))) : (max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)94))))), (((unsigned int) var_12))))));
                var_18 = ((/* implicit */unsigned char) (short)30206);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (_Bool)1);
}

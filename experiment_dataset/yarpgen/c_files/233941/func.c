/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233941
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 6664458736227460739LL)))))))) ? (((int) -680639087)) : (((/* implicit */int) (_Bool)1))));
    var_13 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((((/* implicit */int) var_2)) < (((/* implicit */int) var_6)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            arr_4 [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((max((-6664458736227460742LL), (((/* implicit */long long int) (unsigned short)65535)))) == ((-9223372036854775807LL - 1LL)))))) / (max((((((/* implicit */_Bool) 9919048917459796934ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38003))) : (-6664458736227460744LL))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)0)))))))));
            var_14 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) -2475580451482768965LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)119))))));
            var_15 = ((/* implicit */long long int) (~(-1120708326)));
        }
        var_16 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (+(7390488686475727529LL)))) ? (max((((/* implicit */long long int) (signed char)-1)), (-8028481275217078176LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0] [i_0])))))))));
    }
}

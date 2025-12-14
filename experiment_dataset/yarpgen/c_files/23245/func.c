/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23245
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) max((((/* implicit */long long int) arr_3 [i_1])), (var_0)))))) - (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)24576))))) : (max((((/* implicit */unsigned int) var_2)), (var_4)))))));
                var_14 = ((/* implicit */int) var_10);
                var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [18])) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) min((((/* implicit */short) var_5)), (var_1)))) : (((/* implicit */int) ((((/* implicit */_Bool) 1680787014)) && ((_Bool)1))))))) ? (((((/* implicit */int) var_13)) * (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)18)) <= (((/* implicit */int) arr_4 [(unsigned char)12])))))));
                arr_6 [i_0] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1]))))), (min((var_12), (((/* implicit */unsigned long long int) 65520))))));
            }
        } 
    } 
    var_16 *= ((/* implicit */unsigned short) (short)28758);
    var_17 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (signed char)62)) ? (var_10) : (((/* implicit */unsigned long long int) -234257779442517640LL)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)19)), ((unsigned short)13))))))))));
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (+(((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) var_4))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13089))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_3))))))))))));
}

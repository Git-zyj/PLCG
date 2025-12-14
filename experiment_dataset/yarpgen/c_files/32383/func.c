/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32383
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_19 |= ((/* implicit */short) ((min((((/* implicit */long long int) var_18)), (arr_0 [(unsigned char)9]))) < ((-(arr_2 [i_0] [i_0] [i_0 + 1])))));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 22U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0))))))) ? ((~(((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_1 + 1] [i_0])))))) : (((/* implicit */int) var_18)))))));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((arr_2 [i_0] [18ULL] [i_0]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1 + 1]))))))))));
                var_22 ^= ((/* implicit */short) ((max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_1 [i_1] [i_0])) : (((/* implicit */int) arr_1 [(_Bool)1] [i_0 - 1]))))))) + (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) var_12)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (+(var_15))))));
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_15)))) ? (((((/* implicit */unsigned int) var_17)) % (var_2))) : (((unsigned int) var_5))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) & (((((/* implicit */_Bool) var_2)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
    var_25 = ((/* implicit */unsigned long long int) var_5);
}

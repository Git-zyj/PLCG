/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203385
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
    var_15 = ((/* implicit */unsigned int) min((((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_0))) < (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)111))))))), (((short) (-(((/* implicit */int) var_14)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_6) >> (((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) ^ (var_5))) - (2743257479U)))))) ? (min((min((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])), (var_6))), (((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) var_3))));
                var_17 = ((/* implicit */unsigned char) max((-7714771472208920970LL), (((/* implicit */long long int) (signed char)-69))));
                var_18 = ((/* implicit */unsigned char) var_14);
                var_19 = ((/* implicit */unsigned int) ((unsigned long long int) ((((((/* implicit */int) arr_3 [(unsigned char)13] [i_0] [i_0])) < (((/* implicit */int) arr_2 [i_0 + 1] [i_0] [i_1])))) && (((/* implicit */_Bool) min(((short)-18033), ((short)15793)))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225222
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
    var_18 = ((/* implicit */unsigned char) (signed char)0);
    var_19 = ((/* implicit */short) ((_Bool) var_14));
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) (-(var_1)))) ? (((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (288230376150663168ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (-2690190914907412765LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_21 ^= var_7;
        arr_2 [i_0] = ((/* implicit */int) ((min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)117)))))) <= (((/* implicit */int) var_15))));
        var_22 = var_0;
        arr_3 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (((unsigned char) arr_0 [i_0]))));
        var_23 -= ((/* implicit */unsigned short) arr_0 [11U]);
    }
    for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 3) 
    {
        var_24 -= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_6 [i_1 - 1])) ^ (((/* implicit */int) (_Bool)1)))) >= (((((/* implicit */_Bool) max((-1287376291), (((/* implicit */int) arr_6 [2U]))))) ? (min((((/* implicit */int) (short)-28303)), (-2045405489))) : (((/* implicit */int) min((((/* implicit */signed char) var_13)), (var_6))))))));
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) == (((((/* implicit */int) arr_6 [i_1 - 1])) ^ (((/* implicit */int) arr_4 [i_1] [i_1 + 2])))))))));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && ((!(((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1])))))))));
    }
}

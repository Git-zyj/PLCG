/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239248
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((673321309), (arr_0 [i_0])))) ? (max((-673321305), (-673321310))) : (((/* implicit */int) var_15))))), (6411726859187050323LL)));
        var_17 = max((((((((/* implicit */unsigned int) -673321310)) & (var_11))) >> (((min((((/* implicit */unsigned int) 2060813706)), (var_16))) - (2060813705U))))), (((/* implicit */unsigned int) -1304404250)));
    }
    for (int i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */short) ((max((((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])), (-673321298))) & ((~(((/* implicit */int) var_14))))));
        var_18 = ((/* implicit */unsigned long long int) 8191);
        var_19 = ((/* implicit */short) ((unsigned long long int) min((((/* implicit */int) var_7)), ((-(((/* implicit */int) arr_4 [i_1] [i_1])))))));
        var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) min((var_11), (((/* implicit */unsigned int) (short)579))))), (min((((/* implicit */long long int) arr_3 [i_1 - 1])), (-3321275112098974396LL)))));
    }
    var_21 = ((/* implicit */unsigned long long int) var_11);
    var_22 = var_2;
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237876
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
    var_18 = ((/* implicit */short) (-((((~(var_15))) + ((+(var_16)))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_19 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) arr_4 [i_0 - 1]);
                    var_21 = ((/* implicit */short) max((((/* implicit */long long int) max((arr_5 [i_0] [i_0]), (arr_5 [i_0] [i_0])))), (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))))));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1780154574768939613LL)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0 - 1] [12U]))))) : ((((-(arr_4 [i_0]))) / (((/* implicit */long long int) -191818820)))))))));
    }
    var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13973))) - (2473351297919550581ULL));
    var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((signed char) (signed char)19))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) (signed char)0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))))), (((((((/* implicit */long long int) ((/* implicit */int) var_11))) & (var_7))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
}

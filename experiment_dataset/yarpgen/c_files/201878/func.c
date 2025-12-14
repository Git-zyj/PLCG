/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201878
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
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0] [i_0]))) ? (((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_4 [i_0] [i_0] [10])))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [0ULL] [i_0])) >= (((/* implicit */int) var_3))))) : (((/* implicit */int) ((short) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_3))))))));
                arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))), (min((var_12), (((/* implicit */unsigned long long int) var_7))))))) && (((/* implicit */_Bool) ((unsigned int) var_0)))));
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1]))) * (min((min((var_0), (((/* implicit */unsigned long long int) var_1)))), (((var_6) % (4382877011167736663ULL)))))));
                arr_9 [i_1] [i_1 - 1] = ((/* implicit */short) ((var_7) % (((/* implicit */long long int) (-(arr_3 [i_1 + 1]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) var_1)))))) ? (((min((var_12), (var_0))) | (max((var_0), (((/* implicit */unsigned long long int) var_10)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6))))))));
    var_14 = ((/* implicit */short) var_8);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206676
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
    var_13 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_2))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((min((arr_1 [12ULL]), (((((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1] [i_1])) ? (var_11) : (((/* implicit */unsigned long long int) 345682771)))))) + (((((/* implicit */_Bool) var_4)) ? (max((var_8), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 345682771)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (-7862157763680428598LL)))))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232857
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
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_19)) && ((_Bool)1))))))) * (var_4)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 -= ((/* implicit */short) (_Bool)0);
                var_22 &= var_3;
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (18361078911491926742ULL))))) != (((/* implicit */int) arr_1 [i_0] [(_Bool)1]))));
                var_24 = ((/* implicit */unsigned long long int) ((((((var_15) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])) >= (85665162217624874ULL))))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (arr_2 [(unsigned short)6] [2U]) : (arr_2 [i_0] [i_1])))) ? (var_17) : (((/* implicit */unsigned long long int) arr_2 [i_1] [i_0]))))));
            }
        } 
    } 
    var_25 = var_15;
}

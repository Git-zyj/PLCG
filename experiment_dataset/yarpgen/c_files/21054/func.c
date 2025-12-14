/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21054
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
    var_10 ^= min((((((/* implicit */int) var_5)) / (min((-1), (((/* implicit */int) (short)14360)))))), (((/* implicit */int) var_5)));
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)4878)))) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((short) ((((/* implicit */int) (unsigned short)54257)) & (((/* implicit */int) (short)14364)))))) : (((/* implicit */int) ((((/* implicit */_Bool) 15048995482611132171ULL)) || (((/* implicit */_Bool) 15048995482611132162ULL)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_12 = max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (var_0))), (((((/* implicit */_Bool) var_0)) ? (min((0), (((/* implicit */int) var_3)))) : (((/* implicit */int) min((var_4), ((signed char)-76)))))));
                    arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)21631)) : (var_6))), ((-(((/* implicit */int) (_Bool)1))))))) != (-899800344289662544LL)));
                }
            } 
        } 
    } 
}

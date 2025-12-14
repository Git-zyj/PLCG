/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240212
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */_Bool) min((min((arr_2 [i_0] [i_1]), (min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_0])), (arr_4 [i_0 + 2] [i_0 + 2]))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_0)), (arr_3 [(_Bool)1] [(_Bool)1]))))));
                arr_5 [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((arr_0 [i_0]) ? (var_6) : (((/* implicit */int) var_4))))) > (((((/* implicit */_Bool) 5953601494348312660LL)) ? (5953601494348312660LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) < (arr_1 [i_1] [i_0 + 3])));
                var_17 = ((/* implicit */long long int) min((arr_4 [i_0] [i_1]), (((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), (var_14))))));
                var_18 -= ((/* implicit */_Bool) arr_4 [i_0] [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((((/* implicit */int) var_0)) + (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) (signed char)32)) ? (((((/* implicit */_Bool) -5953601494348312660LL)) ? (((/* implicit */long long int) 523845271U)) : (5953601494348312669LL))) : (((/* implicit */long long int) ((/* implicit */int) min((var_1), ((unsigned short)15846))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (1056940246081051918ULL)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0)))))));
}

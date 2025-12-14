/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52945
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 &= ((/* implicit */unsigned char) ((min((var_12), (arr_7 [i_2 - 1] [i_1 + 1]))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1 + 1])) != (((/* implicit */int) arr_7 [i_1] [i_0]))))) : (((/* implicit */int) min((arr_7 [i_0] [i_1 + 1]), (arr_7 [i_0] [i_2 - 1]))))));
                    var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */int) var_6)) >> ((((~(((/* implicit */int) (_Bool)1)))) + (13)))))));
                    arr_8 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? ((+(((/* implicit */int) arr_7 [i_1] [i_0])))) : (((/* implicit */int) arr_1 [i_1 + 2]))))) ? (min((((unsigned int) arr_4 [i_0] [(_Bool)1])), (min((((/* implicit */unsigned int) var_2)), (var_10))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-1352728018)))) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) (signed char)0))))))));
                    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((min((((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((var_7) | (var_10)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) >= (var_13)))))));
}

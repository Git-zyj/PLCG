/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211286
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
    var_13 = ((/* implicit */int) ((var_1) ? (((/* implicit */long long int) var_9)) : (((max((1814445418269609943LL), (((/* implicit */long long int) var_1)))) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [(unsigned short)20] [20LL] &= ((/* implicit */_Bool) min((-3919719491232314183LL), (9223372036854775807LL)));
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 - 2])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102))) == (1384411862U)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2910555434U))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                {
                    var_16 -= ((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned char)101))))));
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min((((((((/* implicit */_Bool) arr_2 [i_5] [(_Bool)0] [i_5])) || (((/* implicit */_Bool) (unsigned char)154)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(_Bool)1] [i_4] [i_3]))))) : (var_2))), (arr_9 [i_3]))))));
                }
            } 
        } 
    } 
}

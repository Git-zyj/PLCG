/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33384
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
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) << (((((((/* implicit */_Bool) arr_2 [i_0 - 2] [(_Bool)1] [i_1 - 2])) ? (var_6) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))))) - (83963865U)))));
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18))) - (0U))) * (min((var_6), (0U)))))) ? ((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56))) : (var_0))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)68)), (max((var_9), (((/* implicit */unsigned int) (unsigned char)255)))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_1 + 1] [i_1 - 2] [i_0 - 1]);
                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)73)) ? (1485182559U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50443)))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) < (var_5)))))))));
}

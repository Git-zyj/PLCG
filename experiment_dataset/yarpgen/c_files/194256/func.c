/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194256
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)237)) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) < (var_3)))))) ? ((((+(((/* implicit */int) (unsigned short)4307)))) | ((~(((/* implicit */int) var_5)))))) : ((~(((((/* implicit */int) arr_3 [(unsigned short)8])) - (((/* implicit */int) (unsigned short)4318))))))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)112), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) && (arr_1 [i_0]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [9LL] [i_1 + 1])) ? (((/* implicit */int) arr_0 [3ULL] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (~(4294967295U))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (var_6))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(var_9)))))))) | ((-(((/* implicit */int) var_1))))));
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_11)))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) var_6)) : (var_8)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)107))) != (var_3)))) : (((/* implicit */int) ((11984940867351031381ULL) != (((/* implicit */unsigned long long int) var_4)))))))));
    var_20 ^= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)61229)) / (1896610717)))) / ((+(var_6))))));
}

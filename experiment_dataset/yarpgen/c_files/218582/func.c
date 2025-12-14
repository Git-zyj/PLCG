/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218582
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_0 [i_1 + 1])) / (((/* implicit */int) arr_1 [i_1 - 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)51011))))) : ((((+(arr_2 [i_1]))) - ((-(arr_2 [i_0])))))));
                arr_7 [1] [i_0] [6LL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2038024145)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [9LL])))))) ? (((/* implicit */unsigned int) arr_4 [i_1 - 1] [i_1 - 2] [i_1 - 2])) : ((-(var_8)))))) ? (((/* implicit */int) (unsigned short)62825)) : (max((((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_5)))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) ((((/* implicit */unsigned int) min(((+(((/* implicit */int) (unsigned short)14547)))), (((/* implicit */int) var_7))))) > (var_8)));
    var_13 = ((/* implicit */short) ((((/* implicit */long long int) (~(max((((/* implicit */unsigned int) (_Bool)1)), (606014530U)))))) - ((~(max((((/* implicit */long long int) -243459864)), (var_0)))))));
    var_14 = ((/* implicit */short) ((unsigned char) var_4));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22260
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)2))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6568286503484469460ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49985))) : (17835653250767473669ULL)));
        arr_3 [(_Bool)1] = ((((/* implicit */_Bool) (unsigned short)22303)) ? (((/* implicit */unsigned int) -1893409742)) : (4294967294U));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) : ((+(611090822942077950ULL)))));
                arr_8 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) (-(var_2))));
                arr_9 [i_1] [i_2] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_1])) ? ((-(((/* implicit */int) arr_7 [i_1] [(_Bool)1] [i_2])))) : ((+(((/* implicit */int) (unsigned char)246)))))));
                arr_10 [4ULL] [i_2] [i_2] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_1] [i_2] [i_1]))))), (((unsigned long long int) arr_4 [i_1] [i_1])));
            }
        } 
    } 
    var_15 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (var_6)))) ? (((((/* implicit */_Bool) max(((unsigned char)190), ((unsigned char)0)))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)21328)))) : (((/* implicit */int) var_9)))) : (max((((/* implicit */int) var_10)), (min((var_2), (((/* implicit */int) var_10))))))));
}

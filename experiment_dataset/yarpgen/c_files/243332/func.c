/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243332
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
    var_12 = ((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)65515))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) ((unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_7))) << ((((~(((/* implicit */int) (_Bool)0)))) + (49))))));
        var_14 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (short)-1))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)98)) % (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_11)))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((unsigned char) arr_0 [i_0]));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_15 = ((/* implicit */_Bool) min((var_15), ((_Bool)1)));
        arr_8 [i_1] [(unsigned short)21] = ((((/* implicit */unsigned long long int) min(((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))), (max((((/* implicit */int) (unsigned char)127)), (var_11)))))) * (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)4092)) << (((/* implicit */int) (_Bool)0))))) ? (arr_7 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1023))))));
        var_16 = arr_6 [11ULL] [11ULL];
    }
}

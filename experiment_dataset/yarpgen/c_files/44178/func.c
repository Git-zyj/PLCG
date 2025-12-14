/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44178
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) -7131416907291170915LL);
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_3 [i_0]))));
                    arr_7 [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)249))))) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_6 [i_1 + 1]))))) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_0] [i_0]))) : (arr_2 [i_1 + 1] [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)8)))))))))));
                    arr_8 [i_1] [i_1] = ((/* implicit */signed char) var_5);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_12)) ? ((~(var_3))) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)4))))) : ((~(var_16)))))));
}

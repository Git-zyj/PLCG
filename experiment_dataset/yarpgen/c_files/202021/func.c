/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202021
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) ((short) min((((/* implicit */long long int) var_8)), (var_3)))))));
    var_21 = ((/* implicit */short) ((unsigned char) ((short) ((unsigned short) 15874945195362105106ULL))));
    var_22 &= ((/* implicit */unsigned long long int) ((unsigned char) var_8));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_23 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) < (268431360LL)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14178)) ? (15874945195362105106ULL) : (4520495323288366061ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43366))))) : (((((/* implicit */_Bool) 15874945195362105106ULL)) ? (((/* implicit */int) arr_1 [i_0] [16])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))))));
                    arr_9 [(unsigned char)8] [i_1 - 1] [i_1 - 1] [i_2] = ((/* implicit */short) (-(((/* implicit */int) arr_8 [i_1 + 1]))));
                }
            } 
        } 
    } 
}

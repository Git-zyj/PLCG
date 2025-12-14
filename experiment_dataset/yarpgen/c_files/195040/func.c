/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195040
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((var_7), (var_10))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)247)))) : (min((var_5), (((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_6))) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) << (((var_3) + (4144228255878790670LL)))))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    var_14 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_6), (((long long int) (short)3644))))) ? (((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_11))))))) : (min((((/* implicit */long long int) var_10)), (var_0)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0 - 3])))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((var_3) != (((/* implicit */long long int) -257143029))));
                    var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 - 2]))))) ? (((/* implicit */int) var_8)) : (arr_7 [i_0] [i_2 + 1] [i_0 - 3])));
                    var_18 = ((/* implicit */long long int) (!(var_10)));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)42464)) ? (((/* implicit */int) var_11)) : (arr_2 [i_0 - 1] [i_1])));
                }
            } 
        } 
        var_20 = ((/* implicit */long long int) (!(var_7)));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5)))))));
    }
}

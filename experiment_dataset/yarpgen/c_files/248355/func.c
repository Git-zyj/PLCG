/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248355
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
    var_12 = ((/* implicit */unsigned long long int) var_9);
    var_13 = ((/* implicit */unsigned short) max((((((/* implicit */int) var_0)) >> (((((/* implicit */int) min((((/* implicit */unsigned short) (short)-1)), ((unsigned short)36912)))) - (36909))))), (max(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) var_7))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (unsigned short)28631)) : (((/* implicit */int) var_8))))) ? (max((var_3), (((/* implicit */unsigned int) (_Bool)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1] [i_1 - 1]))))) == (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_2] [i_0] [i_0]))))));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) (-(min((var_3), (((/* implicit */unsigned int) (_Bool)1))))))) == (arr_0 [i_2])));
                    var_16 = ((/* implicit */unsigned short) ((min((arr_7 [i_1 - 1]), (arr_7 [i_1 - 1]))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4)))) < (var_5)))) : (((/* implicit */int) arr_7 [i_1]))));
                    var_17 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) (_Bool)0))))), (arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                }
            } 
        } 
    } 
}

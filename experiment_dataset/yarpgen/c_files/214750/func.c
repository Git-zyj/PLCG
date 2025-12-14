/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214750
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) min((arr_0 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_1]))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1] [i_2])) + (((/* implicit */int) var_10))))))))));
                    var_13 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_2])))))) ? (((unsigned long long int) arr_2 [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                    var_14 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min(((short)14785), ((short)-20427)))) ? (10544878) : (((/* implicit */int) (short)14785)))), (max((((((/* implicit */int) arr_1 [i_0] [i_1])) - (((/* implicit */int) var_3)))), ((~(((/* implicit */int) arr_2 [i_0]))))))));
                    arr_8 [i_1] [i_1] [i_0] [i_0] &= max((((((/* implicit */_Bool) max((arr_5 [i_0] [i_0] [i_1] [i_0]), (((/* implicit */unsigned short) arr_6 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))) : ((-(((/* implicit */int) (unsigned short)13048)))))), (((((/* implicit */int) min((arr_7 [i_0]), (((/* implicit */short) var_0))))) + (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_3)))))));
                }
            } 
        } 
    } 
    var_15 -= var_11;
    var_16 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_9)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))));
}

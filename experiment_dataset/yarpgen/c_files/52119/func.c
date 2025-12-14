/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52119
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_2)))))))) * (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)255))) == (var_10))) ? (((var_10) ^ (((/* implicit */unsigned long long int) 0U)))) : (min((291723153350216879ULL), (((/* implicit */unsigned long long int) var_6)))))))))));
        arr_3 [i_0] = (unsigned short)16;
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) (short)30356)))) ? (var_1) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned short)57344))))))))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) var_6);
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) min((((long long int) ((((/* implicit */_Bool) 23U)) ? (var_10) : (((/* implicit */unsigned long long int) 0U))))), (((/* implicit */long long int) (unsigned short)8176)))))));
    }
    for (unsigned int i_2 = 1; i_2 < 13; i_2 += 4) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 2489060895419345741LL))))) : ((~(((/* implicit */int) (short)-14316))))))) ^ (1380895096657602654ULL)));
        var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
    }
    var_14 = ((/* implicit */short) ((((((((/* implicit */_Bool) 1431225196U)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (2259990799253165242LL))) >> (((((/* implicit */int) var_4)) - (34142))))) % (max((((/* implicit */long long int) ((var_10) <= (var_2)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 1071644672U)) : (-2259990799253165219LL)))))));
}

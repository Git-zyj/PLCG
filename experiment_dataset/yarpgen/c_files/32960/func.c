/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32960
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) <= (var_18)))));
                    arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) min(((_Bool)0), (arr_4 [i_1])))) : (((/* implicit */int) min((((/* implicit */short) arr_4 [i_1])), (arr_0 [i_0] [i_2]))))));
                    arr_8 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!((_Bool)1)))), (max((((/* implicit */unsigned int) -649838773)), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (664509263U)))))));
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)32767))))) ? (((/* implicit */long long int) arr_3 [6LL])) : (min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) (unsigned short)65535))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)2190)))) ? (3622843074742162876ULL) : (((/* implicit */unsigned long long int) 664509263U))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) 0LL))));
    var_21 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_6)) : (var_10)))), (var_12)));
}

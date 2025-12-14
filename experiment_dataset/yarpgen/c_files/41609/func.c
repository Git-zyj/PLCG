/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41609
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] = ((((/* implicit */_Bool) 35184372088831LL)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) max((((/* implicit */int) var_5)), (arr_8 [(_Bool)1] [i_0] [(_Bool)1] [i_2])))))))));
                    arr_10 [i_2] = (!(((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1)))) == (((/* implicit */int) max((((/* implicit */short) var_1)), (var_6)))))));
                    arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(17171617006046439535ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 17171617006046439535ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_10)))) ? ((+(var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [(unsigned short)16] [i_0])) : (((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned int) var_4)), (var_0)))))));
                    var_15 = ((/* implicit */int) max((((/* implicit */long long int) arr_5 [(unsigned short)5] [i_1] [(_Bool)1] [(unsigned short)5])), ((~(arr_4 [i_0] [i_1] [i_2])))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_0);
    var_17 = ((/* implicit */unsigned int) (+((~(((unsigned long long int) var_10))))));
    var_18 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (var_3))))) : ((-(5082888235864203811ULL))));
}

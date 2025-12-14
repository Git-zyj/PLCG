/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210569
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) ? ((+(var_5))) : (var_5)))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) ^ ((+(((/* implicit */int) var_0))))))) : (var_3)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) arr_8 [i_0] [i_1 - 1]);
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-4056178705771079533LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)101)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)85))))) : (((arr_2 [i_1 - 1] [i_1 + 1]) / (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) arr_4 [i_0])) : (arr_1 [i_1])))))));
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((((/* implicit */int) arr_7 [i_2])) > (((/* implicit */int) arr_8 [i_2] [19U]))))))) < (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_4 [i_2]) : (((/* implicit */int) arr_6 [i_2] [i_1] [i_2])))))))))))));
                }
            } 
        } 
    } 
}

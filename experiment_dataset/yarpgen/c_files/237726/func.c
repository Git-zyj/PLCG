/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237726
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
    var_10 *= ((/* implicit */short) var_2);
    var_11 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65514))) : (1147012857U))) > (((/* implicit */unsigned int) -2147483642)))) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (unsigned short)8050))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((var_9), (((/* implicit */short) (signed char)-16))))))) ? (max((((unsigned long long int) (unsigned char)35)), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [8LL] [i_0] [i_2]))))))));
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) max((max((arr_2 [5LL] [i_1] [7]), (arr_2 [i_0] [i_1] [i_2]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_1] [i_2]))))))))));
                    var_14 = ((/* implicit */unsigned short) 5577092753720309287ULL);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) (_Bool)1)));
    var_16 = ((/* implicit */unsigned int) var_8);
}

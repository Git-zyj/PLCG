/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206242
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
    var_18 = ((/* implicit */long long int) var_2);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */int) min((((/* implicit */unsigned int) 30625909)), (((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 2] [i_2 + 2])) ? (arr_6 [i_2 + 1] [i_2 + 2] [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                    var_20 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1)))))) : ((-(arr_2 [(unsigned char)13]))))) > (1372638610898042675LL)));
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */int) var_4);
    var_22 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) (+(var_14)))));
    var_23 = ((/* implicit */_Bool) max(((~(min((var_9), (var_13))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (var_2)))) ? (((/* implicit */int) min((var_5), ((unsigned short)64512)))) : (((/* implicit */int) var_6)))))));
}

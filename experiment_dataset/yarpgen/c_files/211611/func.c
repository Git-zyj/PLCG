/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211611
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)120)) & (((/* implicit */int) (signed char)-36))));
    var_15 = ((/* implicit */short) var_9);
    var_16 = ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-88))) : (var_12))), (((/* implicit */unsigned int) var_2))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_7 [i_0]))))) && (((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) (signed char)113)))))))))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) max(((signed char)-88), ((signed char)-74)));
                    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0])) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)99))) : (var_3))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-100)) & (((/* implicit */int) (signed char)99))))))))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max(((+(((/* implicit */int) (signed char)-72)))), (max(((-(((/* implicit */int) var_4)))), (min((var_0), (((/* implicit */int) var_11)))))))))));
                }
            } 
        } 
    } 
}

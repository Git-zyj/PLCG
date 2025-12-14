/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226208
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
    var_13 = ((((/* implicit */_Bool) 17467406890111220716ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(9564003708833905109ULL)))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57683))) < (17467406890111220716ULL))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_4) : (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) var_3)) ? (var_5) : (var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_14 += ((/* implicit */_Bool) var_5);
                var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((max((17467406890111220716ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))))));
                var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)176)), (var_11)))) ? (((/* implicit */int) (unsigned short)23835)) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 2] [i_1])) ? (((/* implicit */int) (unsigned short)5230)) : (((/* implicit */int) (unsigned short)60312)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))))), ((unsigned short)35918)));
}

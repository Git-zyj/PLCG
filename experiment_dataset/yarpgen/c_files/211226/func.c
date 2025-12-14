/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211226
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)55))) : (arr_1 [i_1] [i_0])))) ? (max((-438288086798844702LL), (((/* implicit */long long int) arr_2 [(unsigned short)10])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_3 [i_0]) : (-727122251))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) arr_4 [i_0] [i_0])) <= (((/* implicit */int) arr_4 [i_0] [i_0])))));
                var_10 = ((/* implicit */long long int) var_9);
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_4)), (var_2))) < (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) < (((/* implicit */int) var_8)))) ? (((/* implicit */int) ((signed char) var_2))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (727122269)))))))))));
    var_12 = ((/* implicit */int) (signed char)-5);
}

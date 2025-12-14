/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34132
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
    var_16 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))))), (((((arr_2 [i_0] [i_1]) + (2147483647))) >> (((4493609148511845469ULL) - (4493609148511845438ULL)))))));
                arr_6 [i_1] = ((/* implicit */_Bool) min(((-((~(-672246003))))), (((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-16))))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)80)), (arr_1 [i_0]))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0])))))))));
                var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max(((unsigned short)20945), ((unsigned short)20923)))) || (((((/* implicit */_Bool) arr_2 [3U] [i_1])) || (((/* implicit */_Bool) arr_3 [i_0])))))) ? (((/* implicit */int) ((_Bool) arr_2 [i_1] [i_1]))) : ((-(((/* implicit */int) max((var_7), (var_5))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (~(((var_6) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8)))))))));
    var_20 = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) -5126945067008301657LL)) ? (5244265910295987939LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) min(((unsigned char)255), (((/* implicit */unsigned char) var_3))))))), (((/* implicit */long long int) var_1))));
}

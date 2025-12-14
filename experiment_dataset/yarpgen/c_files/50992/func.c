/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50992
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
    var_17 &= ((/* implicit */int) ((-1118518558) <= (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_18 |= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_1])))) ? (((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_3 [(_Bool)1])))) : (((/* implicit */int) var_11)))));
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((-5014865781461204914LL) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(_Bool)1]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1118518558)) ? (-1152595366827165654LL) : (0LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (((var_15) & (1152595366827165626LL))))) : (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) 6U)) < (-10LL)))) | (((arr_2 [(unsigned char)12] [i_1]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned char)255)))))))));
                arr_5 [i_1] = ((max((((/* implicit */long long int) arr_0 [i_1])), (22LL))) >= (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) arr_2 [(signed char)17] [i_1])))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_10))));
}

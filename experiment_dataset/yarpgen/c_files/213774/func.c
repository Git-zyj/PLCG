/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213774
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) min(((unsigned char)91), ((unsigned char)166)))) % (((/* implicit */int) (unsigned char)166))));
    var_19 = ((/* implicit */unsigned int) (unsigned char)88);
    var_20 |= ((/* implicit */long long int) (unsigned char)83);
    var_21 ^= ((/* implicit */long long int) ((((/* implicit */int) var_13)) > (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -158750016)) < (var_1)))) < ((~(((/* implicit */int) var_14)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */long long int) 132120576U);
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
                var_23 = ((/* implicit */unsigned char) max((((/* implicit */int) ((arr_4 [i_1] [i_0] [i_0]) < (((/* implicit */unsigned int) arr_5 [(unsigned short)5] [i_0] [i_1]))))), (arr_5 [i_0] [i_0] [i_1])));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(short)0] [i_0] [i_1])) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) 4162846719U)) : (arr_3 [i_0]))) : (9742180722993606492ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) && (((/* implicit */_Bool) 3255149684653077232ULL)))))) - (arr_4 [i_0] [i_0] [1ULL]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((4162846719U) | (arr_1 [i_1]))) == (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [6U])) & (var_17))))))))));
                arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)16880)) | (((/* implicit */int) (_Bool)0))))) ? (arr_4 [i_0] [i_0] [i_1]) : ((-(arr_4 [i_0] [i_0] [i_1])))));
            }
        } 
    } 
}

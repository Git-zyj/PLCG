/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201712
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = (_Bool)1;
        var_14 = ((/* implicit */long long int) (+(((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))));
        var_15 = ((/* implicit */unsigned char) ((15303786942526454234ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32252))) - (4571974645133783926LL))))));
        var_16 = ((/* implicit */unsigned short) var_8);
    }
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) != (max((((/* implicit */long long int) (_Bool)1)), (-829813005520120703LL))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-25605))) - (-3995412937675253698LL)))))))));
        arr_6 [i_1] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) <= (((/* implicit */int) var_13))))), ((((-(((/* implicit */int) (signed char)-1)))) >> (min((((/* implicit */long long int) (signed char)0)), (var_4)))))));
        var_18 -= ((/* implicit */unsigned int) max(((-(-829813005520120703LL))), (max((((/* implicit */long long int) ((((/* implicit */int) (short)19358)) < (((/* implicit */int) (unsigned char)27))))), (max((((/* implicit */long long int) (unsigned char)239)), (-3995412937675253698LL)))))));
    }
    var_19 = ((/* implicit */unsigned int) 829813005520120702LL);
    var_20 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((var_5) ? ((-(1046709593U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (max((4061565074461919857LL), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)50391)) - (((/* implicit */int) (unsigned char)127)))))))));
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) ((int) -5576024629216447162LL))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (1) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (var_1)))))));
}

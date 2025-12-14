/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222538
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [(unsigned short)10] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-103)), (var_11)))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) / (-6020084678578899742LL)))))))) - (((arr_3 [i_0] [i_1] [i_0]) >> (((arr_3 [i_0] [i_0] [i_1]) - (17795167460864850850ULL)))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [(signed char)3] [i_1]))))), (min((((/* implicit */unsigned long long int) var_2)), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (arr_3 [i_0] [i_1] [i_1])))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((((((/* implicit */int) var_6)) + (2147483647))) << (((((-1044942503261326667LL) + (1044942503261326697LL))) - (30LL)))))))));
    var_15 = ((/* implicit */long long int) min((var_5), (min((var_3), (((/* implicit */short) var_8))))));
    var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((-1448485801) >= (((/* implicit */int) (short)12166)))) ? (-1468434167) : (((/* implicit */int) var_12))))) ? ((+(max((-1892158838), (1523707324))))) : (((/* implicit */int) var_13))));
}

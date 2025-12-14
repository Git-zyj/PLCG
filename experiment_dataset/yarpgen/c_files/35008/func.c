/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35008
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-120)) ? (var_5) : (var_2))))))) > (((int) (signed char)120))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            var_13 = ((/* implicit */int) max((((((/* implicit */_Bool) max((arr_0 [i_1] [i_1]), (13529151510628406071ULL)))) ? (((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (max((((/* implicit */unsigned long long int) var_1)), (18446744073709551613ULL))))), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
            var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 1])) << (((max((((/* implicit */unsigned long long int) (signed char)119)), (arr_0 [i_0] [i_1]))) - (16956562356658014896ULL)))))), (max((((/* implicit */unsigned int) ((unsigned short) var_1))), (max((var_2), (((/* implicit */unsigned int) arr_1 [i_1]))))))));
            var_15 = ((/* implicit */unsigned char) (+(-1)));
        }
        arr_7 [i_0] = ((/* implicit */_Bool) (unsigned short)30423);
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)0)), (max((var_2), (var_2)))))), (max((((/* implicit */unsigned long long int) max((var_2), (var_2)))), (((13529151510628406071ULL) / (((/* implicit */unsigned long long int) 2453093408U))))))));
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */int) max((arr_6 [i_0] [i_0] [i_0]), (arr_6 [11] [i_0] [i_0])))) + (((/* implicit */int) arr_1 [i_0]))))));
    }
    var_16 = ((unsigned long long int) var_5);
}

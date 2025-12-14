/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23444
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
    var_12 = ((/* implicit */long long int) var_8);
    var_13 = ((/* implicit */signed char) max((((/* implicit */long long int) var_7)), (min((((/* implicit */long long int) (unsigned char)18)), (5289183343444186652LL)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) max((((((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */signed char) var_7))))) - (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */signed char) (_Bool)1))))))), ((+(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_1 [i_0]))))))));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)127), (((/* implicit */signed char) (_Bool)1)))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (14973951773364063734ULL))))))));
        var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (10370235832722774466ULL)))));
    }
    var_17 = ((/* implicit */unsigned char) var_4);
}

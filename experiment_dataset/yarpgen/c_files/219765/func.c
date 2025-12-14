/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219765
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
    var_19 = ((/* implicit */unsigned char) (unsigned short)8640);
    var_20 = ((/* implicit */long long int) max(((~(((/* implicit */int) min(((unsigned short)8639), (((/* implicit */unsigned short) var_2))))))), (((/* implicit */int) max(((!(((/* implicit */_Bool) var_0)))), ((!(((/* implicit */_Bool) 1492169766959457385ULL)))))))));
    var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56903))) ^ (2301315518193818312ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) == ((~(var_17))))))) : (((long long int) (unsigned short)8640))));
    var_22 += ((/* implicit */unsigned char) ((unsigned int) var_15));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */unsigned char) max((max((max((16145428555515733327ULL), (8504091175680788955ULL))), (arr_1 [i_0 + 1] [i_0 + 1]))), (((/* implicit */unsigned long long int) var_17))));
        var_23 = ((int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (max((((/* implicit */unsigned long long int) var_1)), (arr_1 [i_0] [i_0 + 1]))) : (max((var_9), (arr_1 [i_0] [i_0 + 1])))));
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (17022316188598321701ULL)))), (arr_0 [i_1] [i_1])));
        var_24 = ((/* implicit */_Bool) ((short) ((unsigned char) max((var_11), (((/* implicit */int) var_6))))));
    }
}

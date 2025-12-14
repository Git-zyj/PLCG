/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208971
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (4294967295U)))) ? (((/* implicit */int) (!((_Bool)1)))) : ((~(var_2))))));
        arr_4 [2ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (max((((/* implicit */int) (unsigned short)3586)), (2147483647)))));
    }
    for (short i_1 = 2; i_1 < 14; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((~(4426279257393034020ULL))), (((/* implicit */unsigned long long int) (~(2145126614U))))))) ? (max((((arr_7 [i_1] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3604))) : (4122187295U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)61950)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (short)2))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_0)))))))));
        var_15 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)32758)))) ? (((/* implicit */int) (_Bool)1)) : (max((((/* implicit */int) (short)32735)), (-765203668))))))));
        arr_9 [i_1] = ((/* implicit */unsigned short) (~(min((((/* implicit */int) (!(arr_6 [i_1 - 1] [i_1 - 2])))), ((-(((/* implicit */int) (unsigned char)183))))))));
        arr_10 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((min((var_13), (var_13))), (var_13))))));
    }
    var_16 = ((/* implicit */unsigned short) max((max(((((_Bool)1) ? (((/* implicit */int) (short)4)) : (((/* implicit */int) (unsigned short)37303)))), (((/* implicit */int) var_10)))), (max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)252)) : (var_4))), (((int) var_4))))));
}

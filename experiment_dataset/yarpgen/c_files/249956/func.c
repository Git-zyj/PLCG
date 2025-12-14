/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249956
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
    var_13 = ((/* implicit */int) ((short) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)10676))))), (var_1))));
    var_14 = (((_Bool)1) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max(((unsigned char)145), (((/* implicit */unsigned char) var_7))))) : ((~(((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        var_15 += ((/* implicit */unsigned char) (_Bool)1);
        var_16 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])) & (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2]))))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((((/* implicit */int) var_9)) == (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) var_9))))))) ? (((/* implicit */int) ((unsigned short) -6834507866109527761LL))) : (((/* implicit */int) (_Bool)1)))))));
        var_18 &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)18028)) == (((/* implicit */int) var_7))))))), (min((((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_8))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) var_11);
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_5 [0U] [i_1] = ((/* implicit */int) max((min((var_2), (((/* implicit */unsigned long long int) (signed char)-66)))), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]))));
        arr_6 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-454418047) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) (unsigned short)47508)))))) : (max((((/* implicit */unsigned long long int) var_5)), (arr_3 [i_1] [7U])))))) ? (max(((+(((/* implicit */int) arr_0 [i_1])))), (-1466373783))) : (((/* implicit */int) min((arr_1 [i_1] [10ULL]), (((/* implicit */short) (_Bool)1))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */int) (unsigned short)18028)) : ((~(((/* implicit */int) (_Bool)1))))));
    }
}

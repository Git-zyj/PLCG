/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233120
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_10))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) min(((~(max((((/* implicit */long long int) (unsigned short)37548)), (arr_0 [i_0] [i_0]))))), (((/* implicit */long long int) min((1043109506U), (((/* implicit */unsigned int) arr_1 [i_0])))))));
        var_14 = arr_1 [i_0];
        var_15 = ((/* implicit */unsigned short) max((min((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-5)), (var_1)))), ((~(var_5))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) >= (max((8005566502980857701ULL), (10441177570728693894ULL))))))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_1 [i_0])) / (759194430U)))), (max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) var_1))))))) ? (((/* implicit */int) ((-1289275289) < ((~(1256143697)))))) : (min((var_7), (((/* implicit */int) (!((_Bool)1))))))));
    }
    var_17 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)36)), (2372163906066742337LL)))) ? (max((((/* implicit */unsigned long long int) var_4)), (10441177570728693897ULL))) : (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 10441177570728693894ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)49))))))));
}

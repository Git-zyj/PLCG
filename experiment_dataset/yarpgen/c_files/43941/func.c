/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43941
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) var_13);
        arr_3 [i_0] &= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) 18446744073709551605ULL)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) 2796021021247469079ULL);
    }
    var_14 = ((/* implicit */long long int) ((unsigned int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_7))), (var_8))));
    var_15 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) ((long long int) (unsigned short)32785))));
    var_16 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32766))) : (var_4)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)152)) >> (((10200636081264264460ULL) - (10200636081264264440ULL)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)33))) : (var_4))))), (((/* implicit */long long int) (unsigned short)32769))));
}

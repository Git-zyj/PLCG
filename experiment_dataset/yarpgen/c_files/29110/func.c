/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29110
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((3393637065U) >> (((arr_2 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)100))) : (0U)))));
        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)34336)))))));
    }
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)230)) << (((((((/* implicit */unsigned long long int) 9223372036854775807LL)) | (14742766652559499049ULL))) - (18446744073709551607ULL)))))) ? (((((long long int) var_2)) & (((/* implicit */long long int) ((588369842U) << (((((/* implicit */int) (unsigned char)158)) - (134)))))))) : (0LL)));
    var_13 = ((/* implicit */int) var_0);
    var_14 |= ((/* implicit */int) ((unsigned char) (unsigned char)25));
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65513)))))), (min((((/* implicit */unsigned long long int) var_2)), (var_6))))), (((((/* implicit */_Bool) 3821651230U)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))));
}

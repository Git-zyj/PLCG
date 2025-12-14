/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249813
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
    var_12 = ((/* implicit */int) var_1);
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? ((~(var_11))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (!(var_0)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) - (16776308701633472693ULL));
        arr_3 [i_0] = ((/* implicit */_Bool) var_9);
        arr_4 [i_0] = ((/* implicit */signed char) ((unsigned long long int) arr_1 [i_0] [i_0]));
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_14 = ((/* implicit */int) (+(((max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)63255)))) * (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
        var_15 = ((/* implicit */int) (signed char)117);
    }
    for (int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */int) 17778048958239322572ULL);
        var_16 &= var_3;
        var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4398046511103ULL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (((/* implicit */short) (signed char)-127))))) ? (3067221009098294338ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (1664206734U)))))))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_9), (arr_10 [i_2])))) ? (((/* implicit */long long int) (((~(((/* implicit */int) arr_9 [i_2])))) / (((((/* implicit */int) var_0)) ^ (var_6)))))) : (((long long int) ((short) (short)-29369)))));
    }
}

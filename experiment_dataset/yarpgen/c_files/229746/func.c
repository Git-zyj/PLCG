/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229746
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
    var_10 = var_6;
    var_11 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((16174396302950533333ULL) | (9006099743113216ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [(short)11] = ((/* implicit */short) (unsigned char)255);
        var_12 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)248))))) ? (4485637616709224076ULL) : (17912392106622976318ULL)))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_5 [(unsigned char)16] [(unsigned char)16] = ((/* implicit */unsigned char) (+(-623326329)));
        arr_6 [(short)15] = ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
    }
    var_13 = ((/* implicit */unsigned char) ((var_6) & (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)47298)), (((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) var_4)))))))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))) : (18410715276690587648ULL)));
}

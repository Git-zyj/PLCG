/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49039
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
    var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))));
    var_19 = max(((-(15605221592681829834ULL))), (((unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)98))) : (18446744073709551615ULL)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) (+((~(((/* implicit */int) (unsigned char)158))))))) : (var_2)));
        var_20 = ((/* implicit */long long int) 17031720815246451183ULL);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1]))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)168)) <= (((/* implicit */int) (short)32767))))) % (((/* implicit */int) (unsigned char)110))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        var_22 = (unsigned char)98;
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (unsigned char)255))));
    }
}

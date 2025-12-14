/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25963
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
    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_3)), ((-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_17)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */int) arr_2 [i_0 + 1]);
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (+((~(((/* implicit */int) (unsigned char)0))))));
    }
    for (int i_1 = 2; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_20 += ((/* implicit */short) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
        var_21 = (-(((/* implicit */int) ((((arr_1 [i_1] [15ULL]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) (signed char)-118)) : (arr_6 [i_1]))))))));
    }
    /* vectorizable */
    for (long long int i_2 = 3; i_2 < 8; i_2 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) (signed char)118);
        var_23 ^= ((/* implicit */int) arr_3 [i_2 - 1]);
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)117))) && (((((/* implicit */int) (unsigned char)9)) != (arr_6 [i_2])))));
    }
    for (int i_3 = 1; i_3 < 16; i_3 += 2) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((signed char) min((arr_10 [i_3] [i_3 + 1]), (var_17))));
        arr_13 [i_3] = ((/* implicit */int) min((arr_2 [i_3]), (((/* implicit */unsigned long long int) -1))));
    }
}

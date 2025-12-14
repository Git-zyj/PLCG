/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208392
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
    var_10 = ((((((/* implicit */int) ((((/* implicit */int) (unsigned short)3072)) != (((/* implicit */int) (unsigned char)56))))) - (var_0))) % (((((/* implicit */_Bool) ((((/* implicit */long long int) var_0)) / (var_8)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_11 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_0)) : (-9223372036854775795LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)236)) || (((/* implicit */_Bool) 993713109970813371LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)9804)))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)62463)) ? (((/* implicit */int) (unsigned short)62464)) : (((/* implicit */int) arr_3 [i_0 + 1]))))) % (((((((/* implicit */_Bool) 12864484175171016383ULL)) ? (3ULL) : (((/* implicit */unsigned long long int) -3774868987425964612LL)))) * (((((/* implicit */_Bool) -1287790071)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))) : (18446744073709551597ULL)))))));
                arr_6 [i_0] [i_0] [12LL] = ((((((/* implicit */int) (unsigned short)3059)) >= (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) (unsigned short)3065))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62464))) : (((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3043))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1]))) % (var_6))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                var_12 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 + 1]))) / (arr_2 [i_0] [i_1]))) != (((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))))))) - (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3094))) - (arr_1 [(unsigned char)8])))));
            }
        } 
    } 
}

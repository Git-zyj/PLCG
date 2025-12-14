/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29548
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            {
                var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned short) arr_3 [i_1] [i_1] [i_0 + 3]))))) ? (((((/* implicit */int) arr_3 [i_0] [2ULL] [i_1])) / (((/* implicit */int) var_13)))) : (((/* implicit */int) ((unsigned short) (_Bool)0)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1 - 4]))) | (arr_2 [i_0 - 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-84)))));
                var_19 *= (unsigned char)28;
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0 + 3]))) ? (((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 3] [i_1 + 1])) : (((/* implicit */int) (signed char)-102)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)31439)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) max(((unsigned char)27), (((/* implicit */unsigned char) (signed char)3))))) : (((((/* implicit */int) arr_1 [i_1] [i_0])) / (((/* implicit */int) (signed char)-115))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) (unsigned short)52401)) | (((/* implicit */int) var_11))))));
    var_22 = ((/* implicit */unsigned char) 536805376U);
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (3357525216U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 536854528ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)31439)))))))) : ((((+(8647147129549920245LL))) + (var_7)))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            {
                arr_10 [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)21)) ? (((var_16) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) var_7)))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) var_0)) : (18446744073709551602ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2284296457U)) ? (65011712U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17586))))))));
                arr_11 [i_2] [i_3] = ((/* implicit */unsigned int) (unsigned short)15047);
            }
        } 
    } 
}

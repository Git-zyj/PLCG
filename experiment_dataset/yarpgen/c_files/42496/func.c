/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42496
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
    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(min((259302909), (-2129968640))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0 + 3]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) != (max((18446744073709551587ULL), (((/* implicit */unsigned long long int) -9223372036854775800LL)))))))) : ((-(arr_1 [i_0])))));
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (9223372036854775785LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)158)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_0 [i_0])))))))) : (arr_1 [0])));
                arr_5 [3LL] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_2 [i_0 + 2] [i_1])))))));
                arr_6 [1LL] [(unsigned short)14] [(signed char)24] = ((((/* implicit */_Bool) (~(arr_1 [i_0 + 3])))) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) | (((/* implicit */int) (short)-5055))))) : (max((((/* implicit */long long int) max((((/* implicit */short) (unsigned char)0)), ((short)(-32767 - 1))))), (max((((/* implicit */long long int) arr_0 [i_0 + 1])), (9223372036854775799LL))))));
            }
        } 
    } 
    var_14 -= ((/* implicit */signed char) min((((/* implicit */long long int) (+(((/* implicit */int) (short)-10314))))), (((((/* implicit */long long int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned char) var_4)))))) / (var_0)))));
}

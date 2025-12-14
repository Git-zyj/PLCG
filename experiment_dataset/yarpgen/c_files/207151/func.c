/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207151
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
    var_19 = ((/* implicit */signed char) (+((+(((((/* implicit */_Bool) 18158513697557839872ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)24180))) : (3766814107U)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_16) ? (((/* implicit */int) (short)31170)) : (-587600256)))), (((((/* implicit */_Bool) 2546569774U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25558))) : (var_8)))))) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) > (((/* implicit */int) var_18))))) : (((int) (unsigned char)78)))))));
        arr_4 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (short)-30367)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1)))))), ((~(((unsigned int) 13141970093034952769ULL))))));
    }
    var_20 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))), (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967274U))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */int) ((short) arr_1 [i_1])))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */_Bool) max((arr_5 [i_1 - 1]), (((/* implicit */int) var_11))))) ? (14869414488451917653ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 2])) ? (arr_5 [i_1 + 3]) : (arr_5 [i_1 + 1]))))))));
    }
}

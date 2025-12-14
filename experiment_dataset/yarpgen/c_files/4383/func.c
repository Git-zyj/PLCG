/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4383
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
    var_11 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (_Bool)1)), (-8113866241678762311LL)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-30511))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))) : (((/* implicit */int) arr_1 [i_0])))) : ((-(((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_0])))))))))));
        var_13 = ((/* implicit */short) max((((/* implicit */int) (unsigned char)253)), (((((/* implicit */_Bool) min(((unsigned short)26), (arr_0 [12U] [(unsigned char)11])))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)-1))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_3 [11U] [i_1])))) || (((/* implicit */_Bool) arr_1 [7]))));
        arr_7 [i_1] = ((/* implicit */unsigned char) arr_3 [i_1] [i_1]);
    }
}

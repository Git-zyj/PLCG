/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2172
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
    var_18 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)0))));
    var_19 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_20 = ((((/* implicit */_Bool) (+(arr_3 [i_0])))) ? (((/* implicit */int) arr_2 [16ULL])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (var_1)))) ? (((/* implicit */int) (signed char)-1)) : (((((/* implicit */_Bool) (short)-15535)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)17214)))))));
        var_21 = ((/* implicit */long long int) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (4858095235586743662ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15534))))))))) | (((/* implicit */int) var_13))));
    }
    var_22 -= max((((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1530085805442319833ULL))))) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) ((short) var_3))));
    var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (((((/* implicit */_Bool) 16980113415288833637ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (7476407880561742137ULL)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214943
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
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) (+((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)27722)) : (((/* implicit */int) (short)-27727))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [10ULL] [i_0]))))) / (((/* implicit */int) arr_1 [i_0])))) | (((/* implicit */int) min((min(((short)27722), ((short)27726))), (((/* implicit */short) (signed char)(-127 - 1))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) (unsigned char)145)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_1 [i_1]))))));
        var_11 *= ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) (_Bool)1)))));
        var_12 = ((/* implicit */int) var_5);
    }
    var_13 = (!(((/* implicit */_Bool) var_3)));
    var_14 = ((/* implicit */unsigned char) min((var_3), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27711)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-27723))))) : (((var_6) - (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
    var_15 = var_0;
}

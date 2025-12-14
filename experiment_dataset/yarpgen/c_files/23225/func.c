/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23225
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_4 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((1820703586) ^ (((/* implicit */int) arr_0 [i_0]))));
        var_20 = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_9)))) ^ (((/* implicit */int) arr_3 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_1 [i_1]))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [3ULL])))))));
        var_22 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned long long int) 5499662996639503046ULL))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (var_15) : (((/* implicit */int) arr_1 [i_1])))) : (((((/* implicit */int) var_10)) & (var_15))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)47113)) || (((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)50876)), (arr_6 [(_Bool)1])))))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned short) arr_0 [i_1]))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 1820703583))))), (((-7484181993737091775LL) ^ (var_11)))))));
    }
    for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_11 [i_2] [(signed char)2] = ((/* implicit */unsigned char) max(((~(((7484181993737091761LL) | (var_4))))), (((((/* implicit */long long int) var_3)) ^ ((+(arr_8 [(_Bool)1] [i_2])))))));
        arr_12 [i_2] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_10 [i_2]))))));
        arr_13 [i_2] [i_2] = ((/* implicit */_Bool) ((-7484181993737091783LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24648)))));
        var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))), ((~(var_17)))));
    }
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)19723)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2898481826U)) ? (var_15) : (((/* implicit */int) var_8)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */long long int) ((var_16) ? (568099754) : (((/* implicit */int) (unsigned short)61205))))) / (max((var_11), (((/* implicit */long long int) (unsigned short)18416))))))));
}

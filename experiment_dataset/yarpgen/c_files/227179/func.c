/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227179
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0 - 1] [i_0])) + (2147483647))) >> (((var_2) - (14674969166338452340ULL)))))))))));
        var_20 = ((/* implicit */int) var_14);
        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-107))))) ? (min((var_16), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)26217)) ? (arr_1 [i_0] [(unsigned short)6]) : (((/* implicit */int) (short)32764)))))))) + (max((var_18), (((/* implicit */unsigned long long int) (~(arr_2 [i_0]))))))));
        var_22 ^= ((/* implicit */int) (~(var_10)));
    }
    for (signed char i_1 = 3; i_1 < 17; i_1 += 3) 
    {
        arr_6 [i_1] = ((((/* implicit */_Bool) min((var_14), (arr_5 [(_Bool)1] [i_1 - 3])))) ? (max((arr_1 [i_1 + 1] [i_1]), (((((/* implicit */int) arr_0 [i_1] [i_1])) / (((/* implicit */int) (unsigned char)104)))))) : ((-(((/* implicit */int) arr_3 [i_1] [i_1])))));
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */int) var_5)) != ((~(((arr_1 [i_1] [i_1]) | (((/* implicit */int) (short)-17079))))))));
        var_23 += max((((/* implicit */int) ((var_4) < (((/* implicit */int) arr_0 [i_1 + 2] [i_1]))))), ((~(var_13))));
    }
    var_24 = ((/* implicit */int) var_15);
    var_25 = ((/* implicit */unsigned short) var_2);
    var_26 = ((/* implicit */unsigned int) var_6);
}

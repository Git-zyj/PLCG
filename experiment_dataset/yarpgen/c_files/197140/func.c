/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197140
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) var_9))))) ? (var_7) : (((/* implicit */int) var_3))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) : (((/* implicit */int) (_Bool)0))))) ? ((-(((((/* implicit */_Bool) arr_1 [10] [10])) ? (((/* implicit */int) arr_1 [i_0] [13ULL])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))) : (-1621921952)));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */int) ((var_9) ? (arr_7 [9U] [i_1]) : (((((/* implicit */_Bool) (unsigned short)5866)) ? (arr_7 [i_1] [i_1]) : (((/* implicit */unsigned int) 57332800))))));
        var_10 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)0] [i_1])) ? (((unsigned long long int) arr_7 [i_1] [(short)4])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (var_7) : (((/* implicit */int) arr_4 [i_1])))))))) ? (((/* implicit */int) arr_1 [1] [i_1])) : (((/* implicit */int) max((arr_4 [i_1]), (arr_4 [i_1]))))));
    }
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        arr_11 [4ULL] = ((/* implicit */unsigned long long int) arr_6 [(unsigned short)12] [i_2]);
        arr_12 [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 57332800)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (unsigned char)35))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (min((var_1), (((/* implicit */int) (unsigned char)144))))));
        var_11 |= ((/* implicit */unsigned char) var_3);
    }
    var_12 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_4)), (var_8))), (var_8)))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4590440139590307382LL)) ? (var_1) : ((~(((/* implicit */int) var_3)))))))));
}

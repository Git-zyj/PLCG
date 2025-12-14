/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34754
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-21090)) : (((/* implicit */int) (signed char)(-127 - 1)))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_15)) : (var_10))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9783)) ? (var_15) : (((/* implicit */int) (short)-9798))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)9798))) < (arr_0 [i_0] [i_0]))))) : (arr_1 [i_0])));
        arr_2 [i_0] = ((((/* implicit */unsigned int) ((((((/* implicit */int) (short)-9798)) + (2147483647))) << (((arr_0 [i_0] [i_0]) - (4961012017052469450LL)))))) ^ (658823399U));
    }
    for (int i_1 = 2; i_1 < 16; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) var_9);
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)28368)) / (((/* implicit */int) (short)-9783))))) ? ((+(3811054284367418556LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2004689934)) ? (((/* implicit */int) var_11)) : (arr_3 [i_1 - 2]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)4595))) : (max((((/* implicit */unsigned int) max((var_6), (arr_3 [i_1])))), ((((_Bool)0) ? (((/* implicit */unsigned int) var_6)) : (1073741816U))))))))));
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)16384)), (15490810607874754496ULL)))) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */long long int) arr_3 [i_1 + 1])) : (arr_1 [i_1]))) : (min(((+(arr_0 [i_1] [i_1]))), (((/* implicit */long long int) ((arr_1 [i_1 + 2]) == (arr_0 [i_1] [i_1]))))))));
    }
}

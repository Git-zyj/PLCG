/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39209
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
    var_13 = ((/* implicit */int) var_2);
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (unsigned short)13542))))) <= (((/* implicit */int) (unsigned short)52007)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            var_15 *= ((/* implicit */unsigned char) ((((((16128U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [6ULL]))))) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52007))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)13525)) != (((/* implicit */int) arr_5 [12ULL] [i_1 + 1] [i_1 - 1])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3674103972108080766ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)255))))) ? (min((((/* implicit */unsigned long long int) (signed char)0)), (17910059504886858129ULL))) : (((/* implicit */unsigned long long int) ((arr_4 [2LL] [(unsigned short)2] [2LL]) % (((/* implicit */int) (unsigned char)118)))))))));
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_1 + 3] [i_1 + 2]))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_1 + 3] [i_1 + 2])))) : (((((/* implicit */_Bool) arr_1 [i_1 + 3] [i_1 + 2])) ? (arr_1 [i_1 + 3] [i_1 + 2]) : (arr_1 [i_1 + 3] [i_1 + 2]))))))));
        }
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((/* implicit */long long int) arr_0 [(short)14])), (((((/* implicit */_Bool) arr_0 [14ULL])) ? (((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_0]))))))));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_3 [16U] [i_0] [i_0]))) ? (max((((/* implicit */int) (unsigned char)118)), (arr_4 [i_0] [i_0] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3596912459U)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_18 = ((/* implicit */int) (unsigned char)181);
        var_19 = ((((((/* implicit */_Bool) var_12)) ? (arr_9 [i_2]) : (arr_9 [i_2]))) | (arr_9 [i_2]));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        var_20 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_10)))));
        var_21 = ((/* implicit */unsigned int) (unsigned char)32);
    }
    var_22 = var_7;
    var_23 = ((/* implicit */unsigned short) var_1);
}

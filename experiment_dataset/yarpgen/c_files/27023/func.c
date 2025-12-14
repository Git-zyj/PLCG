/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27023
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
    var_12 = ((/* implicit */unsigned short) (((+(min((((/* implicit */unsigned long long int) (short)387)), (var_0))))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) min(((short)387), ((short)-387)))))))));
    var_13 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((2147483647) > (((/* implicit */int) (unsigned short)24423))));
        var_14 &= ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 3637715533U)) ? (((/* implicit */unsigned long long int) 657251763U)) : (12199912131858273392ULL)));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) (short)387)) : (((/* implicit */int) arr_3 [i_1])))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) (short)-387)))));
        arr_10 [i_2] [i_2] = ((/* implicit */short) (unsigned char)13);
        arr_11 [7U] = ((/* implicit */_Bool) -4511832596422150471LL);
    }
    /* LoopSeq 2 */
    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        var_16 *= ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_3])), (arr_13 [i_3])))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (2926899703334271544LL) : (arr_12 [i_3])))) ? (((/* implicit */int) (unsigned char)173)) : ((-(((/* implicit */int) arr_3 [i_3]))))))));
        var_17 = ((/* implicit */_Bool) (+(var_3)));
        arr_14 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)59215)) - (((/* implicit */int) arr_13 [i_3])))) << (((min((7346281885836438220ULL), (((/* implicit */unsigned long long int) arr_3 [i_3])))) - (23873ULL)))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((long long int) (-(arr_12 [i_3])))))));
    }
    for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned char) ((min((arr_7 [i_4]), (((/* implicit */unsigned long long int) (unsigned char)114)))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)30062)) & (((/* implicit */int) (unsigned short)48247)))))));
        var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) arr_0 [i_4])), (-1743948012051893590LL)))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)232)) + (((/* implicit */int) arr_3 [i_4]))))) - (min((8937478856392023318ULL), (((/* implicit */unsigned long long int) -1636962424))))))));
        arr_18 [i_4] [10LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_4 [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_4])))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), (arr_3 [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (arr_7 [i_4])))));
    }
    var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? ((~(((((/* implicit */_Bool) (unsigned short)65518)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_2))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
}
